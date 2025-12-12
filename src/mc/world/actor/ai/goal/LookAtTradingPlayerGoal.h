#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class LookAtTradingPlayerGoal : public ::LookAtActorGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtTradingPlayerGoal& operator=(LookAtTradingPlayerGoal const&);
    LookAtTradingPlayerGoal(LookAtTradingPlayerGoal const&);
    LookAtTradingPlayerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LookAtTradingPlayerGoal() /*override*/ = default;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
