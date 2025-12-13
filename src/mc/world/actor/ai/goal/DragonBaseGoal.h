#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
// clang-format on

class DragonBaseGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EnderDragon&> mDragon;
    ::ll::TypedStorage<4, 4, float>          mActiveSpeed;
    ::ll::TypedStorage<4, 4, float>          mFlightSpeed;
    ::ll::TypedStorage<4, 4, float>          mTurnSpeed;
    ::ll::TypedStorage<4, 8, ::FloatRange>   mTargetZone;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonBaseGoal& operator=(DragonBaseGoal const&);
    DragonBaseGoal(DragonBaseGoal const&);
    DragonBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DragonBaseGoal() /*override*/ = default;
    // NOLINTEND
};
