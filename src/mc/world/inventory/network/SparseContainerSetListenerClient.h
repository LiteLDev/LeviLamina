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
    virtual ~SparseContainerSetListenerClient() /*override*/ = default;

    virtual void preSetItem(::Container* container, int slot, bool isEmptyItem, ::ItemStack* item) /*override*/;

    virtual bool postSetItem(::Container* container, ::ItemStack& item) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $preSetItem(::Container* container, int slot, bool isEmptyItem, ::ItemStack* item);

    MCNAPI bool $postSetItem(::Container* container, ::ItemStack& item);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
