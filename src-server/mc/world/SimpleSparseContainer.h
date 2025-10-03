#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
class ItemStack;
// clang-format on

class SimpleSparseContainer : public ::Container, public ::ContainerContentChangeListener {
public:
    // SimpleSparseContainer inner types define
    using SparseContainerData = ::std::unordered_map<int, ::ItemStack>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Container&>                                     mBackingContainer;
    ::ll::TypedStorage<4, 4, ::SparseContainerBackingSetType const>            mBackingSetType;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::ItemStack>>          mItems;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ISparseContainerSetListener>> mSparseContainerSetListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPlayerContainerSetter>>      mPlayerSetter;
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
    virtual ~SimpleSparseContainer() /*override*/ = default;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Actor& actor) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Actor& actor) /*override*/;

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
    MCNAPI SimpleSparseContainer(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        ::std::unique_ptr<::ISparseContainerSetListener> sparseContainerSetListener,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );

    MCNAPI void _setBackingContainerSlot(int slot, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        ::std::unique_ptr<::ISparseContainerSetListener> sparseContainerSetListener,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI void $startOpen(::Actor& actor);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
