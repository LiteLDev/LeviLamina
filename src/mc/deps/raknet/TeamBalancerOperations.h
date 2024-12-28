#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TeamBalancerOperations : int {
    StatusUpdateToNewHost = 0,
    CancelTeamRequest     = 1,
    RequestAnyTeam        = 2,
    RequestSpecificTeam   = 3,
};
