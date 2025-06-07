#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
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
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex>> mContainerContextMutex;
    ::ll::TypedStorage<4, 4, int>                                                          mWeightInStorageItem;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    LockingFillingContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 49
    virtual int clearInventory(int resizeTo) /*override*/;

    // vIndex: 45
    virtual void swapSlots(int from, int to) /*override*/;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    // vIndex: 50
    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 52
    virtual void
    _trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset) /*override*/;

    // vIndex: 0
    virtual ~LockingFillingContainer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LockingFillingContainer(
        int                                                         numTotalSlots,
        ::SharedTypes::Legacy::ContainerType                        containerType,
        ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex> serializationMutex,
        bool                                                        isClientSide
    );

    MCNAPI int getWeightInStorageItem() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        int                                                         numTotalSlots,
        ::SharedTypes::Legacy::ContainerType                        containerType,
        ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex> serializationMutex,
        bool                                                        isClientSide
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $clearInventory(int resizeTo);

    MCNAPI void $swapSlots(int from, int to);

    MCNAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCNAPI ::std::unique_ptr<::ListTag> $saveToTag(::SaveContext const& saveContext) const;

    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI void $_trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
