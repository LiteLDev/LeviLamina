#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class VexCopyOwnerTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    VexCopyOwnerTargetGoal& operator=(VexCopyOwnerTargetGoal const&);
    VexCopyOwnerTargetGoal(VexCopyOwnerTargetGoal const&);
    VexCopyOwnerTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VexCopyOwnerTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI VexCopyOwnerTargetGoal(class Mob& mob, std::vector<struct MobDescriptor> const& targetTypes);

    // NOLINTEND
};
