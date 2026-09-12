#pragma once

#include <chrono>
#include <cstddef>
#include <cstdint>

#include "ll/core/protocol/ControlMessage.h"

namespace ll::protocol::detail {

class RateBudget {
    std::uint64_t                         mRate{};
    std::uint64_t                         mCapacity{};
    std::uint64_t                         mTokens{};
    std::uint64_t                         mRemainder{};
    std::chrono::steady_clock::time_point mUpdated;

public:
    RateBudget(std::uint32_t rate, std::uint32_t capacity, std::chrono::steady_clock::time_point now) noexcept;

    [[nodiscard]] bool consume(std::size_t amount, std::chrono::steady_clock::time_point now) noexcept;
};

struct DirectionBudget {
    RateBudget packets;
    RateBudget bytes;

    DirectionBudget(TransportLimits const& limits, std::chrono::steady_clock::time_point now) noexcept;
    [[nodiscard]] bool consume(std::size_t byteCount, std::chrono::steady_clock::time_point now) noexcept;
};

} // namespace ll::protocol::detail
