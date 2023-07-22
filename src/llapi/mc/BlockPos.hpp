#pragma once
#include "../Global.h"
#include "VectorBase.hpp"

class Vec3;

class BlockPos {
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

    inline BlockPos add(int dx) const {
        return {x + dx, y, z};
    }

    inline BlockPos add(int dx, int dy) const {
        return {x + dx, y + dy, z};
    }

    inline BlockPos add(int dx, int dy, int dz) const {
        return {x + dx, y + dy, z + dz};
    }

    constexpr int& operator[](size_t index) {
        switch (index) {
            case 1:
                return y;
            case 2:
                return z;
            default:
                return x;
        }
    }

    constexpr int operator[](size_t index) const {
        switch (index) {
            case 1:
                return y;
            case 2:
                return z;
            default:
                return x;
        }
    }

    inline bool containedWithin(BlockPos const& a, BlockPos const& b) const {
        return x >= a.x && y >= a.y && z >= a.z && x <= b.x && y <= b.y && z <= b.z;
    }

    LLAPI Vec3 toVec3() const;
    LLAPI class BoundingBox toBoundingBox() const;
    LLAPI class AABB toAABB() const;
    LLAPI Vec3 bottomCenter() const;
    LLAPI Vec3 center() const;
    LLAPI bool containedWithin(class BoundingBox const&) const;

    FAKE_CRTP(BlockPos, int, 3);
};

namespace std {

template <>
struct hash<BlockPos> {
    std::size_t operator()(BlockPos const& pos) const noexcept {
        //??$hash3@HHH@Math@mce@@SA_KAEBH00@Z
        unsigned __int64 t1; // r8
        unsigned __int64 t2; // r8

        t1 = *((unsigned __int8*)&pos.x + 3) ^
             (0x100000001B3i64 *
              (*((unsigned __int8*)&pos.x + 2) ^
               (0x100000001B3i64 * (*((unsigned __int8*)&pos.x + 1) ^
                                    (0x100000001B3i64 * (*(unsigned __int8*)&pos.x ^ 0xCBF29CE484222325ui64))))));
        t2 =
            (((0x100000001B3i64 * t1 + 2654435769u) >> 2) + 2654435769u + ((0x100000001B3i64 * t1 + 2654435769u) << 6) +
             0x100000001B3i64 * (*((unsigned __int8*)&pos.y + 3) ^
                                 (0x100000001B3i64 *
                                  (*((unsigned __int8*)&pos.y + 2) ^
                                   (0x100000001B3i64 *
                                    (*((unsigned __int8*)&pos.y + 1) ^
                                     (0x100000001B3i64 * (*(unsigned __int8*)&pos.y ^ 0xCBF29CE484222325ui64)))))))) ^
            (0x100000001B3i64 * t1 + 2654435769u);
        return t2 ^ ((t2 << 6) +
                     0x100000001B3i64 *
                         (*((unsigned __int8*)&pos.z + 3) ^
                          (0x100000001B3i64 * (*((unsigned __int8*)&pos.z + 2) ^
                                               (0x100000001B3i64 * (*((unsigned __int8*)&pos.z + 1) ^
                                                                    (0x100000001B3i64 * (*(unsigned __int8*)&pos.z ^
                                                                                         0xCBF29CE484222325ui64))))))) +
                     (t2 >> 2) + 2654435769u);
    }
};

} // namespace std
