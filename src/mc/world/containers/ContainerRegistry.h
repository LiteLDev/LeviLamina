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
    // vIndex: 2
    virtual ~ContainerRegistry() /*override*/ = default;

    // vIndex: 0
    virtual ::std::unique_ptr<::ListTag>
    serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext) /*override*/;

    // vIndex: 1
    virtual ::std::optional<int> getDynamicContainerWeight(::FullContainerName const& name) /*override*/;

    // vIndex: 0
    virtual ::std::shared_ptr<::StorageItemContainerModel> getModel(::FullContainerName const& name) /*override*/;

    // vIndex: 1
    virtual ::std::shared_ptr<::FillingContainer> getBackingContainer(::FullContainerName const& name) /*override*/;

    // vIndex: 2
    virtual void tryCreateEntry(
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent,
        ::FullContainerName const&         name
    ) /*override*/;

    // vIndex: 0
    virtual ::std::unique_ptr<::DynamicContainerManager> createContainerManager(
        ::FullContainerName const&         id,
        ::ItemStack const&                 storageItem,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    ) /*override*/;

    // vIndex: 1
    virtual uint generateNewID() /*override*/;

    // vIndex: 2
    virtual void tryLoadSavedStorageItem(::ListTag const& contentData, ::FullContainerName const& name) /*override*/;

    // vIndex: 3
    virtual void setExpired(::std::vector<::FullContainerName> const& removedContainers) /*override*/;

    // vIndex: 4
    virtual uint64 getSize() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContainerRegistry(bool isClientSide);

    MCNAPI ::DynamicTrackedContainer& _getOrCreate(
        ::FullContainerName const&         id,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );

    MCNAPI void _serverCleanUp(::std::function<void(::Packet&)> broadcastPacketFunction);

    MCNAPI void tick(::std::function<void(::Packet&)> broadcastPacketFunction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void sendCleanupPackets(
        ::std::function<void(::Packet&)> const&   broadcastPacketFunction,
        ::std::vector<::FullContainerName> const& removedContainers
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool isClientSide);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::ListTag>
    $serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext);

    MCNAPI ::std::optional<int> $getDynamicContainerWeight(::FullContainerName const& name);

    MCNAPI ::std::shared_ptr<::StorageItemContainerModel> $getModel(::FullContainerName const& name);

    MCNAPI ::std::shared_ptr<::FillingContainer> $getBackingContainer(::FullContainerName const& name);

    MCNAPI void $tryCreateEntry(
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent,
        ::FullContainerName const&         name
    );

    MCNAPI ::std::unique_ptr<::DynamicContainerManager> $createContainerManager(
        ::FullContainerName const&         id,
        ::ItemStack const&                 storageItem,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );

    MCNAPI uint $generateNewID();

    MCNAPI void $tryLoadSavedStorageItem(::ListTag const& contentData, ::FullContainerName const& name);

    MCNAPI void $setExpired(::std::vector<::FullContainerName> const& removedContainers);

    MCNAPI uint64 $getSize();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDynamicContainerSerialization();

    MCNAPI static void** $vftableForIContainerRegistryTracker();

    MCNAPI static void** $vftableForIContainerRegistryAccess();
    // NOLINTEND
};
