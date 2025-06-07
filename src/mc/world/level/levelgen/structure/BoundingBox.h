#pragma once

#include "ll/api/coro/Generator.h"
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"


class AABB;

class BoundingBox : public ll::math::CommutativeGroup<BoundingBox, BlockPos, BlockPos> {
public:
    union {
        BlockPos min, x, r, s;
    };
    union {
        BlockPos max, y, g, t, z, b, p;
    };

    [[nodiscard]] constexpr BoundingBox() noexcept : min(0), max(0) {}
    [[nodiscard]] constexpr BoundingBox(class BoundingBox const& k) noexcept = default;
    constexpr BoundingBox& operator=(class BoundingBox const& k) noexcept    = default;
    [[nodiscard]] constexpr BoundingBox(BlockPos const& min, BlockPos const& max) noexcept : min(min), max(max) {}

    ll::coro::Generator<BlockPos> forEachPos() const {
        for (int dy = min.y; dy <= max.y; ++dy)
            for (int dx = min.x; dx <= max.x; ++dx)
                for (int dz = min.z; dz <= max.z; ++dz) {
                    co_yield BlockPos{dx, dy, dz};
                }
    }

    constexpr BoundingBox& merge(BoundingBox const& a) noexcept {
        *this = BoundingBox{ll::math::min(a.min, min), ll::math::max(a.max, max)};
        return *this;
    }

    constexpr BoundingBox& merge(BlockPos const& a) noexcept {
        *this = BoundingBox{ll::math::min(a, min), ll::math::max(a, max)};
        return *this;
    }

    template <typename T, size_t N>
    [[nodiscard]] constexpr T& get() noexcept {
        if constexpr (N == 0) {
            return x;
        } else if constexpr (N == 1) {
            return y;
        } else {
            static_assert(ll::traits::always_false<T>);
        }
    }

    template <typename T, size_t N>
    [[nodiscard]] constexpr T const& get() const noexcept {
        if constexpr (N == 0) {
            return x;
        } else if constexpr (N == 1) {
            return y;
        } else {
            static_assert(ll::traits::always_false<T>);
        }
    }

    [[nodiscard]] bool contains(BlockPos const& a) const noexcept { return a.ge(min).all() && a.le(max).all(); }

    [[nodiscard]] bool contains(BoundingBox const& a) const noexcept {
        return a.min.ge(min).all() && a.max.le(max).all();
    }

    [[nodiscard]] BlockPos getSideLength() const noexcept { return max - min + 1; }

    LLNDAPI operator class AABB() const;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BoundingBox(int _x0, int _y0, int _z0, int _x1, int _y1, int _z1);

    MCNAPI void applyTransformation(::BlockPos const& pivot, ::Rotation rotationXZ, bool mirrorX, bool mirrorZ);

    MCNAPI bool isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::BoundingBox> intersect(::BoundingBox const& lhs, ::BoundingBox const& rhs);

    MCNAPI static ::BoundingBox orientBox(
        int footX,
        int footY,
        int footZ,
        int offX,
        int offY,
        int offZ,
        int width,
        int height,
        int depth,
        int orientation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(int _x0, int _y0, int _z0, int _x1, int _y1, int _z1);
    // NOLINTEND
};
