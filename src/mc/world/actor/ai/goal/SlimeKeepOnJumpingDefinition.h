#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class SlimeKeepOnJumpingDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk593511;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeKeepOnJumpingDefinition& operator=(SlimeKeepOnJumpingDefinition const&);
    SlimeKeepOnJumpingDefinition(SlimeKeepOnJumpingDefinition const&);
    SlimeKeepOnJumpingDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SlimeKeepOnJumpingDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
