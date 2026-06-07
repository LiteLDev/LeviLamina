#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RiseToLiquidLevelGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, float>  mLiquidYOffset;
    ::ll::TypedStorage<4, 4, float>  mRiseDelta;
    ::ll::TypedStorage<4, 4, float>  mSinkDelta;
    // NOLINTEND

public:
    // prevent constructor by default
    RiseToLiquidLevelGoal& operator=(RiseToLiquidLevelGoal const&);
    RiseToLiquidLevelGoal(RiseToLiquidLevelGoal const&);
    RiseToLiquidLevelGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RiseToLiquidLevelGoal(::Mob& mob, float liquidYOffset, float riseDelta, float sinkDelta);

    MCAPI float findLiquidLevel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float liquidYOffset, float riseDelta, float sinkDelta);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
