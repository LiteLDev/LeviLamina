#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec2 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEC2
public:
    Vec2& operator=(Vec2 const&) = delete;
    Vec2(Vec2 const&)            = delete;
    Vec2()                       = delete;
#endif

public:
    /**
     * @symbol ?toString\@Vec2\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol ?LOWEST\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const LOWEST;
    /**
     * @symbol ?MAX\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const MAX;
    /**
     * @symbol ?MIN\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const MIN;
    /**
     * @symbol ?NEG_UNIT_X\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const NEG_UNIT_X;
    /**
     * @symbol ?NEG_UNIT_Y\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const NEG_UNIT_Y;
    /**
     * @symbol ?ONE\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const ONE;
    /**
     * @symbol ?UNIT_X\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const UNIT_X;
    /**
     * @symbol ?UNIT_Y\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const UNIT_Y;
    /**
     * @symbol ?ZERO\@Vec2\@\@2V1\@B
     */
    MCAPI static class Vec2 const ZERO;
    /**
     * @symbol ?rotate\@Vec2\@\@SA?AV1\@AEBV1\@M\@Z
     */
    MCAPI static class Vec2 rotate(class Vec2 const&, float);
};
