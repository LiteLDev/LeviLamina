#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class OwnerHurtTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    OwnerHurtTargetGoal& operator=(OwnerHurtTargetGoal const&);
    OwnerHurtTargetGoal(OwnerHurtTargetGoal const&);
    OwnerHurtTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OwnerHurtTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    MCAPI OwnerHurtTargetGoal(class Mob& mob, std::vector<struct MobDescriptor> const& targetTypes);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob, std::vector<struct MobDescriptor> const& targetTypes);

    MCAPI bool canUse$();

    MCAPI void start$();

    // NOLINTEND
};
