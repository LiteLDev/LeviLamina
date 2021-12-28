#pragma once
#include "../Global.h"
class Vec3;
class BlockPos {
public:
    int x, y, z;
    inline BlockPos(){};
    inline BlockPos(int mx, int my, int mz)
        : x(mx)
        , y(my)
        , z(mz){};
    MCAPI BlockPos(class ChunkPos const&, class ChunkBlockPos const&, short);
    MCAPI BlockPos(class ChunkPos const&, int);
    MCAPI BlockPos(class SubChunkPos const&);
    MCAPI BlockPos(class Vec3 const&);
    MCAPI BlockPos(float, float, float);
    MCAPI BlockPos(double, double, double);
    MCAPI bool cerealize(class BasicSaver&, struct SerializerTraits const&) const;
    MCAPI bool decerealize(class BasicLoader&, struct SerializerTraits const&, class BedrockLoadContext const&);
    MCAPI class BlockPos neighbor(unsigned char) const;
    MCAPI int randomSeed() const;
    MCAPI class BlockPos relative(unsigned char, int) const;
    MCAPI class BlockPos transform(enum Rotation, enum Mirror, class Vec3 const&) const;
    MCAPI static class BlockPos const MAX;
    MCAPI static class BlockPos const MIN;
    MCAPI static class BlockPos const ONE;
    MCAPI static class BlockPos const ZERO;
    MCAPI static void bindType();


    constexpr bool operator==(BlockPos const& b) const
    {
        return x == b.x && y == b.y && z == b.z;
    }

    constexpr bool operator!=(BlockPos const& b) const
    {
        return x != b.x || y != b.y || z != b.z;
    }

    inline BlockPos operator+(BlockPos const& b) const
    {
        return {x + b.x, y + b.y, z + b.z};
    }

    inline BlockPos operator-(BlockPos const& b) const
    {
        return {x - b.x, y - b.y, z - b.z};
    }

    inline std::string toString() const
    {
        return std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z);
    }

    inline BlockPos add(int dx) const
    {
        return {x + dx, y, z};
    }

    inline BlockPos add(int dx, int dy) const
    {
        return {x + dx, y + dy, z};
    }

    inline BlockPos add(int dx, int dy, int dz) const
    {
        return {x + dx, y + dy, z + dz};
    }

    LIAPI Vec3 toVec3() const;
    LIAPI Vec3 bottomCenter() const;
    LIAPI Vec3 center() const;

};