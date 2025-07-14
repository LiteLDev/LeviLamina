#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class FillingContainer;
class HashedString;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class ItemDescriptor;
class ItemStack;
class ListTag;
class Player;
class SaveContext;
class SemVersion;
struct FullContainerName;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StorageItemComponent : public ::NetworkedItemComponent<::StorageItemComponent> {
public:
    // StorageItemComponent inner types declare
    // clang-format off
    class ContainerRegistryWriteAccess;
    // clang-format on

    // StorageItemComponent inner types define
    class ContainerRegistryWriteAccess {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                          mNumSlots;
    ::ll::TypedStorage<1, 1, bool>                                         mAllowNestedStorageItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>             mBannedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>             mAllowedItems;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IDynamicContainerSerialization>> mContainerSerialization;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryAccess>>       mContainerRegistryAccess;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryTracker>>      mContainerRegistryTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemComponent& operator=(StorageItemComponent const&);
    StorageItemComponent(StorageItemComponent const&);
    StorageItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~StorageItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::FillingContainer>
    getBackingContainer(::FullContainerName id, ::StorageItemComponent::ContainerRegistryWriteAccess writeAccess) const;

    MCAPI ::StorageItemComponent& operator=(::StorageItemComponent&&);

    MCAPI ::std::unique_ptr<::ListTag>
    serializeStorageItem(::FullContainerName const& name, ::SaveContext const& saveContext) const;

    MCAPI void setContainerRegistryHandlers(
        ::WeakRef<::IDynamicContainerSerialization> containerSerialization,
        ::WeakRef<::IContainerRegistryAccess>       containerAccess,
        ::WeakRef<::IContainerRegistryTracker>      containerTracker
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();

    MCAPI static void use(bool& result, ::ItemStack const& item, ::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
