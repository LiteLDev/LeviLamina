#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldCloudSyncer.h"
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class IMinecraftEventing;
struct CloudSaveSystemWrapper;
namespace World { struct WorldID; }
// clang-format on

namespace World {

class WorldCloudSyncer_GameCore : public ::World::IWorldCloudSyncer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>        mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>     mEventing;
    ::ll::TypedStorage<8, 8, ::CloudSaveSystemWrapper&> mCloudSaveSystem;
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

    virtual void
    syncWorld(::World::WorldID const&, ::std::function<void(::World::WorldCloudSyncResult)> const&) /*override*/;

    virtual void syncWorldManifest(
        ::World::WorldID const&,
        ::std::function<void(::World::WorldCloudSyncResult)> const&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
