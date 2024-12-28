#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

// auto generated forward declare list
// clang-format off
class IPlayerContainerSetter;
class ISparseContainerSetListener;
class ItemStack;
class Player;
// clang-format on

class SimpleSparseContainer : public ::Container, public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc19c02;
    ::ll::UntypedStorage<4, 4>  mUnk8270ae;
    ::ll::UntypedStorage<8, 64> mUnkbbe490;
    ::ll::UntypedStorage<8, 8>  mUnk466ce8;
    ::ll::UntypedStorage<8, 8>  mUnk3bf502;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleSparseContainer& operator=(SimpleSparseContainer const&);
    SimpleSparseContainer(SimpleSparseContainer const&);
    SimpleSparseContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleSparseContainer() /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 0
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SimpleSparseContainer(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        ::std::unique_ptr<::ISparseContainerSetListener> sparseContainerSetListener,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );

    MCAPI void _setBackingContainerSlot(int slot, ::ItemStack const& newItem);

    MCAPI void clearItem(int slot);

    MCAPI void pushAllToBackingContainer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        ::std::unique_ptr<::ISparseContainerSetListener> sparseContainerSetListener,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );
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

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI void $startOpen(::Player& player);

    MCAPI void $stopOpen(::Player& player);

    MCAPI int $getContainerSize() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI void $containerContentChanged(int slot);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerContentChangeListener();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
