#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
// clang-format on

class ClientScratchContainer : public ::SimpleContainer {
public:
    // prevent constructor by default
    ClientScratchContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual ~ClientScratchContainer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit ClientScratchContainer(::Container const& backingContainer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Container const& backingContainer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
