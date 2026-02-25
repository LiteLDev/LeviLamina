#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class RoutePrerequisiteState : int {
    AllConditionsMetNoFurtherActionsNeeded = 0,
    ConditionsNotMetNewScreenPushed        = 1,
};

}
