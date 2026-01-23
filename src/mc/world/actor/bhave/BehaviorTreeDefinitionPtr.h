#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AutomationBehaviorTreeGroup;
class BehaviorTreeDefinition;
// clang-format on

class BehaviorTreeDefinitionPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AutomationBehaviorTreeGroup*> mGroup;
    ::ll::TypedStorage<8, 8, ::BehaviorTreeDefinition*>      mPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _deref();

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
