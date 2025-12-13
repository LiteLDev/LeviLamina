#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
struct FullContainerName;
// clang-format on

class StorageItemContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StorageItemComponent const*>            mStorageItemComponent;
    ::ll::TypedStorage<8, 8, ::StorageWeightLimitItemComponent const*> mStorageWeightLimitComponent;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Container>>            mContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~StorageItemContainerModel() /*override*/ = default;

    // vIndex: 2
    virtual void postInit() /*override*/;

    // vIndex: 0
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 14
    virtual bool isValid() /*override*/;

    // vIndex: 7
    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    // vIndex: 23
    virtual int _getContainerOffset() const /*override*/;

    // vIndex: 25
    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;

    // vIndex: 22
    virtual ::Container* _getContainer() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageItemContainerModel(
        ::FullContainerName const&         name,
        ::std::shared_ptr<::Container>     container,
        bool                               isClientSide,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );

    MCAPI void _refreshSlot(int modelSlot);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::FullContainerName const&         name,
        ::std::shared_ptr<::Container>     container,
        bool                               isClientSide,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $postInit();

    MCAPI void $containerContentChanged(int slot);

    MCFOLD bool $isValid();

    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCFOLD int $_getContainerOffset() const;

    MCFOLD void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI ::Container* $_getContainer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
