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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 17
    virtual ::BlockPos _selectRandomPosInVillage() /*override*/;

    // vIndex: 0
    virtual ~StrollTowardsVillageGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StrollTowardsVillageGoal(
        ::Mob& mob,
        float  speedModifier,
        float  goalRadius,
        float  cooldown,
        int    searchRange,
        float  startChance
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Mob& mob, float speedModifier, float goalRadius, float cooldown, int searchRange, float startChance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
