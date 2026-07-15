#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class VillagerBase;
// clang-format on

class MakeLoveGoal : public ::BaseGoal {
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

    virtual void appendDebugInfo(::std::string&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
