#include "gtest/gtest.h"

#include <atomic>
#include <chrono>
#include <thread>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/core/protocol/DeferredLoginContinuation.h"
#include "ll/core/protocol/ServerInboundGate.h"

namespace ll::protocol::test {

namespace {

detail::TransportLimits testLimits() {
    return {
        Limits::MaxControlBody,
        Limits::MaxPayloadBody,
        Limits::DefaultPacketsPerSecond,
        Limits::DefaultBytesPerSecond,
        Limits::DefaultBurstPackets,
        Limits::DefaultBurstBytes,
    };
}

} // namespace

TEST(ServerLoginIntegrationTest, ContinuationIsConsumedOrCancelledExactlyOnce) {
    std::atomic_uint                  calls{};
    detail::DeferredLoginContinuation continuation{
        detail::ConnectionKey{1, EndpointRole::Server, "peer", 0, 7},
        11,
    };

    auto invoker = [&]() -> Expected<> {
        ++calls;
        return {};
    };
    EXPECT_TRUE(continuation.consume(invoker));
    EXPECT_FALSE(continuation.consume(invoker));
    EXPECT_FALSE(continuation.cancel());
    EXPECT_EQ(calls, 1U);

    detail::DeferredLoginContinuation cancelled{
        detail::ConnectionKey{1, EndpointRole::Server, "peer", 0, 8},
        12,
    };
    EXPECT_TRUE(cancelled.cancel());
    EXPECT_FALSE(cancelled.consume(invoker));
    EXPECT_EQ(calls, 1U);
}

TEST(ServerLoginIntegrationTest, InboundGateIsGenerationScopedAndRevokesOnViolation) {
    detail::ServerInboundGate    gate;
    detail::ServerInboundGateKey current{"peer", 0, 2};
    detail::ServerInboundGateKey stale{"peer", 0, 1};
    auto                         now = std::chrono::steady_clock::now();

    ASSERT_TRUE(gate.grant(current, testLimits(), now));
    EXPECT_FALSE(gate.admit(stale, 32, now));
    EXPECT_TRUE(gate.admit(current, 32, now));
    EXPECT_FALSE(gate.admit(current, 1, now));
    EXPECT_FALSE(gate.contains(current));
}

TEST(ServerLoginIntegrationTest, ContinuationInvokerFailureIsTerminal) {
    detail::DeferredLoginContinuation continuation{
        detail::ConnectionKey{1, EndpointRole::Server, "peer", 0, 7},
        11,
    };

    auto invoker = []() -> Expected<> { return makeSessionError(SessionErrc::WrongGeneration); };
    EXPECT_FALSE(continuation.consume(invoker));
    EXPECT_EQ(continuation.state(), detail::DeferredLoginContinuation::State::Cancelled);
    EXPECT_FALSE(continuation.consume(invoker));
    EXPECT_FALSE(continuation.cancel());
}

TEST(ServerLoginIntegrationTest, ContinuationInvokerExceptionIsContainedAndTerminal) {
    detail::DeferredLoginContinuation continuation{
        detail::ConnectionKey{1, EndpointRole::Server, "peer", 0, 7},
        11,
    };

    auto result = continuation.consume([]() -> Expected<> { throw 17; });
    EXPECT_FALSE(result);
    EXPECT_EQ(continuation.state(), detail::DeferredLoginContinuation::State::Cancelled);
    EXPECT_FALSE(continuation.consume([]() -> Expected<> { return {}; }));
    EXPECT_FALSE(continuation.cancel());
}

TEST(ServerLoginIntegrationTest, ConcurrentContinuationConsumeInvokesExactlyOnce) {
    std::atomic_uint                  calls{};
    detail::DeferredLoginContinuation continuation{
        detail::ConnectionKey{1, EndpointRole::Server, "peer", 0, 7},
        11,
    };

    auto invoker = [&]() -> Expected<> {
        ++calls;
        return {};
    };

    std::atomic_uint successes{};
    std::thread      first{[&] {
        if (continuation.consume(invoker)) ++successes;
    }};
    std::thread      second{[&] {
        if (continuation.consume(invoker)) ++successes;
    }};
    first.join();
    second.join();

    EXPECT_EQ(calls, 1U);
    EXPECT_EQ(successes, 1U);
    EXPECT_EQ(continuation.state(), detail::DeferredLoginContinuation::State::Consumed);
}

TEST(ServerLoginIntegrationTest, InboundGateIsSubclientScopedAndBoundsPacketSize) {
    detail::ServerInboundGate    gate;
    detail::ServerInboundGateKey primary{"peer", 0, 2};
    detail::ServerInboundGateKey secondary{"peer", 1, 2};
    auto                         now = std::chrono::steady_clock::now();

    ASSERT_TRUE(gate.grant(primary, testLimits(), now));
    EXPECT_FALSE(gate.admit(secondary, 32, now));
    EXPECT_TRUE(gate.contains(primary));

    EXPECT_FALSE(gate.admit(primary, 8, now));
    EXPECT_FALSE(gate.contains(primary));

    ASSERT_TRUE(gate.grant(primary, testLimits(), now));
    EXPECT_FALSE(gate.admit(primary, static_cast<std::size_t>(Limits::MaxControlBody) + 25, now));
    EXPECT_FALSE(gate.contains(primary));
}

} // namespace ll::protocol::test
