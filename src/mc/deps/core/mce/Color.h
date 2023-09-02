#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"

namespace mce {

class Color;

class Color : public floatN4<Color> {
public:
    template <std::floating_point T0>
    constexpr Color(T0 const& v = 0) noexcept : floatN4(v) {} // NOLINT
    template <std::integral T0, std::integral T1, std::integral T2, std::integral T3>
    constexpr Color(T0 const& ir, T1 const& ig, T2 const& ib, T3 const& ia = 255) noexcept
    : floatN4(
          static_cast<float>(ir) / 255.0f,
          static_cast<float>(ig) / 255.0f,
          static_cast<float>(ib) / 255.0f,
          static_cast<float>(ia) / 255.0f
      ) {}
    template <std::floating_point T0, std::floating_point T1, std::floating_point T2, std::floating_point T3>
    constexpr Color(T0 const& r, T1 const& g, T2 const& b, T3 const& a = 1) noexcept : floatN4(r, g, b, a) {}

    template <IsFloatN V, std::floating_point A>
    constexpr Color(V const& v, A const& a = 1) noexcept // NOLINT
        requires(V::size() == 3)
    : floatN4(v.r, v.g, v.b, a) {}

    constexpr Color(std::string_view hex) noexcept : floatN4(0, 0, 0, 1) { // NOLINT
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

    [[nodiscard]] [[maybe_unused]] constexpr class Vec3 toVec3() const noexcept { return {r, g, b}; }

    [[nodiscard]] [[maybe_unused]] constexpr class mce::Color sRGBToLinear() const noexcept {
        auto color{toVec3()};
        return {select(color.gt(0.04045f), pow(color / 1.055f + 0.055f, {2.4f}), color / 12.92f), a};
    }

    [[nodiscard]] [[maybe_unused]] constexpr class mce::Color LinearTosRGB() const noexcept {
        auto color{toVec3()};
        return {select(color.gt(0.0031308f), pow(color, {1.0f / 2.4f}) * 1.055f - 0.055f, color * 12.92f), a};
    }

    [[nodiscard]] [[maybe_unused]] constexpr class mce::Color LinearToXYZ() const noexcept {
        auto color{toVec3()};
        return {
            color.dot({0.4124f, 0.3576f, 0.1805f}),
            color.dot({0.2126f, 0.7152f, 0.0722f}),
            color.dot({0.0193f, 0.1192f, 0.9505f}),
            a};
    }

    [[nodiscard]] [[maybe_unused]] constexpr class mce::Color XYZToLinear() const noexcept {
        auto color{toVec3()};
        return {
            color.dot({3.2410f, -1.5374f, -0.4986f}),
            color.dot({-0.9692f, 1.8760f, 0.0416f}),
            color.dot({0.0556f, -0.2040f, 1.0570f}),
            a};
    }

    [[nodiscard]] [[maybe_unused]] constexpr class mce::Color XYZToLab() const noexcept {
        auto color = toVec3() / Vec3{0.950489f, 1.0f, 1.08884f};

        constexpr float delta  = 6.0f / 29.0f;
        constexpr float delta2 = delta * delta;
        constexpr float delta3 = delta2 * delta;

        color = select(color.gt(delta3), pow(color, {1.0f / 3.0f}), color / (3.0f * delta2) + 4.0f / 29.0f);
        return {116.0f * color.y - 16.0f, 500.0f * (color.x - color.y), 200.0f * (color.y - color.z), a};
    }

    [[nodiscard]] [[maybe_unused]] constexpr class mce::Color LabToXYZ() const noexcept {
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

    [[nodiscard]] [[maybe_unused]] constexpr double deltaE76(Color const& dst) const noexcept { // 2.3 for JND
        return this->sRGBToLinear().LinearToXYZ().XYZToLab().toVec3().distanceTo(
            dst.sRGBToLinear().LinearToXYZ().XYZToLab().toVec3()
        );
    }

    LLNDAPI double deltaE94(Color const& dst) const noexcept; // 1.0 for JND

    LLNDAPI double deltaE00(Color const& dst) const noexcept; // 1.0 for JND

    [[nodiscard]] [[maybe_unused]] inline double distanceTo(Color const& dst) const noexcept {
        return deltaE00(dst);
    }

private:
    constexpr uint8_t static hexToNum(char hex) noexcept {
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
    MCAPI bool operator==(class mce::Color const&) const;

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
