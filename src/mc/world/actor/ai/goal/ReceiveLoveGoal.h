#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class VillagerBase;
// clang-format on

class ReceiveLoveGoal : public ::Goal {
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

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~ReceiveLoveGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
