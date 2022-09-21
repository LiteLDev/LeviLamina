/**
 * @file  MC/MovementInterpolatorSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MovementInterpolatorSystemImpl.
 *
 */
class MovementInterpolatorSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORSYSTEMIMPL
public:
    class MovementInterpolatorSystemImpl& operator=(class MovementInterpolatorSystemImpl const &) = delete;
    MovementInterpolatorSystemImpl(class MovementInterpolatorSystemImpl const &) = delete;
    MovementInterpolatorSystemImpl() = delete;
#endif

public:
    /**
     * @hash   -567799487
     * @symbol ?_tickPosition@MovementInterpolatorSystemImpl@@SA?AV?$tuple@VVec3@@M@std@@AEAUMovementInterpolatorComponent@@AEBVVec3@@M@Z
     */
    MCAPI static class std::tuple<class Vec3, float> _tickPosition(struct MovementInterpolatorComponent &, class Vec3 const &, float);
    /**
     * @hash   1891545540
     * @symbol ?_tickRotation@MovementInterpolatorSystemImpl@@SA?AV?$tuple@VVec2@@V1@@std@@AEAUMovementInterpolatorComponent@@AEBVVec2@@1@Z
     */
    MCAPI static class std::tuple<class Vec2, class Vec2> _tickRotation(struct MovementInterpolatorComponent &, class Vec2 const &, class Vec2 const &);

};