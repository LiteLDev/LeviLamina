#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

class AABB;

class BoundingBox : public ll::math::CommutativeGroup<BoundingBox, BlockPos, BlockPos> {
public:
    union {
        BlockPos min, x, r, s;
    };
    union {
        BlockPos max, y, g, t, z, b, p;
    };

    [[nodiscard]] constexpr BoundingBox() noexcept : min(0), max(0){};
    [[nodiscard]] constexpr BoundingBox(class BoundingBox const& k) noexcept = default;
    constexpr BoundingBox& operator=(class BoundingBox const& k) noexcept    = default;
    [[nodiscard]] constexpr BoundingBox(BlockPos const& min, BlockPos const& max) noexcept : min(min), max(max){};

    template <class F>
    constexpr bool forEachPos(F&& todo) const {
        for (int dy = min.y; dy <= max.y; ++dy)
            for (int dx = min.x; dx <= max.x; ++dx)
                for (int dz = min.z; dz <= max.z; ++dz) {
                    if (!std::invoke(std::forward<F>(todo), BlockPos{dx, dy, dz})) {
                        return false;
                    }
                }
        return true;
    }

    constexpr BoundingBox& merge(BoundingBox const& a) noexcept {
        *this = BoundingBox{ll::math::min(a.min, min), ll::math::max(a.max, max)};
        return *this;
    }

    constexpr BoundingBox& merge(BlockPos const& a) noexcept {
        *this = BoundingBox{ll::math::min(a, min), ll::math::max(a, max)};
        return *this;
    }

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) noexcept {
        if (index == 1) {
            return (T&)z;
        }
        return (T&)x;
    }

    template <typename T>
    [[nodiscard]] constexpr T const& get(size_t index) const noexcept {
        if (index == 1) {
            return (T const&)z;
        }
        return (T const&)x;
    }

    [[nodiscard]] bool contains(BlockPos const& a) const noexcept { return a.ge(min).all() && a.le(max).all(); }

    [[nodiscard]] bool contains(BoundingBox const& a) const noexcept {
        return a.min.ge(min).all() && a.max.le(max).all();
    }

    [[nodiscard]] BlockPos getSideLength() const noexcept { return max - min + 1; }

    LLNDAPI operator class AABB() const; // NOLINT

public:
    // NOLINTBEGIN
    // symbol: ??0BoundingBox@@QEAA@AEBVBlockPos@@0W4Rotation@@@Z
    MCAPI BoundingBox(class BlockPos const& min, class BlockPos const& size, ::Rotation rotation);

    // symbol: ?isValid@BoundingBox@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?orientBox@BoundingBox@@SA?AV1@HHHHHHHHHH@Z
    MCAPI static class BoundingBox orientBox(int, int, int, int, int, int, int, int, int, int);

    // NOLINTEND
};
