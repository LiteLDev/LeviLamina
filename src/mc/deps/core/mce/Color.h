#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"

namespace mce {

class Color;

class Color : public ll::math::floatN4<Color> {
public:
    [[nodiscard]] constexpr Color() noexcept = default;

    [[nodiscard]] constexpr Color(uint hex) noexcept : Color((hex >> 16) & 0xFF, (hex >> 8) & 0xFF, hex & 0xFF) {}

    template <std::integral T0, std::integral T1, std::integral T2, std::integral T3 = uint>
    [[nodiscard]] constexpr Color(T0 const& ir, T1 const& ig, T2 const& ib, T3 const& ia = 255) noexcept
    : floatN4(
          static_cast<float>(ir) / 255.0f,
          static_cast<float>(ig) / 255.0f,
          static_cast<float>(ib) / 255.0f,
          static_cast<float>(ia) / 255.0f
      ) {}
    template <std::floating_point T0, std::floating_point T1, std::floating_point T2, std::floating_point T3 = double>
    [[nodiscard]] constexpr Color(T0 const& r, T1 const& g, T2 const& b, T3 const& a = 1) noexcept
    : floatN4(r, g, b, a) {}

    template <ll::math::IsFloatN V, std::floating_point A = double>
    [[nodiscard]] constexpr Color(V const& v, A const& a = 1) noexcept // NOLINT
        requires(V::size() == 3)
    : floatN4(v.r, v.g, v.b, a) {}

    [[nodiscard]] constexpr Color(std::string_view hex) noexcept : floatN4(0, 0, 0, 1) { // NOLINT
        if (hex[0] == '#') {
            hex = hex.substr(1);
        }

        switch (hex.length()) {
        case 4:
            a = static_cast<float>(hexToNum(hex[3]) * 17) / 255.0f;
        case 3:
            r = static_cast<float>(hexToNum(hex[0]) * 17) / 255.0f;
            g = static_cast<float>(hexToNum(hex[1]) * 17) / 255.0f;
            b = static_cast<float>(hexToNum(hex[2]) * 17) / 255.0f;
            break;
        case 8:
            a = static_cast<float>(16 * hexToNum(hex[6]) + hexToNum(hex[7])) / 255.0f;
        case 6:
            r = static_cast<float>(16 * hexToNum(hex[0]) + hexToNum(hex[1])) / 255.0f;
            g = static_cast<float>(16 * hexToNum(hex[2]) + hexToNum(hex[3])) / 255.0f;
            b = static_cast<float>(16 * hexToNum(hex[4]) + hexToNum(hex[5])) / 255.0f;
            break;
        default:
            return;
        }
    };

    [[nodiscard]] constexpr class Vec3 toVec3() const noexcept { return {r, g, b}; }

    [[nodiscard]] constexpr class mce::Color sRGBToLinear() const noexcept {
        auto color{toVec3()};
        return {select(color.gt(0.04045f), pow(color / 1.055f + 0.055f, {2.4f}), color / 12.92f), a};
    }

    [[nodiscard]] constexpr class mce::Color linearTosRGB() const noexcept {
        auto color{toVec3()};
        return {select(color.gt(0.0031308f), pow(color, {1.0f / 2.4f}) * 1.055f - 0.055f, color * 12.92f), a};
    }

    [[nodiscard]] constexpr class mce::Color linearToXYZ() const noexcept {
        auto color{toVec3()};
        return {
            color.dot({0.4124f, 0.3576f, 0.1805f}),
            color.dot({0.2126f, 0.7152f, 0.0722f}),
            color.dot({0.0193f, 0.1192f, 0.9505f}),
            a
        };
    }

    [[nodiscard]] constexpr class mce::Color XYZToLinear() const noexcept {
        auto color{toVec3()};
        return {
            color.dot({3.2410f, -1.5374f, -0.4986f}),
            color.dot({-0.9692f, 1.8760f, 0.0416f}),
            color.dot({0.0556f, -0.2040f, 1.0570f}),
            a
        };
    }

    [[nodiscard]] constexpr class mce::Color linearToLMS() const noexcept {
        auto color{toVec3()};
        return {
            color.dot({0.4122214708f, 0.5363325363f, 0.0514459929f}),
            color.dot({0.2119034982f, 0.6806995451f, 0.1073969566f}),
            color.dot({0.0883024619f, 0.2817188376f, 0.6299787005f}),
            a
        };
    }

    [[nodiscard]] constexpr class mce::Color LMSToLinear() const noexcept {
        auto color{toVec3()};
        return {
            color.dot({+4.0767416621f, -3.3077115913f, +0.2309699292f}),
            color.dot({-1.2684380046f, +2.6097574011f, -0.3413193965f}),
            color.dot({-0.0041960863f, -0.7034186147f, +1.7076147010f}),
            a
        };
    }

    [[nodiscard]] constexpr class mce::Color LMSToOklab() const noexcept {
        auto color{pow(toVec3(), {1.0f / 3.0f})};
        return {
            color.dot({0.2104542553f, +0.7936177850f, -0.0040720468f}),
            color.dot({1.9779984951f, -2.4285922050f, +0.4505937099f}),
            color.dot({0.0259040371f, +0.7827717662f, -0.8086757660f}),
            a
        };
    }

    [[nodiscard]] constexpr class mce::Color OklabToLMS() const noexcept {
        auto color{toVec3()};
        return {
            pow({color.dot({1.0f, +0.3963377774f, +0.2158037573f}),
                 color.dot({1.0f, -0.1055613458f, -0.0638541728f}),
                 color.dot({1.0f, -0.0894841775f, -1.2914855480f})},
                Vec3{3}),
            a
        };
    }

    [[nodiscard]] constexpr class mce::Color XYZToLab() const noexcept {
        auto color = toVec3() / Vec3{0.950489f, 1.0f, 1.08884f};

        constexpr float delta  = 6.0f / 29.0f;
        constexpr float delta2 = delta * delta;
        constexpr float delta3 = delta2 * delta;

        color = select(color.gt(delta3), pow(color, {1.0f / 3.0f}), color / (3.0f * delta2) + 4.0f / 29.0f);
        return {116.0f * color.y - 16.0f, 500.0f * (color.x - color.y), 200.0f * (color.y - color.z), a};
    }

    [[nodiscard]] constexpr class mce::Color LabToXYZ() const noexcept {
        float tmpy = (r + 16.0f) / 116.0f;
        Vec3  color{tmpy + g / 500.0f, tmpy, tmpy - b / 200.0f};

        constexpr float delta  = 6.0f / 29.0f;
        constexpr float delta2 = delta * delta;

        color = select(color.gt(delta), pow(color, {3.0f}), (color - 4.0f / 29.0f) * (3.0f * delta2));
        return {
            color * Vec3{0.950489f, 1.0f, 1.08884f},
            a
        };
    }

    [[nodiscard]] constexpr double deltaE76(Color const& dst) const noexcept { // 2.3 for JND
        return this->sRGBToLinear().linearToXYZ().XYZToLab().toVec3().distanceTo(
            dst.sRGBToLinear().linearToXYZ().XYZToLab().toVec3()
        );
    }

    [[nodiscard]] inline double deltaE94(Color const& dst) const noexcept { // 1.0 for JND
        auto m1 = this->sRGBToLinear().linearToXYZ().XYZToLab().toVec3();
        Vec2 ab1{m1.y, m1.z};
        auto m2 = dst.sRGBToLinear().linearToXYZ().XYZToLab().toVec3();
        Vec2 ab2{m2.y, m2.z};
        auto C1 = ab1.length();
        auto C2 = ab2.length();
        auto dC = C1 - C2;
        Vec3 D{m1.x - m2.x, dC, sqrt(ab1.distanceToSqr(ab2) - dC)};
        return (D / Vec3{1.0, 1.0 + 0.045 * C1, 1.0 + 0.015 * C2}).length();
    }

    [[nodiscard]] inline double deltaE00(Color const& dst) const noexcept { // 1.0 for JND
        auto ma = this->sRGBToLinear().linearToXYZ().XYZToLab().toVec3();
        auto mb = dst.sRGBToLinear().linearToXYZ().XYZToLab().toVec3();

        // https://doi.org/10.1002/col.20070
        // The CIEDE2000 color-difference formula: Implementation notes,
        // supplementary test data, and mathematical observations

        constexpr auto rtod = std::numbers::pi / 180.0;
        constexpr auto dtor = 180.0 / std::numbers::pi;
        constexpr auto tpi  = std::numbers::pi * 2;
        constexpr auto cons = 6103515625; /*25^7*/

        double L1  = ma.r;
        double L2  = mb.r;
        double a1  = ma.g;
        double a2  = mb.g;
        double b1  = ma.b;
        double b2  = mb.b;
        double dL  = L1 - L2;
        double C1  = sqrt(a1 * a1 + b1 * b1);
        double C2  = sqrt(a2 * a2 + b2 * b2);
        double L_  = (L1 + L2) * 0.5;
        double C_  = (C1 + C2) * 0.5;
        double C_7 = std::pow(C_, 7);
        double G   = (1 - sqrt(C_7 / (C_7 + cons))) * 0.5;
        double a1p = a1 * (1 + G);
        double a2p = a2 * (1 + G);
        double C1p = sqrt(a1p * a1p + b1 * b1);
        double C2p = sqrt(a2p * a2p + b2 * b2);
        double C_p = (C1p + C2p) * 0.5;
        double dCp = C1p - C2p;
        double h1p = atan2(b1, a1p);
        double h2p = atan2(b2, a2p);
        if (h1p < 0) h1p += tpi;
        if (h2p < 0) h2p += tpi;
        h1p        *= dtor;
        h2p        *= dtor;
        double h_p  = (h1p + h2p) * 0.5;
        double dhp  = 0;
        double H_p  = 0;
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
        double T = 1 - 0.17 * cos((H_p - 30) * rtod) + 0.24 * cos((2 * H_p) * rtod) + 0.32 * cos((3 * H_p + 6) * rtod)
                 - 0.20 * cos((4 * H_p - 63.0) * rtod);
        double dHp   = 2 * sqrt(C1p * C2p) * sin(dhp * 0.5 * rtod);
        L_          -= 50;
        L_          *= L_;
        double SL    = 1.0 + 0.015 * L_ / sqrt(L_ + 20);
        double SC    = 1.0 + 0.045 * C_p;
        double SH    = 1.0 + 0.015 * C_p * T;
        double C_p7  = std::pow(C_p, 7);
        double kH    = (H_p - 275) / 25;
        double RT    = -2 * sqrt(C_p7 / (C_p7 + cons)) * sin(60 * exp(-kH * kH) * rtod);

        dL  = dL / SL;
        dCp = dCp / SC;
        dHp = dHp / SH;

        return sqrt(dL * dL + dCp * dCp + dHp * dHp + RT * dCp * dHp);
    }

    [[nodiscard]] inline double distanceTo(Color const& dst) const noexcept { return deltaE00(dst); }

private:
    [[nodiscard]] constexpr uchar static hexToNum(char hex) noexcept {
        if ('A' <= hex && hex <= 'F') {
            return 10 + (hex - 'A');
        }
        if ('a' <= hex && hex <= 'f') {
            return 10 + (hex - 'a');
        }
        if ('0' <= hex && hex <= '9') {
            return (hex - '0');
        }
        return 0;
    }

public:
    // NOLINTBEGIN
    // symbol: ??8Color@mce@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class mce::Color const& c) const;

    // symbol: ?toABGR@Color@mce@@QEBAHXZ
    MCAPI int toABGR() const;

    // symbol: ?toARGB@Color@mce@@QEBAHXZ
    MCAPI int toARGB() const;

    // symbol: ?toHexString@Color@mce@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toHexString() const;

    // symbol: ?fromHexString@Color@mce@@SA?AV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class mce::Color fromHexString(std::string const&);

    // symbol: ?BLACK@Color@mce@@2V12@B
    MCAPI static class mce::Color const BLACK;

    // symbol: ?BLUE@Color@mce@@2V12@B
    MCAPI static class mce::Color const BLUE;

    // symbol: ?CYAN@Color@mce@@2V12@B
    MCAPI static class mce::Color const CYAN;

    // symbol: ?GREEN@Color@mce@@2V12@B
    MCAPI static class mce::Color const GREEN;

    // symbol: ?GREY@Color@mce@@2V12@B
    MCAPI static class mce::Color const GREY;

    // symbol: ?MINECOIN_GOLD@Color@mce@@2V12@B
    MCAPI static class mce::Color const MINECOIN_GOLD;

    // symbol: ?NIL@Color@mce@@2V12@B
    MCAPI static class mce::Color const NIL;

    // symbol: ?ORANGE@Color@mce@@2V12@B
    MCAPI static class mce::Color const ORANGE;

    // symbol: ?PINK@Color@mce@@2V12@B
    MCAPI static class mce::Color const PINK;

    // symbol: ?PURPLE@Color@mce@@2V12@B
    MCAPI static class mce::Color const PURPLE;

    // symbol: ?REBECCA_PURPLE@Color@mce@@2V12@B
    MCAPI static class mce::Color const REBECCA_PURPLE;

    // symbol: ?RED@Color@mce@@2V12@B
    MCAPI static class mce::Color const RED;

    // symbol: ?SHADE_DOWN@Color@mce@@2V12@B
    MCAPI static class mce::Color const SHADE_DOWN;

    // symbol: ?SHADE_NORTH_SOUTH@Color@mce@@2V12@B
    MCAPI static class mce::Color const SHADE_NORTH_SOUTH;

    // symbol: ?SHADE_UP@Color@mce@@2V12@B
    MCAPI static class mce::Color const SHADE_UP;

    // symbol: ?SHADE_WEST_EAST@Color@mce@@2V12@B
    MCAPI static class mce::Color const SHADE_WEST_EAST;

    // symbol: ?WHITE@Color@mce@@2V12@B
    MCAPI static class mce::Color const WHITE;

    // symbol: ?YELLOW@Color@mce@@2V12@B
    MCAPI static class mce::Color const YELLOW;

    // NOLINTEND
};

}; // namespace mce
