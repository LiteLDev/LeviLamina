#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { struct ContainerSyncState; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class IWorldCloudSyncer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldCloudSyncer() = default;

    virtual void syncWorld(::World::WorldID const&, ::std::function<void(::World::WorldCloudSyncResult)> const&) = 0;

    virtual ::Core::ContainerSyncState getSyncState(::World::WorldID const&) const = 0;

    virtual ::std::optional<uint64> getConsumedRemoteStorageQuota(::World::WorldID const&) const = 0;

    virtual void
    setLocalOnly(::World::WorldID const&, bool, ::std::function<void(::World::WorldCloudSyncResult)> const&) = 0;

    virtual void
    setCloudSaved(::World::WorldID const&, bool, ::std::function<void(::World::WorldCloudSyncResult)> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
