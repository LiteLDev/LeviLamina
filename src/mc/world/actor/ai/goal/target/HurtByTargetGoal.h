#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class HurtByTargetGoal : public ::TargetGoal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual void alertOther(::Mob* other, ::Mob* hurtByMob);

    virtual ~HurtByTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI void $alertOther(::Mob* other, ::Mob* hurtByMob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
