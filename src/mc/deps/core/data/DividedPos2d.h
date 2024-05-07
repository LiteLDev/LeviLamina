#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/Pos2d.h"

template <int T0>
class DividedPos2d : public ::Pos2d {
public:
    [[nodiscard]] constexpr DividedPos2d() noexcept                      = default;
    [[nodiscard]] constexpr DividedPos2d(DividedPos2d&&) noexcept        = default;
    LL_CLANG_CEXPR DividedPos2d& operator=(DividedPos2d&&) noexcept      = default;
    [[nodiscard]] constexpr DividedPos2d(DividedPos2d const&) noexcept   = default;
    LL_CLANG_CEXPR DividedPos2d& operator=(DividedPos2d const&) noexcept = default;

    [[nodiscard]] constexpr DividedPos2d(int x, int z) noexcept : Pos2d(x, z) {}

    template <class T>
    [[nodiscard]] constexpr DividedPos2d(T const& vec) noexcept
        requires(requires(T const& t) {
            { t.x } -> std::same_as<int>;
            { t.z } -> std::same_as<int>;
        })
    : Pos2d((vec.x >> 31) - ((vec.x >> 31) - vec.x) / T0, (vec.x >> 31) - ((vec.x >> 31) - vec.x) / T0) {}
};
