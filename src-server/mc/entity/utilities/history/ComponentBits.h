#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace History {

enum class ComponentBits : int {
    ItemUseSlowdownModifierComponent          = 0,
    BlockCollisionResolutionVectorComponent   = 1,
    MoveInputComponent                        = 2,
    ReplayStateTrackerComponent               = 3,
    ActorRotationComponent                    = 4,
    BlockPosTrackerComponent                  = 5,
    BuoyancyComponent                         = 6,
    RewindCollisionShapesComponent            = 7,
    MovementEffectsComponent                  = 8,
    BuoyancyFloatRequestComponent             = 9,
    InsideSlowingSweetBerryBushBlockComponent = 10,
    VehicleInputIntentComponent               = 11,
    RiptideTridentSpinAttackComponent         = 12,
    SpinAttackResultsComponent                = 13,
    BuoyancyRequestCanFloat                   = 14,
    BuoyancyRequestNeedToResurface            = 15,
    MovementInterpolatorComponent             = 16,
    Size                                      = 17,
};

}
