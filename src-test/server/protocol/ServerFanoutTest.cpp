#include "gtest/gtest.h"

#include <functional>
#include <memory>
#include <string>

#include "ll/api/mod/Mod.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/api/protocol/Server.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/ProtocolSession.h"
#include "ll/core/protocol/ServerEndpoint.h"
#include "ll/core/protocol/ServerSessionSource.h"

namespace ll::protocol::test {

namespace {

class FanoutTestMod final : public mod::Mod {
public:
    FanoutTestMod()
    : Mod(mod::Manifest{
          .entry             = "fanout-test.dll",
          .name              = "ProtocolServerFanout",
          .type              = "native",
          .protocolNamespace = "server_fanout",
      }) {}

    void enable() { setState(State::Enabled); }
};

struct FanoutPayload {
    std::uint32_t value{};
};

struct CountingCodec {
    std::shared_ptr<std::size_t>           encodeCount;
    std::shared_ptr<std::function<void()>> onEncode;

    Expected<> encode(Encoder& out, FanoutPayload const& value, SchemaVersion schema) const {
        ++*encodeCount;
        if (*onEncode) (*onEncode)();
        if (schema != 1 && schema != 2) return makeCodecError(CodecErrc::UnsupportedSchema);
        return out.writeU32(value.value);
    }

    Expected<FanoutPayload> decode(Decoder& in, SchemaVersion schema) const {
        if (schema != 1 && schema != 2) return makeCodecError(CodecErrc::UnsupportedSchema);

        auto value = in.readU32();
        if (!value) return forwardError(value.error());
        return FanoutPayload{*value};
    }
};

class FanoutTransport final : public detail::SessionTransport {
public:
    std::size_t sends{};
    bool        rejectSends{};

    [[nodiscard]] bool isOnEndpointThread() const noexcept override { return true; }

    Expected<> send(std::unique_ptr<detail::ProtocolEnvelopePacket>) override {
        if (rejectSends) return makeTransportError(TransportErrc::SendFailed);

        ++sends;
        return {};
    }
};

detail::TransportLimits fanoutLimits() {
    return {
        Limits::MaxControlBody,
        Limits::DefaultPayloadBody,
        Limits::DefaultPacketsPerSecond,
        Limits::DefaultBytesPerSecond,
        Limits::DefaultBurstPackets,
        Limits::DefaultBurstBytes,
    };
}

std::shared_ptr<detail::ProtocolSession> activeFanoutSession(
    std::uint64_t                                          endpoint,
    std::shared_ptr<detail::RegistrySnapshot const> const& registry,
    std::shared_ptr<FanoutTransport> const&                transport,
    PayloadDescriptor const&                               descriptor,
    SchemaVersion                                          schema          = 1,
    std::uint32_t                                          selectedMaximum = 0
) {
    // clang-format off
    auto session = std::make_shared<detail::ProtocolSession>(
        detail::SessionIdentity{
            {endpoint, EndpointRole::Server, "fanout-peer", 0, 1},
            endpoint
        },
        registry,
        transport,
        fanoutLimits()
    );
    // clang-format on

    EXPECT_TRUE(session->transition(SessionState::Handshaking, SessionState::Negotiating));

    detail::NegotiationPlan plan{
        .coreProtocol           = 1,
        .serverRegistryRevision = registry->revision,
        .clientRegistryRevision = 1,
        .limits                 = fanoutLimits(),
        .payloads               = {{
            descriptor.id(),
            descriptor.runtimeId(),
            descriptor.definition().direction,
            schema,
            selectedMaximum == 0 ? descriptor.definition().maxEncodedSize : selectedMaximum,
        }},
    };
    detail::TranscriptDigest digest{};

    digest.front() = std::byte{1};
    EXPECT_TRUE(session->installNegotiation(std::move(plan), digest));
    EXPECT_TRUE(session->acceptPeerReady(digest));
    EXPECT_TRUE(session->activate());
    return session;
}

class FanoutSessionSource final : public detail::ServerSessionSource {
public:
    std::vector<Session> sessions;

    [[nodiscard]] bool isOnEndpointThread() const noexcept override { return true; }

    Expected<Session> resolve(NetworkIdentifierWithSubId const&) override {
        return makeSessionError(SessionErrc::NotFound);
    }

    Expected<std::vector<Session>> snapshotActive() override { return sessions; }
};

} // namespace

TEST(ProtocolServerFanoutTest, HandlesSchemaCohortsDuplicatesAndMixedFailures) {
    auto owner = std::make_shared<FanoutTestMod>();
    owner->enable();

    auto& payloadRegistry = PayloadRegistry::getInstance();
    // clang-format off
    auto module = payloadRegistry.registerModule(
        ModuleDefinition{
            .name             = *ModuleName::parse("main"),
            .version          = {1, 0, 0},
            .protocolVersions = {1, 1},
        },
        owner
    );
    // clang-format on

    ASSERT_TRUE(module);

    auto encodeCount = std::make_shared<std::size_t>();
    auto onEncode    = std::make_shared<std::function<void()>>();
    auto payload     = payloadRegistry.registerPayload<FanoutPayload>(
        *module,
        PayloadDefinition{
            .name           = *PayloadName::parse("message"),
            .direction      = PayloadDirection::ServerToClient,
            .schemas        = {1, 2},
            .maxEncodedSize = 1024,
    },
        CountingCodec{encodeCount, onEncode}
    );
    ASSERT_TRUE(payload);

    auto snapshot   = detail::PayloadRegistryAccess::snapshot(payloadRegistry);
    auto descriptor = payloadRegistry.findPayload(payload->id());

    ASSERT_NE(descriptor, nullptr);
    auto firstTransport   = std::make_shared<FanoutTransport>();
    auto secondTransport  = std::make_shared<FanoutTransport>();
    auto thirdTransport   = std::make_shared<FanoutTransport>();
    auto closedTransport  = std::make_shared<FanoutTransport>();
    auto smallTransport   = std::make_shared<FanoutTransport>();
    auto failingTransport = std::make_shared<FanoutTransport>();
    auto first            = activeFanoutSession(101, snapshot, firstTransport, *descriptor);
    auto second           = activeFanoutSession(102, snapshot, secondTransport, *descriptor);
    auto third            = activeFanoutSession(103, snapshot, thirdTransport, *descriptor, 2);
    auto closed           = activeFanoutSession(104, snapshot, closedTransport, *descriptor);
    auto small            = activeFanoutSession(105, snapshot, smallTransport, *descriptor, 1, 2);
    auto failing          = activeFanoutSession(106, snapshot, failingTransport, *descriptor);

    auto failingHandle = detail::SessionAccess::makeSession(failing);
    ASSERT_TRUE(failingHandle.send(FanoutPayload{1}));
    failingTransport->rejectSends = true;
    *encodeCount                  = 0;
    closed->close();

    std::vector<Session> sessions{
        detail::SessionAccess::makeSession(first),
        detail::SessionAccess::makeSession(second),
        detail::SessionAccess::makeSession(third),
        detail::SessionAccess::makeSession(closed),
        detail::SessionAccess::makeSession(small),
        failingHandle,
        detail::SessionAccess::makeSession(first),
    };

    std::vector<std::size_t> indices{0, 1, 2, 3, 4, 5, 6};
    server::FanoutResult     result{.requested = 7, .attempted = 7};
    FanoutPayload            value{42};

    auto sent = detail::ServerAccess::sendErased(sessions, indices, typeid(FanoutPayload), &value, result, 1);

    ASSERT_TRUE(sent) << sent.error().message();
    EXPECT_EQ(*encodeCount, 3);
    EXPECT_EQ(result.sent, 4);
    EXPECT_EQ(result.failed, 3);
    ASSERT_EQ(result.failures.size(), 1);
    EXPECT_TRUE(result.failuresTruncated);
    EXPECT_EQ(firstTransport->sends, 2);
    EXPECT_EQ(secondTransport->sends, 1);
    EXPECT_EQ(thirdTransport->sends, 1);
    EXPECT_EQ(closedTransport->sends, 0);
    EXPECT_EQ(smallTransport->sends, 0);
    EXPECT_EQ(failingTransport->sends, 1);

    auto source      = std::make_shared<FanoutSessionSource>();
    source->sessions = {
        detail::SessionAccess::makeSession(first),
        detail::SessionAccess::makeSession(second),
    };
    *onEncode = [source, third] { source->sessions.emplace_back(detail::SessionAccess::makeSession(third)); };

    auto endpoint = detail::getServerEndpoint();
    if (endpoint) detail::clearServerSessionSource(*endpoint);

    auto installed = detail::setServerSessionSource(source);
    if (!installed && endpoint) {
        EXPECT_TRUE(detail::setServerSessionSource(endpoint));
    }
    ASSERT_TRUE(installed);

    auto broadcast = server::broadcast(FanoutPayload{43});
    detail::clearServerSessionSource(*source);
    if (endpoint) EXPECT_TRUE(detail::setServerSessionSource(endpoint));

    *onEncode = {};

    ASSERT_TRUE(broadcast) << broadcast.error().message();
    EXPECT_EQ(broadcast->requested, 2);
    EXPECT_EQ(broadcast->attempted, 2);
    EXPECT_EQ(broadcast->sent, 2);
    EXPECT_EQ(broadcast->failed, 0);
    EXPECT_EQ(source->sessions.size(), 3);
    EXPECT_EQ(thirdTransport->sends, 1);

    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

} // namespace ll::protocol::test
