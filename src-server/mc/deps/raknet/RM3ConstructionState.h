#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RM3ConstructionState : int {
    SendConstruction = 0,
    AlreadyExistsRemotely = 1,
    AlreadyExistsRemotelyDoNotConstruct = 2,
    NeverConstruct = 3,
    NoAction = 4,
    Max = 5,
};

}
