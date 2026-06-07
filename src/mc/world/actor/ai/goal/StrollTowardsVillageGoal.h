#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToVillageGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
// clang-format on

class StrollTowardsVillageGoal : public ::MoveToVillageGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mStartChance;
    // NOLINTEND

public:
    // prevent constructor by default
    StrollTowardsVillageGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ::BlockPos _selectRandomPosInVillage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StrollTowardsVillageGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI ::BlockPos $_selectRandomPosInVillage();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
