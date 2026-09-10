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

    virtual void
    syncWorld(::World::WorldID const& id, ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete) = 0;

    virtual ::Core::ContainerSyncState getSyncState(::World::WorldID const& id) const = 0;

    virtual ::std::optional<uint64> getConsumedRemoteStorageQuota(::World::WorldID const& id) const = 0;

    virtual void setLocalOnly(
        ::World::WorldID const&                                     id,
        bool                                                        forceLocalOnly,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) = 0;

    virtual void setCloudSaved(
        ::World::WorldID const&                                     id,
        bool                                                        isRetry,
        ::std::function<void(::World::WorldCloudSyncResult)> const& onComplete
    ) = 0;
    // NOLINTEND
};

} // namespace World
