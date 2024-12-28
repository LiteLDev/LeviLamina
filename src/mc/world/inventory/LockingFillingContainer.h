#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerType.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ListTag;
class SaveContext;
namespace Bedrock::Threading { class SharedRecursiveMutex; }
// clang-format on

class LockingFillingContainer : public ::FillingContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdb4d71;
    ::ll::UntypedStorage<4, 4>  mUnk48d385;
    ::ll::UntypedStorage<1, 1>  mUnk58680d;
    // NOLINTEND

public:
    // prevent constructor by default
    LockingFillingContainer& operator=(LockingFillingContainer const&);
    LockingFillingContainer(LockingFillingContainer const&);
    LockingFillingContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 46
    virtual int clearInventory(int resizeTo) /*override*/;

    // vIndex: 42
    virtual void swapSlots(int from, int to) /*override*/;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    // vIndex: 47
    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 0
    virtual ~LockingFillingContainer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LockingFillingContainer(
        int                                                         numTotalSlots,
        ::ContainerType                                             containerType,
        ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex> serializationMutex,
        bool                                                        isClientSide
    );

    MCAPI int getWeightInStorageItem() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int                                                         numTotalSlots,
        ::ContainerType                                             containerType,
        ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex> serializationMutex,
        bool                                                        isClientSide
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
    MCAPI int $clearInventory(int resizeTo);

    MCAPI void $swapSlots(int from, int to);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI ::std::unique_ptr<::ListTag> $saveToTag(::SaveContext const& saveContext) const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
