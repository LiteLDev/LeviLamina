/**
 * @file  MovementInterpolatorSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?_onGroundPostTick\@MovementInterpolatorSystemImpl\@\@SAXAEBVStrictEntityContext\@\@AEBUMovementInterpolatorComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void _onGroundPostTick(class StrictEntityContext const &, struct MovementInterpolatorComponent const &, struct StateVectorComponent &);
    /**
     * @symbol  ?_tickPosition\@MovementInterpolatorSystemImpl\@\@SA?AV?$tuple\@VVec3\@\@M\@std\@\@AEAUMovementInterpolatorComponent\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI static class std::tuple<class Vec3, float> _tickPosition(struct MovementInterpolatorComponent &, class Vec3 const &, float);
    /**
     * @symbol  ?_tickRotation\@MovementInterpolatorSystemImpl\@\@SA?AV?$tuple\@VVec2\@\@V1\@\@std\@\@AEAUMovementInterpolatorComponent\@\@AEBVVec2\@\@1\@Z
     */
    MCAPI static class std::tuple<class Vec2, class Vec2> _tickRotation(struct MovementInterpolatorComponent &, class Vec2 const &, class Vec2 const &);

};