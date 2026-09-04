#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldCloudSyncer.h"
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { struct ContainerSyncState; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class WorldCloudSyncer : public ::World::IWorldCloudSyncer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCloudSyncer() /*override*/ = default;

    virtual void syncWorld(
        ::World::WorldID const&,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) /*override*/;

    virtual ::Core::ContainerSyncState getSyncState(::World::WorldID const&) const /*override*/;

    virtual ::std::optional<uint64> getConsumedRemoteStorageQuota(::World::WorldID const&) const /*override*/;

    virtual void setLocalOnly(
        ::World::WorldID const&,
        bool,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) /*override*/;

    virtual void setCloudSaved(
        ::World::WorldID const&,
        bool,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $syncWorld(::World::WorldID const&, ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete);

    MCFOLD ::Core::ContainerSyncState $getSyncState(::World::WorldID const&) const;

    MCFOLD ::std::optional<uint64> $getConsumedRemoteStorageQuota(::World::WorldID const&) const;

    MCAPI void $setLocalOnly(
        ::World::WorldID const&,
        bool,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    );

    MCAPI void $setCloudSaved(
        ::World::WorldID const&,
        bool,
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
