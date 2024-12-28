#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class GameInstanceState : int {
    GameInstanceStateOpen   = 0,
    GameInstanceStateClosed = 1,
};

}
