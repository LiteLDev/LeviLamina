#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/IContainerRegistryAccess.h"
#include "mc/world/containers/IContainerRegistryTracker.h"
#include "mc/world/containers/IDynamicContainerSerialization.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerManager;
class FillingContainer;
class ItemStack;
class ListTag;
class Packet;
class SaveContext;
class StorageItemComponent;
class StorageItemContainerModel;
class StorageWeightLimitItemComponent;
struct DynamicTrackedContainer;
struct FullContainerName;
namespace Bedrock::Threading { class SharedRecursiveMutex; }
// clang-format on

class ContainerRegistry : public ::IDynamicContainerSerialization,
                          public ::IContainerRegistryAccess,
                          public ::IContainerRegistryTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                  mNextDynamicId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, ::DynamicTrackedContainer>> mContainers;
    ::ll::TypedStorage<1, 1, bool const>                                                            mIsClientSide;
    ::ll::TypedStorage<4, 4, int>                                                            mTicksSinceLastCleanup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::SharedRecursiveMutex>> mContainerContextMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerRegistry() /*override*/ = default;

    virtual ::std::unique_ptr<::ListTag>
    serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext) /*override*/;

    virtual ::std::optional<int> getDynamicContainerWeight(::FullContainerName const& name) /*override*/;

    virtual bool hasContainer(::FullContainerName const& name) const /*override*/;

    virtual ::std::shared_ptr<::StorageItemContainerModel> getModel(::FullContainerName const& name) /*override*/;

    virtual ::std::shared_ptr<::FillingContainer> getBackingContainer(::FullContainerName const& name) /*override*/;

    virtual void tryCreateEntry(
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent,
        ::FullContainerName const&         name
    ) /*override*/;

    virtual ::std::unique_ptr<::DynamicContainerManager> createContainerManager(
        ::FullContainerName const&         id,
        ::ItemStack const&                 storageItem,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    ) /*override*/;

    virtual uint generateNewID() /*override*/;

    virtual void tryLoadSavedStorageItem(::ListTag const& contentData, ::FullContainerName const& name) /*override*/;

    virtual void setExpired(::std::vector<::FullContainerName> const& removedContainers) /*override*/;

    virtual uint64 getSize() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ContainerRegistry(bool isClientSide);

    MCAPI ::DynamicTrackedContainer& _getOrCreate(
        ::FullContainerName const&         id,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );

    MCAPI void _serverCleanUp(::std::function<void(::Packet&)> broadcastPacketFunction);

    MCAPI void tick(::std::function<void(::Packet&)> broadcastPacketFunction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void sendCleanupPackets(
        ::std::function<void(::Packet&)> const&   broadcastPacketFunction,
        ::std::vector<::FullContainerName> const& removedContainers
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isClientSide);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ListTag>
    $serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext);

    MCAPI ::std::optional<int> $getDynamicContainerWeight(::FullContainerName const& name);

    MCAPI bool $hasContainer(::FullContainerName const& name) const;

    MCAPI ::std::shared_ptr<::StorageItemContainerModel> $getModel(::FullContainerName const& name);

    MCAPI ::std::shared_ptr<::FillingContainer> $getBackingContainer(::FullContainerName const& name);

    MCAPI void $tryCreateEntry(
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent,
        ::FullContainerName const&         name
    );

    MCAPI ::std::unique_ptr<::DynamicContainerManager> $createContainerManager(
        ::FullContainerName const&         id,
        ::ItemStack const&                 storageItem,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );

    MCAPI uint $generateNewID();

    MCAPI void $tryLoadSavedStorageItem(::ListTag const& contentData, ::FullContainerName const& name);

    MCAPI void $setExpired(::std::vector<::FullContainerName> const& removedContainers);

    MCFOLD uint64 $getSize();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIDynamicContainerSerialization();

    MCAPI static void** $vftableForIContainerRegistryTracker();

    MCAPI static void** $vftableForIContainerRegistryAccess();
    // NOLINTEND
};
