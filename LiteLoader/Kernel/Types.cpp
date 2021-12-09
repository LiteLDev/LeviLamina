#include <MC/Types.hpp>

Vec3 BlockPos::toVec3() {
    return {(float)x, (float)y, (float)z};
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

AABB BoundingBox::toAABB() {
    Vec3 vec1 = {(float)bpos1.x, (float)bpos1.y, (float)bpos1.z};
    Vec3 vec2 = {(float)bpos1.x, (float)bpos1.y, (float)bpos1.z};
    return {vec1, vec2 + Vec3{1, 1, 1}};
}