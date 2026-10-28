#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
struct FullContainerName;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class StorageItemContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StorageItemComponent const*>            mStorageItemComponent;
    ::ll::TypedStorage<8, 8, ::StorageWeightLimitItemComponent const*> mStorageWeightLimitComponent;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Container>>            mContainer;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(int, ::ItemStack const&, ::ItemStack const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mContainerChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageItemContainerModel() /*override*/ = default;

    virtual void postInit() /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual bool isValid() /*override*/;

    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    virtual int _getContainerOffset() const /*override*/;

    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;

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

    MCAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI ::Container* $_getContainer() const;


    // NOLINTEND
};
