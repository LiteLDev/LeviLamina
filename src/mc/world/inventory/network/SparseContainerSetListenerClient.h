#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ISparseContainerSetListener.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
// clang-format on

class SparseContainerSetListenerClient : public ::ISparseContainerSetListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk59b3d6;
    // NOLINTEND

public:
    // prevent constructor by default
    SparseContainerSetListenerClient& operator=(SparseContainerSetListenerClient const&);
    SparseContainerSetListenerClient(SparseContainerSetListenerClient const&);
    SparseContainerSetListenerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SparseContainerSetListenerClient() /*override*/;

    // vIndex: 1
    virtual void preSetItem(::Container*, int, bool, ::ItemStack*) /*override*/;

    // vIndex: 2
    virtual bool postSetItem(::Container*, ::ItemStack&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $preSetItem(::Container*, int, bool, ::ItemStack*);

    MCAPI bool $postSetItem(::Container*, ::ItemStack&);
    // NOLINTEND
};
