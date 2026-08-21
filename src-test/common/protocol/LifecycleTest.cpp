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

TEST(ProtocolLifecycleTest, ConnectionWideCloseIsIdempotentAndClosesEverySubclient) {
    detail::LifecycleCoordinator coordinator{32, EndpointRole::Server};

    auto generation = coordinator.openConnection("peer");
    ASSERT_TRUE(generation);

    auto primary = openLifecycleSession(coordinator, "peer", 0, *generation, 1);
    auto child   = openLifecycleSession(coordinator, "peer", 9, *generation, 2);
    ASSERT_TRUE(primary);
    ASSERT_TRUE(child);

    std::size_t         closedEvents{};
    ProtocolCloseReason observedReason{};

    bool nestedCloseSucceeded{};

    auto listener =
        ll::event::EventBus::getInstance().emplaceListener<ProtocolClosedEvent>([&](ProtocolClosedEvent& event) {
            ++closedEvents;
            observedReason = event.reason();
            if (coordinator.closeConnection("peer", *generation, ProtocolCloseReason::ConnectionClosed)) {
                nestedCloseSucceeded = true;
            }
        });

    ASSERT_TRUE(listener);

    EXPECT_TRUE(coordinator.closeConnection("peer", *generation, ProtocolCloseReason::ConnectionClosed));
    EXPECT_FALSE(coordinator.closeConnection("peer", *generation, ProtocolCloseReason::ConnectionClosed));
    EXPECT_EQ((*primary)->state(), SessionState::Closed);
    EXPECT_EQ((*child)->state(), SessionState::Closed);
    EXPECT_EQ(coordinator.currentGeneration("peer"), 0);
    EXPECT_EQ(closedEvents, 2);
    EXPECT_EQ(observedReason, ProtocolCloseReason::ConnectionClosed);
    EXPECT_FALSE(nestedCloseSucceeded);

    EXPECT_TRUE(ll::event::EventBus::getInstance().removeListener<ProtocolClosedEvent>(listener));
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

TEST(ProtocolLifecycleTest, DuplicateSessionOpenCannotRestartHandshake) {
    detail::LifecycleCoordinator coordinator{35, EndpointRole::Server};

    auto generation = coordinator.openConnection("peer");
    ASSERT_TRUE(generation);
    auto first = openLifecycleSession(coordinator, "peer", 0, *generation, 1);
    ASSERT_TRUE(first);

    auto duplicate = openLifecycleSession(coordinator, "peer", 0, *generation, 2);
    ASSERT_FALSE(duplicate);
    EXPECT_EQ(lifecycleSessionCode(duplicate.error()), SessionErrc::WrongState);
    EXPECT_EQ(coordinator.findSession("peer", 0, *generation), *first);
    EXPECT_EQ((*first)->state(), SessionState::Handshaking);
}

TEST(ProtocolLifecycleTest, RuntimeShutdownClosesAllConnectionsExactlyOnce) {
    detail::LifecycleCoordinator coordinator{34, EndpointRole::Server};

    auto firstGeneration  = coordinator.openConnection("first");
    auto secondGeneration = coordinator.openConnection("second");
    ASSERT_TRUE(firstGeneration);
    ASSERT_TRUE(secondGeneration);

    auto first  = openLifecycleSession(coordinator, "first", 0, *firstGeneration, 1);
    auto second = openLifecycleSession(coordinator, "second", 4, *secondGeneration, 2);
    ASSERT_TRUE(first);
    ASSERT_TRUE(second);

    coordinator.closeAll(ProtocolCloseReason::RuntimeStopping);
    coordinator.closeAll(ProtocolCloseReason::RuntimeStopping);

    EXPECT_EQ((*first)->state(), SessionState::Closed);
    EXPECT_EQ((*second)->state(), SessionState::Closed);
    EXPECT_EQ(coordinator.currentGeneration("first"), 0);
    EXPECT_EQ(coordinator.currentGeneration("second"), 0);
    EXPECT_TRUE(coordinator.activeSessions().empty());

    auto reopened = coordinator.openConnection("late");
    ASSERT_FALSE(reopened);
    ASSERT_TRUE(reopened.error().isA<LifecycleErrorInfo>());
    EXPECT_EQ(reopened.error().as<LifecycleErrorInfo>().code, LifecycleErrc::RuntimeStopping);
}

} // namespace ll::protocol::test
