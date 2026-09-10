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

    virtual void
    syncWorld(::World::WorldID const&, ::std::function<void(::World::WorldCloudSyncResult)> const&) /*override*/;

    virtual ::Core::ContainerSyncState getSyncState(::World::WorldID const&) const /*override*/;

    virtual ::std::optional<uint64> getConsumedRemoteStorageQuota(::World::WorldID const&) const /*override*/;

    virtual void setLocalOnly(
        ::World::WorldID const&,
        bool,
        ::std::function<void(::World::WorldCloudSyncResult)> const&
    ) /*override*/;

    virtual void setCloudSaved(
        ::World::WorldID const&,
        bool,
        ::std::function<void(::World::WorldCloudSyncResult)> const&
    ) /*override*/;
    // NOLINTEND
};

} // namespace World
