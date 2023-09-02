#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

class AABB;

class BoundingBox : public CommutativeGroup<BoundingBox, BlockPos, BlockPos> {
public:
    union {
        BlockPos min, x, r, s;
    };
    union {
        BlockPos max, y, g, t, z, b, p;
    };

    constexpr BoundingBox() noexcept : min(BlockPos::MIN), max(BlockPos::MIN){};
    constexpr BoundingBox(class BoundingBox const& k) noexcept : min(k.min), max(k.max){};
    constexpr BoundingBox(BlockPos const& min, BlockPos const& max) noexcept : min(min), max(max){};

    constexpr void forEachBlockInBox(std::function<void(const BlockPos&)>&& todo) const {
        for (int dy = min.y; dy <= max.y; ++dy)
            for (int dx = min.x; dx <= max.x; ++dx)
                for (int dz = min.z; dz <= max.z; ++dz) {
                    todo(BlockPos{dx, dy, dz});
                }
    }

    constexpr bool forEachBlockInBox(std::function<bool(const BlockPos&)>&& todo) const {
        for (int dy = min.y; dy <= max.y; ++dy)
            for (int dx = min.x; dx <= max.x; ++dx)
                for (int dz = min.z; dz <= max.z; ++dz) {
                    if (!todo(BlockPos{dx, dy, dz})) {
                        return false;
                    }
                }
        return true;
    }

    constexpr void forEachBlockInBox(std::function<void(const BlockPos&, size_t)>&& todo) const {
        size_t i = 0;
        for (int dy = min.y; dy <= max.y; ++dy)
            for (int dx = min.x; dx <= max.x; ++dx)
                for (int dz = min.z; dz <= max.z; ++dz) {
                    todo(BlockPos{dx, dy, dz}, i);
                    i++;
                }
    }

    constexpr bool forEachBlockInBox(std::function<bool(const BlockPos&, size_t)>&& todo) const {
        size_t i = 0;
        for (int dy = min.y; dy <= max.y; ++dy)
            for (int dx = min.x; dx <= max.x; ++dx)
                for (int dz = min.z; dz <= max.z; ++dz) {
                    if (!todo(BlockPos{dx, dy, dz}, i)) {
                        return false;
                    }
                    i++;
                }
        return true;
    }

    constexpr BoundingBox& merge(BoundingBox const& a) noexcept {
        *this = BoundingBox{::min(a.min, min), ::max(a.max, max)};
        return *this;
    }

    constexpr BoundingBox& merge(BlockPos const& a) noexcept {
        *this = BoundingBox{::min(a, min), ::max(a, max)};
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
            return (T)z;
        }
        return (T)x;
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
    MCAPI BoundingBox(class BlockPos const&, class BlockPos const&, ::Rotation);

    // symbol: ?isValid@BoundingBox@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?orientBox@BoundingBox@@SA?AV1@HHHHHHHHHH@Z
    MCAPI static class BoundingBox orientBox(int, int, int, int, int, int, int, int, int, int);

    // NOLINTEND
};
