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
    ::ll::UntypedStorage<4, 4> mUnk2f4b05;
    ::ll::UntypedStorage<4, 4> mUnk87d639;
    ::ll::UntypedStorage<4, 4> mUnk625bd8;
    ::ll::UntypedStorage<8, 8> mUnk3f5d70;
    // NOLINTEND

public:
    // prevent constructor by default
    HungerAttributeDelegate& operator=(HungerAttributeDelegate const&);
    HungerAttributeDelegate(HungerAttributeDelegate const&);
    HungerAttributeDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void tick() /*override*/;

    // vIndex: 2
    virtual void notify(int64 type) /*override*/;

    // vIndex: 0
    virtual ~HungerAttributeDelegate() /*override*/;
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
    MCAPI void $dtor();
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
