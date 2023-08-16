#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/BlockPos.h"

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
        for (int y = min.y; y <= max.y; ++y)
            for (int x = min.x; x <= max.x; ++x)
                for (int z = min.z; z <= max.z; ++z) {
                    todo(BlockPos{x, y, z});
                }
    }

    constexpr bool forEachBlockInBox(std::function<bool(const BlockPos&)>&& todo) const {
        for (int y = min.y; y <= max.y; ++y)
            for (int x = min.x; x <= max.x; ++x)
                for (int z = min.z; z <= max.z; ++z) {
                    if (!todo(BlockPos{x, y, z})) {
                        return false;
                    }
                }
        return true;
    }

    constexpr void forEachBlockInBox(std::function<void(const BlockPos&, size_t)>&& todo) const {
        size_t i = 0;
        for (int y = min.y; y <= max.y; ++y)
            for (int x = min.x; x <= max.x; ++x)
                for (int z = min.z; z <= max.z; ++z) {
                    todo(BlockPos{x, y, z}, i);
                    i++;
                }
    }

    constexpr bool forEachBlockInBox(std::function<bool(const BlockPos&, size_t)>&& todo) const {
        size_t i = 0;
        for (int y = min.y; y <= max.y; ++y)
            for (int x = min.x; x <= max.x; ++x)
                for (int z = min.z; z <= max.z; ++z) {
                    if (!todo(BlockPos{x, y, z}, i)) {
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

    LLAPI explicit operator class AABB() const;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BoundingBox\@\@QEAA\@AEBVBlockPos\@\@0W4Rotation\@\@\@Z
     */
    MCAPI BoundingBox(class BlockPos const&, class BlockPos const&, enum class Rotation);
    /**
     * @symbol ?isValid\@BoundingBox\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?orientBox\@BoundingBox\@\@SA?AV1\@HHHHHHHHHH\@Z
     */
    MCAPI static class BoundingBox orientBox(int, int, int, int, int, int, int, int, int, int);
    // NOLINTEND
};
