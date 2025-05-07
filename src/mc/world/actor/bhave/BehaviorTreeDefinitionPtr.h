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
    MCNAPI ~BehaviorTreeDefinitionPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BehaviorTreeDefinitionPtr const& NONE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
