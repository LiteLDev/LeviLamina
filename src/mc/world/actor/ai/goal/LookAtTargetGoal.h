#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

class LookAtTargetGoal : public ::LookAtActorGoal {
public:
    // prevent constructor by default
    LookAtTargetGoal& operator=(LookAtTargetGoal const&);
    LookAtTargetGoal(LookAtTargetGoal const&);
    LookAtTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtTargetGoal() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
