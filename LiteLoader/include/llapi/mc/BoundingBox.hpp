#pragma once
#include "../Global.h"
#include "BlockPos.hpp"

class BoundingBox {

public:
    BlockPos min;
    BlockPos max;

    inline BlockPos getCenter() const {
        return {(min.x + max.x) / 2, (min.y + max.y) / 2, (min.z + max.z) / 2};
    }

    LIAPI class AABB toAABB() const;


    inline BoundingBox(class BoundingBox const& k) : min(k.min), max(k.max){};
    inline BoundingBox(BlockPos const& pMin, BlockPos const& pMax)
    : min(pMin), max(pMax){};
    inline BoundingBox() : min(BlockPos::MIN), max(BlockPos::MIN){};

    inline BlockPos& operator[](int index) {
        if (index < 0 || index > 1) {
            return (&min)[0];
        }
        return (&min)[index];
    }

    constexpr BoundingBox& operator+=(int& b) {
        min += b;
        max += b;
        return *this;
    }

    constexpr BoundingBox& operator-=(int& b) {
        min -= b;
        max -= b;
        return *this;
    }

    constexpr BoundingBox& operator+=(BlockPos const& b) {
        min += b;
        max += b;
        return *this;
    }

    constexpr BoundingBox& operator-=(BlockPos const& b) {
        min -= b;
        max -= b;
        return *this;
    }

    inline BoundingBox operator+(BlockPos const& b) const {
        return BoundingBox(min + b, max + b);
    }

    inline BoundingBox operator+(int& b) const {
        return BoundingBox(min + b, max + b);
    }

    inline BoundingBox operator-(BlockPos const& b) const {
        return BoundingBox(min - b, max - b);
    }

    inline BoundingBox operator-(int& b) const {
        return BoundingBox(min - b, max - b);
    }

    inline void forEachBlockInBox(const std::function<void(const BlockPos&)>& todo) {
        for (int y = min.y; y <= max.y; ++y)
            for (int x = min.x; x <= max.x; ++x)
                for (int z = min.z; z <= max.z; ++z) {
                    todo({x, y, z});
                }
    }

    // TODO: remove this
    // inline BoundingBox merge(BoundingBox const& a) {
    //     return BoundingBox(std::min(a.min, min), std::max(a.max, max));
    // }

    // inline BoundingBox merge(BlockPos const& a) {
    //     return BoundingBox(std::min(a, min), std::max(a, max));
    // }

public:
    MCAPI BoundingBox(class BlockPos const&, class BlockPos const&, enum class Rotation);

    MCAPI bool isValid() const;

    MCAPI static class BoundingBox orientBox(int, int, int, int, int, int, int, int, int, int);
};

namespace std {

template <> struct hash<BoundingBox> {
    std::size_t operator()(BoundingBox const& box) const noexcept {
        return (std::hash<BlockPos>()(box.min) ^ std::hash<BlockPos>()(box.max));
    }
};

} // namespace std
