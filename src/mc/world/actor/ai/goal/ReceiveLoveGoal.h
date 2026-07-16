#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class VillagerBase;
// clang-format on

class ReceiveLoveGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::VillagerBase&> mVillager;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiveLoveGoal& operator=(ReceiveLoveGoal const&);
    ReceiveLoveGoal(ReceiveLoveGoal const&);
    ReceiveLoveGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
