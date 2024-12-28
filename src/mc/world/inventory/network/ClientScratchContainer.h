#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

class ClientScratchContainer : public ::SimpleContainer {
public:
    // prevent constructor by default
    ClientScratchContainer& operator=(ClientScratchContainer const&);
    ClientScratchContainer(ClientScratchContainer const&);
    ClientScratchContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 0
    virtual ~ClientScratchContainer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
    // NOLINTEND
};
