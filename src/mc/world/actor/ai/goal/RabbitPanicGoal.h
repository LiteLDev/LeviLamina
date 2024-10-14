#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/PanicGoal.h"

class RabbitPanicGoal : public ::PanicGoal {
public:
    // prevent constructor by default
    RabbitPanicGoal& operator=(RabbitPanicGoal const&);
    RabbitPanicGoal(RabbitPanicGoal const&);
    RabbitPanicGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RabbitPanicGoal() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
