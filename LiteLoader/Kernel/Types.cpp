#include <MC/Types.hpp>

Vec3 BlockPos::toVec3() {
    return {(float)x, (float)y, (float)z};
}

Vec3 BlockPos::bottomCenter() {
    return {(float)x + 0.5f, (float)y, (float)z + 0.5f};
}

Vec3 BlockPos::center() {
    return {(float)x + 0.5f, (float)y + 0.5f, (float)z + 0.5f};
}

BlockPos Vec3::toBlockPos() {
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

float Vec3::length() {
    return sqrt(x * x + y * y + z * z);
}

float Vec3::distanceTo(Vec3 const& a0) {
    Vec3 tmp = *this - a0;
    return tmp.length();
}

AABB BoundingBox::toAABB() {
    Vec3 vec1 = {(float)bpos1.x, (float)bpos1.y, (float)bpos1.z};
    Vec3 vec2 = {(float)bpos1.x, (float)bpos1.y, (float)bpos1.z};
    return {vec1, vec2 + Vec3{1, 1, 1}};
}