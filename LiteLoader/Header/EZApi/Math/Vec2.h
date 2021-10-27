#pragma once

class Vec2 {
public:
    float x = 0.0f, y = 0.0f;
    // For ABI
    inline ~Vec2() {
    }

    Vec2 operator+(Vec2 const& rhs) const noexcept {
        return {x + rhs.x, y + rhs.y};
    }
    constexpr bool operator==(Vec2 const& rhs) const noexcept {
        return x == rhs.x && y == rhs.y;
    }
    constexpr bool operator!=(Vec2 const& rhs) const noexcept {
        return !(*this == rhs);
    }
};