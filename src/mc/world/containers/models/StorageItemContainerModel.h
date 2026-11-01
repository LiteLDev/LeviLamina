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
    MCNAPI StorageItemContainerModel(
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
    MCNAPI void* $ctor(
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
    MCNAPI void $postInit();

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI bool $isValid();

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI int $_getContainerOffset() const;

    MCNAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCNAPI ::Container* $_getContainer() const;


    // NOLINTEND
};
