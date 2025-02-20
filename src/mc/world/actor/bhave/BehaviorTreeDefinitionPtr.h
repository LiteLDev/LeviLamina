#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinitionPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk51d3a5;
    ::ll::UntypedStorage<8, 8> mUnk7b4b36;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorTreeDefinitionPtr& operator=(BehaviorTreeDefinitionPtr const&);
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr const&);
    BehaviorTreeDefinitionPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BehaviorTreeDefinitionPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BehaviorTreeDefinitionPtr const& NONE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
