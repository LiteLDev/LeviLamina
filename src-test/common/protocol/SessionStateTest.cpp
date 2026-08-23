#include "gtest/gtest.h"

#include <chrono>
#include <memory>

#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/ProtocolSession.h"
#include "ll/core/protocol/SessionManager.h"

namespace ll::protocol::test {

namespace {

class FakeTransport final : public detail::SessionTransport {
public:
    bool        onThread{true};
    std::size_t sends{};

    [[nodiscard]] bool isOnEndpointThread() const noexcept override { return onThread; }

    Expected<> send(std::unique_ptr<detail::ProtocolEnvelopePacket>) override {
        ++sends;
        return {};
    }
};

detail::TransportLimits limits(std::uint32_t burstPackets = Limits::DefaultBurstPackets) {
    return {
        Limits::MaxControlBody,
        Limits::DefaultPayloadBody,
        Limits::DefaultPacketsPerSecond,
        Limits::DefaultBytesPerSecond,
        burstPackets,
        Limits::DefaultBurstBytes,
    };
}

std::shared_ptr<detail::RegistrySnapshot const> registry(std::uint64_t revision = 1) {
    auto value = std::make_shared<detail::RegistrySnapshot>();

    value->revision = revision;
    return value;
}

// clang-format off
std::shared_ptr<detail::ProtocolSession> session(EndpointRole role = EndpointRole::Server) {
    return std::make_shared<detail::ProtocolSession>(
        detail::SessionIdentity{
            {9, role, "test-connection", 0, 1},
            77
        },
        registry(),
        std::make_shared<FakeTransport>(),
        limits()
    );
}
// clang-format on

SessionErrc sessionCode(Error& error) {
    EXPECT_TRUE(error.isA<SessionErrorInfo>());
    return error.as<SessionErrorInfo>().code;
}

ProtocolErrc protocolCode(Error& error) {
    EXPECT_TRUE(error.isA<ProtocolErrorInfo>());
    return error.as<ProtocolErrorInfo>().code;
}

} // namespace

TEST(ProtocolSessionStateTest, EnforcesLoginActivationBarrierAndValidTransitions) {
    auto value = session();
    EXPECT_EQ(value->state(), SessionState::Handshaking);

    auto early = value->activate();
    ASSERT_FALSE(early);

    EXPECT_EQ(sessionCode(early.error()), SessionErrc::WrongState);

    ASSERT_TRUE(value->transition(SessionState::Handshaking, SessionState::Negotiating));
    detail::NegotiationPlan plan{
        .coreProtocol           = 1,
        .serverRegistryRevision = 1,
        .clientRegistryRevision = 2,
        .limits                 = limits(),
    };

    detail::TranscriptDigest digest{};
    digest.front() = std::byte{1};
    ASSERT_TRUE(value->installNegotiation(std::move(plan), digest));
    EXPECT_EQ(value->state(), SessionState::ReadyLocal);

    ASSERT_TRUE(value->acceptPeerReady(digest));
    EXPECT_EQ(value->state(), SessionState::ProtocolReady);

    ASSERT_TRUE(value->activate());
    EXPECT_EQ(value->state(), SessionState::Active);

    auto handle = detail::SessionAccess::makeSession(value);
    EXPECT_TRUE(handle);
    EXPECT_TRUE(handle.active());

    auto frozen = handle.view();
    ASSERT_TRUE(frozen);
    EXPECT_EQ(frozen.state(), SessionState::Active);

    EXPECT_TRUE(value->beginClosing());
    EXPECT_FALSE(value->beginClosing());

    value->close();

    EXPECT_FALSE(handle);
    EXPECT_FALSE(handle.active());
    EXPECT_EQ(frozen.state(), SessionState::Active);
}

TEST(ProtocolSessionStateTest, RejectsReplayGapAndStaleHandshake) {
    auto value = session();
    ASSERT_TRUE(value->validateInboundControl({1, 77, 1}, 16));

    auto replay = value->validateInboundControl({1, 77, 1}, 16);
    ASSERT_FALSE(replay);
    EXPECT_EQ(protocolCode(replay.error()), ProtocolErrc::ReplayDetected);

    auto gap = value->validateInboundControl({1, 77, 3}, 16);
    ASSERT_FALSE(gap);
    EXPECT_EQ(protocolCode(gap.error()), ProtocolErrc::SequenceMismatch);

    auto stale = value->validateInboundControl({1, 78, 2}, 16);
    ASSERT_FALSE(stale);
    EXPECT_EQ(protocolCode(stale.error()), ProtocolErrc::HandshakeIdMismatch);
    ASSERT_TRUE(value->validateInboundControl({1, 77, 2}, 16));
}

TEST(ProtocolSessionStateTest, RejectsControlAfterClosingWithoutAdvancingSequence) {
    auto value = session();
    ASSERT_TRUE(value->validateInboundControl({1, 77, 1}, 16));
    ASSERT_TRUE(value->beginClosing());

    auto closing = value->validateInboundControl({1, 77, 2}, 16);
    ASSERT_FALSE(closing);
    EXPECT_EQ(sessionCode(closing.error()), SessionErrc::Closed);

    value->close();
    auto closed = value->validateInboundControl({1, 77, 2}, 16);
    ASSERT_FALSE(closed);
    EXPECT_EQ(sessionCode(closed.error()), SessionErrc::Closed);
}

TEST(ProtocolSessionStateTest, RejectsDuplicateReadyWithoutMutatingReadyState) {
    auto value = session();
    ASSERT_TRUE(value->transition(SessionState::Handshaking, SessionState::Negotiating));
    detail::NegotiationPlan plan{
        .coreProtocol           = 1,
        .serverRegistryRevision = 1,
        .clientRegistryRevision = 2,
        .limits                 = limits(),
    };
    detail::TranscriptDigest digest{};
    digest.front() = std::byte{1};
    ASSERT_TRUE(value->installNegotiation(std::move(plan), digest));
    ASSERT_TRUE(value->acceptPeerReady(digest));

    auto duplicate = value->acceptPeerReady(digest);
    ASSERT_FALSE(duplicate);
    EXPECT_EQ(sessionCode(duplicate.error()), SessionErrc::WrongState);
    EXPECT_EQ(value->state(), SessionState::ProtocolReady);
}

TEST(ProtocolSessionStateTest, HandshakeBudgetFailureDoesNotAdvanceSequence) {
    auto value = session();
    for (std::uint32_t sequence = 1; sequence <= Limits::MaxHandshakeMessages; ++sequence) {
        ASSERT_TRUE(value->validateInboundControl({1, 77, sequence}, 0));
    }

    auto exhausted = value->validateInboundControl({1, 77, Limits::MaxHandshakeMessages + 1}, 0);
    ASSERT_FALSE(exhausted);
    EXPECT_EQ(protocolCode(exhausted.error()), ProtocolErrc::DeclarationMalformed);

    auto sameSequence = value->validateInboundControl({1, 77, Limits::MaxHandshakeMessages + 1}, 0);
    ASSERT_FALSE(sameSequence);
    EXPECT_EQ(protocolCode(sameSequence.error()), ProtocolErrc::DeclarationMalformed);
}

TEST(ProtocolSessionStateTest, ManagerReplacesSessionAndSeparatesSubclients) {
    detail::SessionManager manager{15, EndpointRole::Server};

    auto transport = std::make_shared<FakeTransport>();
    auto first     = manager.open("peer", 0, 1, 1, registry(), transport, limits());
    ASSERT_TRUE(first);

    auto secondSubclient = manager.open("peer", 1, 1, 2, registry(), transport, limits());
    ASSERT_TRUE(secondSubclient);
    EXPECT_EQ((*first)->generation(), 1);
    EXPECT_EQ((*secondSubclient)->generation(), 1);
    EXPECT_EQ(manager.find("peer", 0, 1), *first);
    EXPECT_EQ(manager.find("peer", 1, 1), *secondSubclient);

    auto replacement = manager.open("peer", 0, 2, 3, registry(), transport, limits());
    ASSERT_TRUE(replacement);
    EXPECT_EQ((*replacement)->generation(), 2);
    EXPECT_EQ((*first)->state(), SessionState::Closed);
    EXPECT_EQ(manager.find("peer", 0, 1), nullptr);
    EXPECT_EQ(manager.find("peer", 0, 2), *replacement);
    EXPECT_EQ(manager.find("peer", 1, 1), *secondSubclient);
}

TEST(ProtocolSessionStateTest, ManagerRejectsStaleGenerationWithoutReplacingCurrentSession) {
    detail::SessionManager manager{15, EndpointRole::Server};

    auto transport = std::make_shared<FakeTransport>();

    auto current = manager.open("peer", 0, 2, 2, registry(), transport, limits());
    ASSERT_TRUE(current);

    auto stale = manager.open("peer", 0, 1, 1, registry(), transport, limits());
    ASSERT_FALSE(stale);
    EXPECT_EQ(sessionCode(stale.error()), SessionErrc::WrongGeneration);
    EXPECT_EQ(manager.find("peer", 0, 2), *current);
    EXPECT_EQ((*current)->state(), SessionState::Handshaking);
}

TEST(ProtocolSessionStateTest, RejectsInvalidTransitionsAndReadyDigestMismatch) {
    auto value = session();

    auto skipped = value->transition(SessionState::Handshaking, SessionState::ReadyLocal);
    ASSERT_FALSE(skipped);
    EXPECT_EQ(protocolCode(skipped.error()), ProtocolErrc::InvalidState);

    ASSERT_TRUE(value->transition(SessionState::Handshaking, SessionState::Negotiating));
    detail::NegotiationPlan plan{
        .coreProtocol           = 1,
        .serverRegistryRevision = 1,
        .clientRegistryRevision = 2,
        .limits                 = limits(),
    };
    detail::TranscriptDigest digest{};
    digest.front() = std::byte{1};
    ASSERT_TRUE(value->installNegotiation(std::move(plan), digest));

    auto wrongDigest   = digest;
    wrongDigest.back() = std::byte{1};
    auto mismatch      = value->acceptPeerReady(wrongDigest);
    ASSERT_FALSE(mismatch);
    EXPECT_EQ(protocolCode(mismatch.error()), ProtocolErrc::DigestMismatch);
    EXPECT_EQ(value->state(), SessionState::ReadyLocal);
}

TEST(ProtocolSessionStateTest, RateBudgetRefillsWithoutUnboundedBurst) {
    using namespace std::chrono_literals;
    auto now = std::chrono::steady_clock::time_point{};

    detail::RateBudget budget{10, 2, now};
    EXPECT_TRUE(budget.consume(2, now));
    EXPECT_FALSE(budget.consume(1, now));
    EXPECT_TRUE(budget.consume(1, now + 100ms));
    EXPECT_FALSE(budget.consume(1, now + 100ms));
    EXPECT_TRUE(budget.consume(2, now + 10s));
    EXPECT_FALSE(budget.consume(1, now + 10s));
}

TEST(ProtocolSessionStateTest, ActiveServerInboundGateChargesPacketBeforeDecode) {
    auto value = session(EndpointRole::Server);
    ASSERT_TRUE(value->transition(SessionState::Handshaking, SessionState::Negotiating));

    auto constrained = limits(1);

    detail::NegotiationPlan plan{
        .coreProtocol           = 1,
        .serverRegistryRevision = 1,
        .clientRegistryRevision = 2,
        .limits                 = constrained,
    };
    detail::TranscriptDigest digest{};

    digest.front() = std::byte{1};
    ASSERT_TRUE(value->installNegotiation(std::move(plan), digest));
    ASSERT_TRUE(value->acceptPeerReady(digest));
    ASSERT_TRUE(value->activate());

    auto now = std::chrono::steady_clock::time_point{};
    EXPECT_TRUE(value->admitInbound(32, now));
    auto limited = value->admitInbound(1, now);
    ASSERT_FALSE(limited);
    EXPECT_EQ(protocolCode(limited.error()), ProtocolErrc::RateLimitExceeded);
}

TEST(ProtocolSessionStateTest, RateBudgetDiscardsFractionalCreditWhileFull) {
    using namespace std::chrono_literals;
    auto now = std::chrono::steady_clock::time_point{};

    detail::RateBudget budget{10, 2, now};

    EXPECT_TRUE(budget.consume(2, now + 150ms));
    EXPECT_FALSE(budget.consume(1, now + 200ms));
    EXPECT_TRUE(budget.consume(1, now + 250ms));
}

TEST(ProtocolSessionStateTest, DirectionBudgetChargesRejectedByteFloodAndIgnoresBackwardClock) {
    auto now = std::chrono::steady_clock::time_point{};

    auto constrained           = limits(2);
    constrained.burstBytes     = 4;
    constrained.bytesPerSecond = 1;
    detail::DirectionBudget budget{constrained, now};

    EXPECT_FALSE(budget.consume(5, now));
    EXPECT_TRUE(budget.consume(1, now));
    EXPECT_FALSE(budget.consume(1, now));
    EXPECT_FALSE(budget.consume(1, now - std::chrono::seconds{1}));
}

} // namespace ll::protocol::test
