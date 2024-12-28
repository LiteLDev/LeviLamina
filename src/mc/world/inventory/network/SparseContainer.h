#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class SparseContainer : public ::Container, public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkfc8c12;
    ::ll::UntypedStorage<8, 8>  mUnk326db3;
    ::ll::UntypedStorage<8, 64> mUnk21a7b6;
    ::ll::UntypedStorage<8, 8>  mUnke393da;
    ::ll::UntypedStorage<8, 8>  mUnk396104;
    ::ll::UntypedStorage<8, 64> mUnkd3ef8f;
    ::ll::UntypedStorage<8, 64> mUnkdb90f7;
    ::ll::UntypedStorage<8, 64> mUnk7940ec;
    ::ll::UntypedStorage<8, 64> mUnk1c5250;
    ::ll::UntypedStorage<8, 64> mUnk844bcd;
    ::ll::UntypedStorage<8, 64> mUnkaccc54;
    ::ll::UntypedStorage<8, 64> mUnkd59f21;
    ::ll::UntypedStorage<1, 1>  mUnk199304;
    ::ll::UntypedStorage<1, 1>  mUnk835af1;
    // NOLINTEND

public:
    // prevent constructor by default
    SparseContainer& operator=(SparseContainer const&);
    SparseContainer(SparseContainer const&);
    SparseContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SparseContainer() /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 0
    virtual void containerContentChanged(int) /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player&) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 14
    virtual void removeItem(int slot, int count) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onItemNetworkChanged(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI void addItemNetworkChangedCallback(
        ::ContainerEnumName                                                name,
        ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> itemNetworkChangedCallback
    );

    MCAPI bool isUsingLegacyScreenTransactions() const;

    MCAPI void removeItemNetworkChangedCallback(::ContainerEnumName name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI int $getContainerSize() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI void $containerContentChanged(int);

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI void $startOpen(::Player&);

    MCAPI void $stopOpen(::Player& player);

    MCAPI void $removeItem(int slot, int count);
    // NOLINTEND
};
