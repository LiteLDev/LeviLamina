#pragma once

#include <algorithm>
#include <compare>
#include <cstdint>
#include <optional>

namespace ll::protocol {

using CoreVersion   = std::uint16_t;
using SchemaVersion = std::uint16_t;

struct VersionRange {
    std::uint16_t min{1};
    std::uint16_t max{1};

    [[nodiscard]] constexpr bool valid() const noexcept { return min != 0 && min <= max; }

    [[nodiscard]] constexpr bool contains(std::uint16_t version) const noexcept {
        return valid() && version >= min && version <= max;
    }

    [[nodiscard]] constexpr std::optional<std::uint16_t> highestCommon(VersionRange other) const noexcept {
        if (!valid() || !other.valid()) {
            return std::nullopt;
        }

        auto const commonMin = std::max(min, other.min);
        auto const commonMax = std::min(max, other.max);
        if (commonMin > commonMax) {
            return std::nullopt;
        }

        return commonMax;
    }

    auto operator<=>(VersionRange const&) const = default;
};

} // namespace ll::protocol
