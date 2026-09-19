#include "ll/core/protocol/SessionState.h"

namespace ll::protocol::detail {

RateBudget::RateBudget(std::uint32_t rate, std::uint32_t capacity, std::chrono::steady_clock::time_point now) noexcept
: mRate(rate),
  mCapacity(capacity),
  mTokens(capacity),
  mUpdated(now) {}

bool RateBudget::consume(std::size_t amount, std::chrono::steady_clock::time_point now) noexcept {
    if (now > mUpdated && mRate != 0) {
        constexpr auto UnitsPerSecond = std::uint64_t{1'000'000'000};

        auto elapsed =
            static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(now - mUpdated).count());
        mUpdated = now;

        auto const wholeSeconds = elapsed / UnitsPerSecond;
        auto const nanoseconds  = elapsed % UnitsPerSecond;
        auto       missing      = mCapacity - mTokens;

        if (missing == 0) {
            mRemainder = 0;
        } else {
            auto const secondsToFill = missing / mRate + (missing % mRate != 0);
            if (wholeSeconds >= secondsToFill) {
                mTokens    = mCapacity;
                mRemainder = 0;
            } else {
                mTokens += wholeSeconds * mRate;
                missing  = mCapacity - mTokens;

                auto const fractional = nanoseconds * mRate + mRemainder;
                auto const refill     = fractional / UnitsPerSecond;

                if (refill >= missing) {
                    mTokens    = mCapacity;
                    mRemainder = 0;
                } else {
                    mTokens    += refill;
                    mRemainder  = fractional % UnitsPerSecond;
                }
            }
        }
    }

    if (amount > mTokens) return false;

    mTokens -= amount;
    return true;
}

DirectionBudget::DirectionBudget(TransportLimits const& limits, std::chrono::steady_clock::time_point now) noexcept
: packets(limits.packetsPerSecond, limits.burstPackets, now),
  bytes(limits.bytesPerSecond, limits.burstBytes, now) {}

bool DirectionBudget::consume(std::size_t byteCount, std::chrono::steady_clock::time_point now) noexcept {
    if (!packets.consume(1, now)) return false;
    if (bytes.consume(byteCount, now)) return true;

    // Packet tokens are intentionally not refunded. A rejected oversized burst still
    // consumed processing capacity and must not become a free probing primitive.
    return false;
}

} // namespace ll::protocol::detail
