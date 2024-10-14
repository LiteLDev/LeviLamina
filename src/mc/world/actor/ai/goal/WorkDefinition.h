#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class WorkDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    WorkDefinition(WorkDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkDefinition();

    MCAPI WorkDefinition();

    MCAPI class WorkDefinition& operator=(class WorkDefinition const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
