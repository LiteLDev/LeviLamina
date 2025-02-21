#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorData;
class BehaviorNode;
class BehaviorTreeDefinitionPtr;
// clang-format on

class BehaviorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::BehaviorTreeDefinitionPtr>      mTreeDefinition;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorNode>> mRoot;
    ::ll::TypedStorage<8, 88, ::BehaviorData>                   mBehaviorData;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorComponent& operator=(BehaviorComponent const&);
    BehaviorComponent(BehaviorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BehaviorComponent(::BehaviorComponent&&);

    MCAPI ~BehaviorComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BehaviorComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
