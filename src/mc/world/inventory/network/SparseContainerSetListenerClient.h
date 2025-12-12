#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ISparseContainerSetListener.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
class ItemStackNetManagerClient;
// clang-format on

class SparseContainerSetListenerClient : public ::ISparseContainerSetListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient&> mItemStackNetManager;
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
    virtual ~SparseContainerSetListenerClient() /*override*/ = default;

    // vIndex: 1
    virtual void preSetItem(::Container*, int, bool, ::ItemStack*) /*override*/;

    // vIndex: 2
    virtual bool postSetItem(::Container*, ::ItemStack&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
