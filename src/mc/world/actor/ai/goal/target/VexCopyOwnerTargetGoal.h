#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct MobDescriptor;
// clang-format on

class VexCopyOwnerTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    VexCopyOwnerTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual void start() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VexCopyOwnerTargetGoal(::Mob& mob, ::std::vector<::MobDescriptor> const& targetTypes);
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

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $start();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
