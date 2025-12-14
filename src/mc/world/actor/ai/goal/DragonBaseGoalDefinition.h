#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class DragonBaseGoalDefinition : public ::BaseGoalDefinition {
public:
    // DragonBaseGoalDefinition inner types define
    using self = ::DragonBaseGoalDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mActiveSpeed;
    ::ll::TypedStorage<4, 4, float>        mFlightSpeed;
    ::ll::TypedStorage<4, 4, float>        mTurnSpeed;
    ::ll::TypedStorage<4, 8, ::FloatRange> mTargetZone;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DragonBaseGoalDefinition() /*override*/ = default;

    virtual bool validateMobType(::Mob& mob) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $validateMobType(::Mob& mob) const;


    // NOLINTEND
};
