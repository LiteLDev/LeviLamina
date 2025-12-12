#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TeamManagerOperations : int {
    UpdateListsToNoTeam                  = 0,
    UpdateTeamsRequestedToAny            = 1,
    JoinAnyTeam                          = 2,
    JoinRequestedTeam                    = 3,
    UpdateTeamsRequestedToNoneAndAddTeam = 4,
    RemoveFromTeamsRequestedAndAddTeam   = 5,
    AddToRequestedTeams                  = 6,
    LeaveTeam                            = 7,
    SetMemberLimit                       = 8,
    SetJoinPermissions                   = 9,
    SetBalanceTeams                      = 10,
    SetBalanceTeamsInitial               = 11,
    SerializeWorld                       = 12,
};
