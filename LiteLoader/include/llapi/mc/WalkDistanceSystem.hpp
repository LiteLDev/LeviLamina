/**
 * @file  WalkDistanceSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace WalkDistanceSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createSystem\@WalkDistanceSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?updateWalkDistance\@WalkDistanceSystem\@\@YAXAEBUMoveRequestComponent\@\@AEBUStateVectorComponent\@\@AEAUWalkDistComponent\@\@\@Z
     */
    MCAPI void updateWalkDistance(struct MoveRequestComponent const &, struct StateVectorComponent const &, struct WalkDistComponent &);

};