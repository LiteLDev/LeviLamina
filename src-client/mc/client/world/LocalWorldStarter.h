#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/StartLocalWorldResult.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class IGameServerStartup;
class ILevelListCache;
namespace Core { class FileSystem; }
namespace World { class IWorldStorageHandler; }
namespace World { struct RecentlyPlayedPendingTargetData; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class LocalWorldStarter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>          mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>             mLevelListCache;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&> mWorldStorageHandler;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>       mHasValidCrossPlatformSkin;
    ::ll::TypedStorage<8, 8, ::Core::FileSystem&>            mFileSystem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::World::RecentlyPlayedPendingTargetData)>>
                                                                              mPrepareRecentlyPlayedTarget;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>              mServerStartupResult;
    ::ll::TypedStorage<4, 8, ::std::optional<::World::StartLocalWorldResult>> mStartLocalWorldErrorOverride;
    ::ll::TypedStorage<1, 2, ::std::optional<::World::IWorldStorageHandler::DuplicateWorldResult>>
        mBackupLocalWorldErrorOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldStarter& operator=(LocalWorldStarter const&);
    LocalWorldStarter(LocalWorldStarter const&);
    LocalWorldStarter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldStarter(
        ::IGameServerStartup&                                           gameServerStartup,
        ::ILevelListCache&                                              levelListCache,
        ::World::IWorldStorageHandler&                                  worldStorageHandler,
        ::std::function<bool()>                                         hasValidCrossPlatformSkin,
        ::Core::FileSystem&                                             fileSystem,
        ::std::function<void(::World::RecentlyPlayedPendingTargetData)> prepareRecentlyPlayedTarget
    );

    MCAPI void backupThenStartLocalWorld(
        ::World::WorldID const& worldID,
        ::std::function<
            void(::World::IWorldStorageHandler::DuplicateWorldResult, ::std::optional<::World::StartLocalWorldResult>)>
            onComplete
    );

    MCAPI void setConfirmedPlatformLockedContentForWorld(::World::WorldID const& worldID);

    MCAPI ::World::StartLocalWorldResult startLocalWorld(::World::WorldID const& worldID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IGameServerStartup&                                           gameServerStartup,
        ::ILevelListCache&                                              levelListCache,
        ::World::IWorldStorageHandler&                                  worldStorageHandler,
        ::std::function<bool()>                                         hasValidCrossPlatformSkin,
        ::Core::FileSystem&                                             fileSystem,
        ::std::function<void(::World::RecentlyPlayedPendingTargetData)> prepareRecentlyPlayedTarget
    );
    // NOLINTEND
};

} // namespace World
