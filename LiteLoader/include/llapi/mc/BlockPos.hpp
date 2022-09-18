#pragma once
#include "../Global.h"

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

    std::vector<BlockPos> getNeighbors() const {
        std::vector<BlockPos> res;
        res.push_back({x, y - 1, z});
        res.push_back({x, y + 1, z});
        res.push_back({x, y, z - 1});
        res.push_back({x, y, z + 1});
        res.push_back({x - 1, y, z});
        res.push_back({x + 1, y, z});
        return res;
    }

    inline std::string toString() const {
        return std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z);
    }

    inline BlockPos add(int dx) const {
        return {x + dx, y, z};
    }

    inline BlockPos add(int dx, int dy) const {
        return {x + dx, y + dy, z};
    }

    inline BlockPos add(int dx, int dy, int dz) const {
        return {x + dx, y + dy, z + dz};
    }


    int& operator[](int index) {
        if (index < 0 || index > 2) {
            return (&x)[0];
        }
        return (&x)[index];
    }

    constexpr inline bool operator==(BlockPos const& b) const {
        return x == b.x && y == b.y && z == b.z;
    }

    constexpr bool operator!=(BlockPos const& b) const {
        return x != b.x || y != b.y || z != b.z;
    }

    constexpr BlockPos& operator+=(BlockPos const& b) {
        x += b.x;
        y += b.y;
        z += b.z;
        return *this;
    }

    constexpr BlockPos& operator-=(BlockPos const& b) {
        x -= b.x;
        y -= b.y;
        z -= b.z;
        return *this;
    }

    constexpr BlockPos& operator*=(BlockPos const& b) {
        x *= b.x;
        y *= b.y;
        z *= b.z;
        return *this;
    }

    constexpr BlockPos& operator/=(BlockPos const& b) {
        x /= b.x;
        y /= b.y;
        z /= b.z;
        return *this;
    }

    inline BlockPos operator+(BlockPos const& b) const {
        return {x + b.x, y + b.y, z + b.z};
    }

    inline BlockPos operator*(BlockPos const& b) const {
        return {x * b.x, y * b.y, z * b.z};
    }

    inline BlockPos operator/(BlockPos const& b) const {
        return {x / b.x, y / b.y, z / b.z};
    }

    inline BlockPos operator-(BlockPos const& b) const {
        return {x - b.x, y - b.y, z - b.z};
    }

    inline BlockPos operator*(int b) const {
        return {x * b, y * b, z * b};
    }

    inline BlockPos operator/(int b) const {
        return {x / b, y / b, z / b};
    }

    inline BlockPos operator+(int b) const {
        return {x + b, y + b, z + b};
    }

    inline BlockPos operator-(int b) const {
        return {x - b, y - b, z - b};
    }

    constexpr BlockPos& operator+=(int b) {
        x += b;
        y += b;
        z += b;
        return *this;
    }

    constexpr BlockPos& operator-=(int b) {
        x -= b;
        y -= b;
        z -= b;
        return *this;
    }

    constexpr BlockPos& operator*=(int b) {
        x *= b;
        y *= b;
        z *= b;
        return *this;
    }

    constexpr BlockPos& operator/=(int b) {
        x /= b;
        y /= b;
        z /= b;
        return *this;
    }

    inline bool containedWithin(BlockPos const& a, BlockPos const& b) const {
        return x >= a.x && y >= a.y && z >= a.z && x <= b.x && y <= b.y && z <= b.z;
    }

    inline double length() const {
        return sqrt(x * x + y * y + z * z);
    }

    inline double distanceTo(BlockPos const& a) const {
        return (*this - a).length();
    }

    LIAPI Vec3 toVec3() const;
    LIAPI class BoundingBox toBoundingBox() const;
    LIAPI class AABB toAABB() const;
    LIAPI Vec3 bottomCenter() const;
    LIAPI Vec3 center() const;
    LIAPI bool containedWithin(class BoundingBox const&) const;
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