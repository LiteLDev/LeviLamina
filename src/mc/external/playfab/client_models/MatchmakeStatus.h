#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class MatchmakeStatus : int {
    MatchmakeStatusComplete         = 0,
    MatchmakeStatusWaiting          = 1,
    MatchmakeStatusGameNotFound     = 2,
    MatchmakeStatusNoAvailableSlots = 3,
    MatchmakeStatusSessionClosed    = 4,
};

}
