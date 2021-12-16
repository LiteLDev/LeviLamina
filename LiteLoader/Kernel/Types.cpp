#include <MC/Types.hpp>

ChunkBlockPos::ChunkBlockPos(BlockPos const& pos, short minHeight)
{
    this->x = (char)pos.x & 0xf;
    this->z = (char)pos.z & 0xf;
    this->y = (short)(pos.y - minHeight);
}

Vec3 BlockPos::toVec3() const {
    return {(float)x, (float)y, (float)z};
}

Vec3 BlockPos::bottomCenter() const {
    return {(float)x + 0.5f, (float)y, (float)z + 0.5f};
}

Vec3 BlockPos::center() const {
    return {(float)x + 0.5f, (float)y + 0.5f, (float)z + 0.5f};
}

BlockPos Vec3::toBlockPos() const {
    auto px = (int)x;
    auto py = (int)y;
    auto pz = (int)z;
    if (px < 0 && px != x)
        px = px - 1;
    if (py < 0 && py != y)
        py = py - 1;
    if (pz < 0 && pz != z)
        pz = pz - 1;
    return {px, py, pz};
}

float Vec3::length() const {
    return sqrt(x * x + y * y + z * z);
}

float Vec3::distanceTo(Vec3 const& a0) const {
    Vec3 tmp = *this - a0;
    return tmp.length();
}

AABB BoundingBox::toAABB() const {
    Vec3 vec1 = {(float)bpos1.x, (float)bpos1.y, (float)bpos1.z};
    Vec3 vec2 = {(float)bpos1.x, (float)bpos1.y, (float)bpos1.z};
    return {vec1, vec2 + Vec3{1, 1, 1}};
}