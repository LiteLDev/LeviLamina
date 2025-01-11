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
struct DynamicTrackedContainer;
struct FullContainerName;
// clang-format on

class ContainerRegistry : public ::IDynamicContainerSerialization,
                          public ::IContainerRegistryAccess,
                          public ::IContainerRegistryTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8800e8;
    ::ll::UntypedStorage<8, 64> mUnk1382fd;
    ::ll::UntypedStorage<1, 1>  mUnkedb65c;
    ::ll::UntypedStorage<4, 4>  mUnk108ca9;
    ::ll::UntypedStorage<8, 16> mUnk8669df;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerRegistry& operator=(ContainerRegistry const&);
    ContainerRegistry(ContainerRegistry const&);
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
    virtual void
    tryCreateEntry(::StorageItemComponent* storageItemComponent, ::FullContainerName const& name) /*override*/;

    // vIndex: 0
    virtual ::std::unique_ptr<::DynamicContainerManager> createContainerManager(
        ::FullContainerName const& id,
        ::ItemStack const&         storageItem,
        ::StorageItemComponent*    storageItemComponent
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
    MCAPI explicit ContainerRegistry(bool isClientSide);

    MCAPI ::DynamicTrackedContainer&
    _getOrCreate(::FullContainerName const& id, ::StorageItemComponent* storageItemComponent);

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ListTag>
    $serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext);

    MCAPI ::std::optional<int> $getDynamicContainerWeight(::FullContainerName const& name);

    MCAPI ::std::shared_ptr<::StorageItemContainerModel> $getModel(::FullContainerName const& name);

    MCAPI ::std::shared_ptr<::FillingContainer> $getBackingContainer(::FullContainerName const& name);

    MCAPI void $tryCreateEntry(::StorageItemComponent* storageItemComponent, ::FullContainerName const& name);

    MCAPI ::std::unique_ptr<::DynamicContainerManager> $createContainerManager(
        ::FullContainerName const& id,
        ::ItemStack const&         storageItem,
        ::StorageItemComponent*    storageItemComponent
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
