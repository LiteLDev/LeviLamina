#include "gtest/gtest.h"

#include <memory>
#include <string_view>
#include <vector>

#include "ll/api/event/EventBus.h"
#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/ConnectionLookup.h"
#include "ll/core/protocol/LifecycleCoordinator.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"

namespace ll::protocol::test {

namespace {

class LifecycleTransport final : public detail::SessionTransport {
public:
    [[nodiscard]] bool isOnEndpointThread() const noexcept override { return true; }
    Expected<>         send(std::unique_ptr<detail::ProtocolEnvelopePacket>) override { return {}; }
};

std::shared_ptr<detail::RegistrySnapshot const> lifecycleRegistry() {
    auto registry      = std::make_shared<detail::RegistrySnapshot>();
    registry->revision = 1;
    return registry;
}

detail::TransportLimits lifecycleLimits() {
    return {
        Limits::MaxControlBody,
        Limits::DefaultPayloadBody,
        Limits::DefaultPacketsPerSecond,
        Limits::DefaultBytesPerSecond,
        Limits::DefaultBurstPackets,
        Limits::DefaultBurstBytes,
    };
}

Expected<std::shared_ptr<detail::ProtocolSession>> openLifecycleSession(
    detail::LifecycleCoordinator& coordinator,
    std::string_view              connection,
    std::uint8_t                  subClientId,
    std::uint64_t                 generation,
    std::uint64_t                 handshakeId
) {
    return coordinator.openSession(
        connection,
        subClientId,
        generation,
        handshakeId,
        lifecycleRegistry(),
        std::make_shared<LifecycleTransport>(),
        lifecycleLimits()
    );
}

SessionErrc lifecycleSessionCode(Error& error) {
    EXPECT_TRUE(error.isA<SessionErrorInfo>());
    return error.as<SessionErrorInfo>().code;
}

} // namespace

TEST(ProtocolLifecycleTest, CanonicalLookupSkipsNullableConnectionSlots) {
    struct FakeConnection {
        int identity{};
    };

    std::vector<std::unique_ptr<FakeConnection>> connections;
    connections.emplace_back(nullptr);
    connections.emplace_back(std::make_unique<FakeConnection>(FakeConnection{17}));
    connections.emplace_back(nullptr);

    auto* found = detail::findLiveConnection<FakeConnection>(connections, 17, &FakeConnection::identity);
    EXPECT_EQ(found, connections[1].get());

    EXPECT_EQ(detail::findLiveConnection<FakeConnection>(connections, 18, &FakeConnection::identity), nullptr);
}

TEST(ProtocolLifecycleTest, PreservesAndSeparatesNonzeroSubclients) {
    detail::LifecycleCoordinator coordinator{31, EndpointRole::Server};

    auto generation = coordinator.openConnection("peer");
    ASSERT_TRUE(generation);

    auto primary = openLifecycleSession(coordinator, "peer", 0, *generation, 1);
    auto child   = openLifecycleSession(coordinator, "peer", 7, *generation, 2);
    ASSERT_TRUE(primary);
    ASSERT_TRUE(child);

    EXPECT_EQ(coordinator.findSession("peer", 0, *generation), *primary);
    EXPECT_EQ(coordinator.findSession("peer", 7, *generation), *child);

    EXPECT_TRUE(coordinator.closeSubclient("peer", 7, *generation, ProtocolCloseReason::ConnectionClosed));
    EXPECT_EQ((*child)->state(), SessionState::Closed);
    EXPECT_EQ(coordinator.findSession("peer", 7, *generation), nullptr);
    EXPECT_EQ(coordinator.findSession("peer", 0, *generation), *primary);
    EXPECT_EQ(coordinator.currentGeneration("peer"), *generation);
}

TEST(ProtocolLifecycleTest, ReconnectRevokesOldGenerationAndRejectsStaleCallbacks) {
    detail::LifecycleCoordinator coordinator{33, EndpointRole::Client};

    auto firstGeneration = coordinator.openConnection("peer");
    ASSERT_TRUE(firstGeneration);
    auto first = openLifecycleSession(coordinator, "peer", 0, *firstGeneration, 1);
    ASSERT_TRUE(first);

    auto secondGeneration = coordinator.openConnection("peer");
    ASSERT_TRUE(secondGeneration);
    ASSERT_GT(*secondGeneration, *firstGeneration);
    EXPECT_EQ((*first)->state(), SessionState::Closed);

    auto stale = openLifecycleSession(coordinator, "peer", 0, *firstGeneration, 2);
    ASSERT_FALSE(stale);
    EXPECT_EQ(lifecycleSessionCode(stale.error()), SessionErrc::WrongGeneration);
    EXPECT_FALSE(coordinator.closeConnection("peer", *firstGeneration, ProtocolCloseReason::ConnectionClosed));
    EXPECT_EQ(coordinator.currentGeneration("peer"), *secondGeneration);

    auto current = openLifecycleSession(coordinator, "peer", 0, *secondGeneration, 3);
    ASSERT_TRUE(current);
    EXPECT_EQ(coordinator.findSession("peer", 0, *secondGeneration), *current);
}

} // namespace ll::protocol::test
