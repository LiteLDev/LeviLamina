#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class VillagerBase;
// clang-format on

class MakeLoveGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::VillagerBase&> mVillager;
    ::ll::TypedStorage<4, 4, int>             mLoveMakingTime;
    // NOLINTEND

public:
    // prevent constructor by default
    MakeLoveGoal& operator=(MakeLoveGoal const&);
    MakeLoveGoal(MakeLoveGoal const&);
    MakeLoveGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~MakeLoveGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _breed(::VillagerBase& partner) const;

    MCAPI ::VillagerBase* _findMate() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
