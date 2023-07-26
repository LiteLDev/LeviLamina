#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/VectorBase.hpp"

class Vec2 : public VectorBase<Vec2, float, float> {

public:
    float x, y;
    Vec2() = default;
    Vec2(float a, float b) : x(a), y(b){};

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) {
        if (index==1){
            return y;
        }
        return x;
    }

    template <typename T>
    [[nodiscard]] constexpr T get(size_t index) const {
        if (index == 1) {
            return y;
        }
        return x;
    }

    /**
     * @symbol ?toString\@Vec2\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
    /**
     * @symbol ?rotate\@Vec2\@\@SA?AV1\@AEBV1\@M\@Z
     */
    MCAPI static class Vec2 rotate(class Vec2 const&, float); // NOLINT
    /**
     * @symbol ?LOWEST\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const LOWEST; // NOLINT
    /**
     * @symbol ?MAX\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const MAX; // NOLINT
    /**
     * @symbol ?MIN\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const MIN; // NOLINT
    /**
     * @symbol ?NEG_UNIT_X\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const NEG_UNIT_X; // NOLINT
    /**
     * @symbol ?NEG_UNIT_Y\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const NEG_UNIT_Y; // NOLINT
    /**
     * @symbol ?ONE\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const ONE; // NOLINT
    /**
     * @symbol ?UNIT_X\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const UNIT_X; // NOLINT
    /**
     * @symbol ?UNIT_Y\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const UNIT_Y; // NOLINT
    /**
     * @symbol ?ZERO\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const ZERO; // NOLINT
};

namespace std {

template <>
struct hash<Vec2> {
    std::size_t operator()(Vec2 const& pos) const noexcept { return pos.hash(); }
};

} // namespace std