#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4a15a7;
    ::ll::UntypedStorage<8, 16> mUnk4a26a4;
    ::ll::UntypedStorage<8, 8>  mUnk6ebe2a;
    ::ll::UntypedStorage<8, 8>  mUnk29cd9b;
    ::ll::UntypedStorage<8, 8>  mUnkc05c61;
    ::ll::UntypedStorage<4, 4>  mUnk99df5c;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorNode& operator=(BehaviorNode const&);
    BehaviorNode(BehaviorNode const&);
    BehaviorNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BehaviorNode();

    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) = 0;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
