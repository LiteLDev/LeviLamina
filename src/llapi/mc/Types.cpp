#include "llapi/mc/Types.hpp"
#include "llapi/mc/ColorFormat.hpp"
#include "llapi/mc/Vec3.hpp"
#include "llapi/mc/BlockPos.hpp"
#include "llapi/mc/BoundingBox.hpp"
#include "llapi/mc/AABB.hpp"

#include "liteloader/LiteLoader.h"

// ChunkBlockPos::ChunkBlockPos(BlockPos const& pos, short minHeight)
//{
//     this->x = (char)pos.x & 0xf;
//     this->z = (char)pos.z & 0xf;
//     this->y = (short)(pos.y - minHeight);
// }

using ll::logger;

namespace mce {
std::string mce::Color::toConsoleCode(bool foreground) const {
    fmt::v9::rgb rgb;
    rgb.r = (uint8_t)(r * 0xff);
    rgb.g = (uint8_t)(g * 0xff);
    rgb.b = (uint8_t)(b * 0xff);
    if (foreground)
        return std::string(fmt::v9::detail::make_foreground_color<char>(fmt::v9::detail::color_type(rgb)));
    else
        return std::string(fmt::v9::detail::make_background_color<char>(fmt::v9::detail::color_type(rgb)));
}
std::string mce::Color::toNearestColorCode() const { return ColorFormat::nearestColorCodeFromColor(*this); };
char        mce::Color::toNearestParticleColorCode() const {
    double minDis = DBL_MAX;
    char   result = 'B';
    for (auto& color : mce::particleColors) {
        auto dis = this->distanceTo(color.second.second);
        if (minDis > dis) {
            minDis = dis;
            result = color.second.first;
        }
    }
    return result;
}
ColorPalette mce::Color::toNearestParticleColorType() const {
    double       minDis = DBL_MAX;
    ColorPalette result = ColorPalette::BLACK;
    for (auto& color : mce::particleColors) {
        auto dis = this->distanceTo(color.second.second);
        if (minDis > dis) {
            minDis = dis;
            result = color.first;
        }
    }
    return result;
}

class mce::Color mce::Color::fromConsoleCode(std::string const& code) {
    return ColorFormat::ColorFromConsoleCode(code);
}
mce::Color Color::fromColorCode(std::string const& code) { return *ColorFormat::ColorFromColorCode(code); };
mce::Color Color::sRGBToLinear() const {
    float mr = r > 0.04045f ? pow(r / 1.055f + 0.055f, 2.4f) : r / 12.92f;
    float mg = g > 0.04045f ? pow(g / 1.055f + 0.055f, 2.4f) : g / 12.92f;
    float mb = b > 0.04045f ? pow(b / 1.055f + 0.055f, 2.4f) : b / 12.92f;
    return Color(mr, mg, mb, a);
};
mce::Color Color::LinearTosRGB() const {
    float mr = r > 0.0031308f ? 1.055f * pow(r, 1.0f / 2.4f) - 0.055f : r * 12.92f;
    float mg = g > 0.0031308f ? 1.055f * pow(g, 1.0f / 2.4f) - 0.055f : g * 12.92f;
    float mb = b > 0.0031308f ? 1.055f * pow(b, 1.0f / 2.4f) - 0.055f : b * 12.92f;
    return Color(mr, mg, mb, a);
};
mce::Color Color::LinearToXYZ() const {
    float mr = r * 0.4124f + g * 0.3576f + b * 0.1805f;
    float mg = r * 0.2126f + g * 0.7152f + b * 0.0722f;
    float mb = r * 0.0193f + g * 0.1192f + b * 0.9505f;
    return Color(mr, mg, mb, a);
};
mce::Color Color::XYZToLinear() const {
    float mr = r * 3.2410f + g * -1.5374f + b * -0.4986f;
    float mg = r * -0.9692f + g * 1.8760f + b * 0.0416f;
    float mb = r * 0.0556f + g * -0.2040f + b * 1.0570f;
    return Color(mr, mg, mb, a);
};
mce::Color Color::XYZToLab() const {

    float nx = r / 0.950489f;
    float ny = g;
    float nz = b / 1.08884f;

    static const float delta  = 6.0f / 29.0f;
    static const float delta2 = delta * delta;
    static const float delta3 = delta2 * delta;

    float mr = ny > delta3 ? pow(ny, 1.0f / 3.0f) : ny / (3.0f * delta2) + 4.0f / 29.0f;
    float mg = nx > delta3 ? pow(nx, 1.0f / 3.0f) : nx / (3.0f * delta2) + 4.0f / 29.0f;
    float mb = nz > delta3 ? pow(nz, 1.0f / 3.0f) : nz / (3.0f * delta2) + 4.0f / 29.0f;
    return Color(116.0f * mr - 16.0f, 500.0f * (mg - mr), 200.0f * (mr - mb), a);
};
mce::Color Color::LabToXYZ() const {

    float ny = (r + 16.0f) / 116.0f;
    float nx = ny + g / 500.0f;
    float nz = ny - b / 200.0f;

    static const float delta  = 6.0f / 29.0f;
    static const float delta2 = delta * delta;

    float mr = nx > delta ? pow(nx, 3.0f) : (nx - 4.0f / 29.0f) * 3.0f * delta2;
    float mg = ny > delta ? pow(ny, 3.0f) : (ny - 4.0f / 29.0f) * 3.0f * delta2;
    float mb = nz > delta ? pow(nz, 3.0f) : (nz - 4.0f / 29.0f) * 3.0f * delta2;
    return Color(mr * 0.950489f, mg, mb * 1.08884f, a);
};
double mce::Color::deltaE76(mce::Color const& dst) const {
    auto   ma = this->sRGBToLinear().LinearToXYZ().XYZToLab();
    auto   mb = dst.sRGBToLinear().LinearToXYZ().XYZToLab();
    double dL = ma.r - mb.r;
    double da = ma.g - mb.g;
    double db = ma.b - mb.b;
    return sqrt(dL * dL + da * da + db * db);
}
double mce::Color::deltaE94(mce::Color const& dst) const {
    auto ma = this->sRGBToLinear().LinearToXYZ().XYZToLab();
    auto mb = dst.sRGBToLinear().LinearToXYZ().XYZToLab();

    double L1 = ma.r;
    double L2 = mb.r;
    double a1 = ma.g;
    double a2 = mb.g;
    double b1 = ma.b;
    double b2 = mb.b;
    double dL = L1 - L2;
    double da = a1 - a2;
    double db = b1 - b2;
    double C1 = sqrt(a1 * a1 + b1 * b1);
    double C2 = sqrt(a2 * a2 + b2 * b2);
    double dC = C1 - C2;
    double dH = sqrt(da * da + db * db - dC * dC);
    double SL = 1.0;
    double SC = 1.0 + 0.045 * C1;
    double SH = 1.0 + 0.015 * C2;

    dL = dL / SL;
    dC = dC / SC;
    dH = dH / SH;

    return sqrt(dL * dL + dC * dC + dH * dH);
}
double mce::Color::deltaE00(mce::Color const& dst) const {
    auto ma = this->sRGBToLinear().LinearToXYZ().XYZToLab();
    auto mb = dst.sRGBToLinear().LinearToXYZ().XYZToLab();

    double L1  = ma.r;
    double L2  = mb.r;
    double a1  = ma.g;
    double a2  = mb.g;
    double b1  = ma.b;
    double b2  = mb.b;
    double dL  = L1 - L2;
    double da  = a1 - a2;
    double db  = b1 - b2;
    double C1  = sqrt(a1 * a1 + b1 * b1);
    double C2  = sqrt(a2 * a2 + b2 * b2);
    double L_  = (L1 + L2) * 0.5;
    double C_  = (C1 + C2) * 0.5;
    double C_7 = pow(C_, 7.0);
    double G   = (1 - sqrt(C_7 / (C_7 + 6103515625))) * 0.5;
    double a1p = a1 * (1 + G);
    double a2p = a2 * (1 + G);
    double C1p = sqrt(a1p * a1p + b1 * b1);
    double C2p = sqrt(a2p * a2p + b2 * b2);
    double C_p = (C1p + C2p) * 0.5;
    double dCp = C1p - C2p;
    double h1p = atan2(b1, a1p);
    double h2p = atan2(b2, a2p);
    if (h1p < 0)
        h1p += 6.2831853071796;
    if (h2p < 0)
        h2p += 6.2831853071796;
    h1p        *= 57.2957795131;
    h2p        *= 57.2957795131;
    double h_p = (h1p + h2p) * 0.5;
    double dhp = 0;
    double H_p = 0;
    if (C1p == 0 || C2p == 0) {
        H_p = h_p * 2;
    } else {
        if (180 < abs(h1p - h2p)) {
            if (h2p <= h1p) {
                dhp = h2p - h1p + 360;
            } else {
                dhp = h2p - h1p - 360;
            }
            if (h2p + h1p < 360) {
                H_p = h_p + 180;
            } else {
                H_p = h_p - 180;
            }
        } else {
            dhp = h2p - h1p;
            H_p = h_p;
        }
    }
    double T = 1 - 0.17 * cos((H_p - 30) * 0.0174532925199) + 0.24 * cos((2 * H_p) * 0.0174532925199) +
               0.32 * cos((3 * H_p + 6) * 0.0174532925199) - 0.20 * cos((4 * H_p - 63.0) * 0.0174532925199);
    double dHp  = 2 * sqrt(C1p * C2p) * sin(dhp * 0.5 * 0.0174532925199);
    L_          -= 50;
    L_          *= L_;
    double SL   = 1.0 + 0.015 * L_ / sqrt(L_ + 20);
    double SC   = 1.0 + 0.045 * C_p;
    double SH   = 1.0 + 0.015 * C_p * T;
    double C_p7 = pow(C_p, 7.0);
    double kH   = (H_p - 275) / 25;
    double RT   = -2 * sqrt(C_p7 / (C_p7 + 6103515625)) * sin(60 * exp(-kH * kH) * 0.0174532925199);

    dL  = dL / SL;
    dCp = dCp / SC;
    dHp = dHp / SH;

    return sqrt(dL * dL + dCp * dCp + dHp * dHp + RT * dCp * dHp);
}
double mce::Color::distanceTo(mce::Color const& dst) const { return this->deltaE00(dst); }
} // namespace mce

Vec3 BlockPos::toVec3() const { return {(float)x, (float)y, (float)z}; }

BoundingBox BlockPos::toBoundingBox() const { return {*this, *this}; }

AABB BlockPos::toAABB() const {
    Vec3 vec = this->toVec3();
    return {vec, vec + 1.0f};
}

Vec3 BlockPos::bottomCenter() const { return {(float)x + 0.5f, (float)y, (float)z + 0.5f}; }

Vec3 BlockPos::center() const { return {(float)x + 0.5f, (float)y + 0.5f, (float)z + 0.5f}; }

bool BlockPos::containedWithin(BoundingBox const& box) const {
    return x >= box.min.x && y >= box.min.y && z >= box.min.z && x <= box.max.x && y <= box.max.y && z <= box.max.z;
}

BlockPos Vec3::toBlockPos() const {
    return BlockPos((int)std::floor((double)x), (int)std::floor((double)y), (int)std::floor((double)z));
}

AABB BoundingBox::toAABB() const {
    Vec3 vec1 = min.toVec3();
    Vec3 vec2 = max.toVec3();
    return {vec1, vec2 + 1.0f};
}
