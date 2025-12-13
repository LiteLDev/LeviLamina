#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToVillageGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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
    virtual bool canUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ::BlockPos _selectRandomPosInVillage() /*override*/;

    virtual ~StrollTowardsVillageGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI ::BlockPos $_selectRandomPosInVillage();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
