#pragma once
#include <mc/Core.h>

class Vec3 {
public:
    float x, y, z;

    inline std::string toString() {
        return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
    }
    class BlockPos toBlockPos() {
        auto px = (int)x;
        auto py = (int)y;
        auto pz = (int)z;
        if (px < 0)
            px = px - 1;
        if (px < 0)
            py = py - 1;
        if (pz < 0)
            pz = pz - 1;
        return { px, py, pz };
    }
    template <typename _TP>
    void pack(WBStreamImpl<_TP>& ws) const {
        ws.apply(x, y, z);
    }
    void unpack(RBStream& rs) { rs.apply(x, y, z); }

    inline Vec3 add(float dx, float dy, float dz) { return { x + dx, y + dy, z + dz }; }

    Vec3 Vec3::operator*(float num) { return { x * num, y * num, z * num }; }

    Vec3 Vec3::operator+(Vec3& v2) {
        return {
            this->x + v2.x, this->y + v2.y, this->z + v2.z };
    }
    Vec3 Vec3::operator-(Vec3& v2) {
        return { this->x - v2.x, this->y - v2.y, this->z - v2.z
        };
    }
};