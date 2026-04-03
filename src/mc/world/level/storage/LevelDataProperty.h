#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelDataProperty : ushort {
    LevelName                 = 0,
    GameType                  = 1,
    PlayerGameType            = 2,
    Difficulty                = 3,
    IsHardcore                = 4,
    StartWithMap              = 5,
    BonusChest                = 6,
    DefaultPlayerPermissions  = 7,
    FlatWorld                 = 8,
    Seed                      = 9,
    SimulationDistance        = 10,
    AllowCheats               = 11,
    EducationEdition          = 12,
    Time                      = 13,
    AchievementsDisabled      = 14,
    WorldTemplateOptionLocked = 15,
    Count                     = 16,
};
