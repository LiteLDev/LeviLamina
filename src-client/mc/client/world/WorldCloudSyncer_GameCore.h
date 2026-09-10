#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldCloudSyncer.h"
#include "mc/client/world/WorldCloudSyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CloudSaveSystemWrapper;
class ILevelListCache;
class IMinecraftEventing;
namespace Core { class FilePathManager; }
namespace Core { struct ContainerSyncState; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class WorldCloudSyncer_GameCore : public ::World::IWorldCloudSyncer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                   mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                mEventing;
    ::ll::TypedStorage<8, 8, ::CloudSaveSystemWrapper&>                            mCloudSaveSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FilePathManager>> mFilePathManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCloudSyncer_GameCore& operator=(WorldCloudSyncer_GameCore const&);
    WorldCloudSyncer_GameCore(WorldCloudSyncer_GameCore const&);
    WorldCloudSyncer_GameCore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCloudSyncer_GameCore() /*override*/ = default;

    virtual void syncWorld(
        ::World::WorldID const&                                     id,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) /*override*/;

    virtual ::Core::ContainerSyncState getSyncState(::World::WorldID const& id) const /*override*/;

    virtual ::std::optional<uint64> getConsumedRemoteStorageQuota(::World::WorldID const& id) const /*override*/;

    virtual void setLocalOnly(
        ::World::WorldID const&                                     id,
        bool                                                        forceLocalOnly,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) /*override*/;

    virtual void setCloudSaved(
        ::World::WorldID const&                                     id,
        bool                                                        isRetry,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isSharedFolderWorld(::World::WorldID const& id) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $syncWorld(::World::WorldID const& id, ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete);

    MCAPI ::Core::ContainerSyncState $getSyncState(::World::WorldID const& id) const;

    MCAPI ::std::optional<uint64> $getConsumedRemoteStorageQuota(::World::WorldID const& id) const;

    MCAPI void $setLocalOnly(
        ::World::WorldID const&                                     id,
        bool                                                        forceLocalOnly,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    );

    MCAPI void $setCloudSaved(
        ::World::WorldID const&                                     id,
        bool                                                        isRetry,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
