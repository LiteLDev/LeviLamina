#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class OwnerHurtByTargetGoal : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>> mOwnerHurtBy;
    ::ll::TypedStorage<8, 8, ::Mob&>             mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnerHurtByTargetGoal& operator=(OwnerHurtByTargetGoal const&);
    OwnerHurtByTargetGoal(OwnerHurtByTargetGoal const&);
    OwnerHurtByTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 0
    virtual ~OwnerHurtByTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCFOLD void $start();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
