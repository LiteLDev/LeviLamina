#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct MobDescriptor;
// clang-format on

class OwnerHurtTargetGoal : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>> mLastOwnerHurt;
    ::ll::TypedStorage<8, 8, ::Mob&>             mMob;
    ::ll::TypedStorage<4, 4, int>                mTimestamp;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnerHurtTargetGoal& operator=(OwnerHurtTargetGoal const&);
    OwnerHurtTargetGoal(OwnerHurtTargetGoal const&);
    OwnerHurtTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnerHurtTargetGoal(::Mob& mob, ::std::vector<::MobDescriptor> const& targetTypes);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, ::std::vector<::MobDescriptor> const& targetTypes);
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
