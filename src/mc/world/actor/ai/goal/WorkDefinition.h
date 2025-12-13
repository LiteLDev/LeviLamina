#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class WorkDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk13a35d;
    ::ll::UntypedStorage<4, 4>   mUnk28c474;
    ::ll::UntypedStorage<4, 4>   mUnk9b0c55;
    ::ll::UntypedStorage<4, 4>   mUnkc31a68;
    ::ll::UntypedStorage<1, 1>   mUnkb37ac0;
    ::ll::UntypedStorage<4, 4>   mUnkf59a3c;
    ::ll::UntypedStorage<8, 104> mUnk1d88d5;
    ::ll::UntypedStorage<4, 4>   mUnkc9d234;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkDefinition(WorkDefinition const&);
    WorkDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorkDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WorkDefinition& operator=(::WorkDefinition const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
