#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class OwnerHurtByTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    OwnerHurtByTargetGoal& operator=(OwnerHurtByTargetGoal const&);
    OwnerHurtByTargetGoal(OwnerHurtByTargetGoal const&);
    OwnerHurtByTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OwnerHurtByTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    MCAPI OwnerHurtByTargetGoal(class Mob& mob, std::vector<struct MobDescriptor> const& targetTypes);

    // NOLINTEND
};
