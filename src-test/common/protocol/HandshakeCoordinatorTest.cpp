#include "gtest/gtest.h"

#include <cstdint>
#include <memory>
#include <utility>

#include "ll/core/protocol/HandshakeCoordinator.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"

namespace ll::protocol::test {

namespace {

class HandshakeFakeTransport final : public detail::SessionTransport {
public:
    [[nodiscard]] bool isOnEndpointThread() const noexcept override { return true; }
    Expected<>         send(std::unique_ptr<detail::ProtocolEnvelopePacket>) override { return {}; }
};

detail::TransportLimits handshakeLimits() {
    return {
        Limits::MaxControlBody,
        Limits::DefaultPayloadBody,
        Limits::DefaultPacketsPerSecond,
        Limits::DefaultBytesPerSecond,
        Limits::DefaultBurstPackets,
        Limits::DefaultBurstBytes,
    };
}

detail::Nonce handshakeNonce(std::uint8_t value) {
    detail::Nonce nonce{};
    nonce.front() = static_cast<std::byte>(value);
    return nonce;
}

std::shared_ptr<detail::RegistrySnapshot const> emptyRegistry(std::uint64_t revision) {
    auto registry      = std::make_shared<detail::RegistrySnapshot>();
    registry->revision = revision;
    return registry;
}

std::shared_ptr<detail::ProtocolSession>
handshakeSession(EndpointRole role, std::shared_ptr<detail::RegistrySnapshot const> registry) {
    return std::make_shared<detail::ProtocolSession>(
        detail::SessionIdentity{
            {role == EndpointRole::Server ? 1U : 2U, role, "peer", 0, 1},
            77
    },
        std::move(registry),
        std::make_shared<HandshakeFakeTransport>(),
        handshakeLimits()
    );
}

} // namespace

TEST(ProtocolHandshakeCoordinatorTest, CompletesCanonicalHandshakeBeforeActivation) {
    auto serverRegistry = emptyRegistry(11);
    auto clientRegistry = emptyRegistry(17);
    auto serverSession  = handshakeSession(EndpointRole::Server, serverRegistry);
    auto clientSession  = handshakeSession(EndpointRole::Client, clientRegistry);

    detail::HandshakeCoordinator server{
        EndpointRole::Server,
        serverSession,
        serverRegistry,
        handshakeLimits(),
    };
    detail::HandshakeCoordinator client{
        EndpointRole::Client,
        clientSession,
        clientRegistry,
        handshakeLimits(),
    };

    auto serverNonce = handshakeNonce(1);
    auto clientNonce = handshakeNonce(2);

    auto serverHello = server.startServer(1, serverNonce);
    ASSERT_TRUE(serverHello) << serverHello.error().message();
    ASSERT_EQ(serverHello->outbound.size(), 1U);

    auto hello = std::get<detail::Hello>(std::move(serverHello->outbound.front()));
    EXPECT_EQ(hello.header.messageSequence, 1U);
    EXPECT_EQ(serverSession->state(), SessionState::Handshaking);
    auto clientAck = client.acceptServerHello(std::move(hello), clientNonce, 64);
    ASSERT_TRUE(clientAck) << clientAck.error().message();

    auto serverDeclaration = server.receive(std::move(clientAck->outbound.front()), 64);
    ASSERT_TRUE(serverDeclaration) << serverDeclaration.error().message();
    EXPECT_EQ(serverSession->state(), SessionState::Negotiating);
    ASSERT_FALSE(serverDeclaration->outbound.empty());

    detail::HandshakeProgress clientDeclaration;
    for (auto& message : serverDeclaration->outbound) {
        auto progress = client.receive(std::move(message), 64);
        ASSERT_TRUE(progress) << progress.error().message();
        if (!progress->outbound.empty()) clientDeclaration = std::move(*progress);
    }
    ASSERT_FALSE(clientDeclaration.outbound.empty());

    detail::HandshakeProgress negotiationResult;
    for (auto& message : clientDeclaration.outbound) {
        auto progress = server.receive(std::move(message), 64);
        ASSERT_TRUE(progress) << progress.error().message();
        if (!progress->outbound.empty()) negotiationResult = std::move(*progress);
    }
    ASSERT_FALSE(negotiationResult.outbound.empty());

    detail::HandshakeProgress clientReady;
    for (auto& message : negotiationResult.outbound) {
        auto progress = client.receive(std::move(message), 64);
        ASSERT_TRUE(progress) << progress.error().message();
        if (!progress->outbound.empty()) clientReady = std::move(*progress);
    }
    ASSERT_EQ(clientReady.outbound.size(), 1U);

    auto serverReady = server.receive(std::move(clientReady.outbound.front()), 64);
    ASSERT_TRUE(serverReady) << serverReady.error().message();
    EXPECT_TRUE(serverReady->protocolReady);
    ASSERT_EQ(serverReady->outbound.size(), 1U);

    auto clientComplete = client.receive(std::move(serverReady->outbound.front()), 64);
    ASSERT_TRUE(clientComplete) << clientComplete.error().message();
    EXPECT_TRUE(clientComplete->protocolReady);
    EXPECT_EQ(serverSession->state(), SessionState::ProtocolReady);
    EXPECT_EQ(clientSession->state(), SessionState::ProtocolReady);
    EXPECT_FALSE(serverSession->active(1));
    EXPECT_FALSE(clientSession->active(1));
}

TEST(ProtocolHandshakeCoordinatorTest, RejectsDuplicateInitialControl) {
    auto                         registry = emptyRegistry(1);
    auto                         session  = handshakeSession(EndpointRole::Server, registry);
    detail::HandshakeCoordinator server{EndpointRole::Server, session, registry, handshakeLimits()};

    auto nonce       = handshakeNonce(1);
    auto clientNonce = handshakeNonce(2);
    auto start       = server.startServer(1, nonce);
    ASSERT_TRUE(start);

    detail::HelloAck ack{
        {1, 77, 1},
        nonce,
        clientNonce,
        1,
        handshakeLimits(),
        {},
    };
    ASSERT_TRUE(server.receive(detail::ControlMessage{ack}, 32));
    EXPECT_FALSE(server.receive(detail::ControlMessage{std::move(ack)}, 32));
}

TEST(ProtocolHandshakeCoordinatorTest, RejectsIncompatibleOrOutOfOrderControl) {
    auto                         registry      = emptyRegistry(1);
    auto                         clientSession = handshakeSession(EndpointRole::Client, registry);
    detail::HandshakeCoordinator client{EndpointRole::Client, clientSession, registry, handshakeLimits()};

    detail::Hello incompatible{
        {1, 77, 1},
        handshakeNonce(1),
        {2, 2},
        handshakeLimits(),
        {},
    };
    EXPECT_FALSE(client.acceptServerHello(std::move(incompatible), handshakeNonce(2), 32));

    auto                         serverSession = handshakeSession(EndpointRole::Server, registry);
    detail::HandshakeCoordinator server{EndpointRole::Server, serverSession, registry, handshakeLimits()};
    ASSERT_TRUE(server.startServer(1, handshakeNonce(1)));

    detail::Ready premature{
        {1, 77, 1},
        EndpointRole::Client,
        {}
    };
    EXPECT_FALSE(server.receive(detail::ControlMessage{premature}, 32));
    EXPECT_EQ(serverSession->state(), SessionState::Handshaking);
}

TEST(ProtocolHandshakeCoordinatorTest, RejectsInvalidAcceptedLimitsBeforeStateMutation) {
    auto                         registry = emptyRegistry(1);
    auto                         session  = handshakeSession(EndpointRole::Server, registry);
    detail::HandshakeCoordinator server{EndpointRole::Server, session, registry, handshakeLimits()};
    auto                         serverNonce = handshakeNonce(1);
    ASSERT_TRUE(server.startServer(1, serverNonce));

    auto invalidLimits           = handshakeLimits();
    invalidLimits.maxControlBody = Limits::MaxControlBody + 1;
    detail::HelloAck ack{
        {1, 77, 1},
        serverNonce,
        handshakeNonce(2),
        1,
        invalidLimits,
        {},
    };
    EXPECT_FALSE(server.receive(detail::ControlMessage{std::move(ack)}, 32));
    EXPECT_EQ(session->state(), SessionState::Handshaking);
}

} // namespace ll::protocol::test
