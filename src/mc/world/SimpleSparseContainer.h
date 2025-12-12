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
    virtual ~SimpleSparseContainer() /*override*/ = default;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCAPI void $startOpen(::Actor& actor);

    MCAPI void $stopOpen(::Actor& actor);

    MCAPI int $getContainerSize() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI void $containerContentChanged(int slot);

    MCFOLD void $serverInitItemStackIds(
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
