#pragma once
#include "../Global.h"
#include "VectorBase.hpp"

class Vec3;

class BlockPos : public VectorBase<BlockPos, int, int, int> {
public:
    int x, y, z;
    inline BlockPos() : BlockPos(0, 0, 0){};
    inline BlockPos(int mx, int my, int mz) : x(mx), y(my), z(mz){};

    MCAPI BlockPos(class ChunkPos const&, class ChunkBlockPos const&, short);
    MCAPI BlockPos(class ChunkPos const&, int);
    MCAPI BlockPos(class SubChunkPos const&);
    MCAPI BlockPos(class Vec3 const&);
    MCAPI BlockPos(float, float, float);
    MCAPI BlockPos(double, double, double);

    MCAPI bool cerealize(class BasicSaver&, struct SerializerTraits const&) const;
    MCAPI bool decerealize(class BasicLoader&, struct SerializerTraits const&, class BedrockLoadContext const&);

    MCAPI class BlockPos neighbor(unsigned char) const;
    MCAPI class BlockPos relative(unsigned char, int) const;
    MCAPI class BlockPos transform(enum class Rotation, enum class Mirror, class Vec3 const&) const;

    MCAPI int randomSeed() const;

    MCAPI static class BlockPos const MAX;
    MCAPI static class BlockPos const MIN;
    MCAPI static class BlockPos const ONE;
    MCAPI static class BlockPos const ZERO;

    MCAPI static void bindType();

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) {
        switch (index) {
            case 1:
                return y;
            case 2:
                return z;
            default:
                return x;
        }
    }

    template <typename T>
    [[nodiscard]] constexpr T get(size_t index) const {
        switch (index) {
            case 1:
                return y;
            case 2:
                return z;
            default:
                return x;
        }
    }

    [[nodiscard]] inline bool containedWithin(BlockPos const& a, BlockPos const& b) const {
        return x >= a.x && y >= a.y && z >= a.z && x <= b.x && y <= b.y && z <= b.z;
    }

    [[nodiscard]] LIAPI Vec3 toVec3() const;
    [[nodiscard]] LIAPI class BoundingBox toBoundingBox() const;
    [[nodiscard]] LIAPI class AABB toAABB() const;
    [[nodiscard]] LIAPI Vec3 bottomCenter() const;
    [[nodiscard]] LIAPI Vec3 center() const;
    [[nodiscard]] LIAPI bool containedWithin(class BoundingBox const&) const;
};

namespace std {

template <>
struct hash<BlockPos> {
    std::size_t operator()(BlockPos const& pos) const noexcept {
        return pos.hash();
    }
};

} // namespace std
