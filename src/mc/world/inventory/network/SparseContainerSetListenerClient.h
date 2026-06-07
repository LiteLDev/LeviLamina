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

#ifdef LL_PLAT_S
    virtual void preSetItem(::Container*, int, bool, ::ItemStack*) /*override*/;
#else // LL_PLAT_C
    virtual void preSetItem(::Container* container, int slot, bool isEmptyItem, ::ItemStack* item) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool postSetItem(::Container*, ::ItemStack&) /*override*/;
#else // LL_PLAT_C
    virtual bool postSetItem(::Container* container, ::ItemStack& item) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit SparseContainerSetListenerClient(::ItemStackNetManagerClient& itemStackNetManager);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ItemStackNetManagerClient& itemStackNetManager);
#endif
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
