#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class Player;
// clang-format on

class HungerAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>       mActionTickTimer;
    ::ll::TypedStorage<4, 4, int>       mTickCounter;
    ::ll::TypedStorage<4, 4, float>     mLastFoodLevel;
    ::ll::TypedStorage<8, 8, ::Player*> mPlayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void tick() /*override*/;

    // vIndex: 2
    virtual void notify(int64 type) /*override*/;

    // vIndex: 0
    virtual ~HungerAttributeDelegate() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HungerAttributeDelegate(::AttributeInstance const& attribute, ::Player* player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AttributeInstance const& attribute, ::Player* player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick();

    MCAPI void $notify(int64 type);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
