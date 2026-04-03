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
namespace World { class IWorldStorageHandler; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class LocalWorldStarter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                           mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                              mLevelListCache;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&>                  mWorldStorageHandler;
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
    MCAPI void backupThenStartLocalWorld(
        ::World::WorldID const& worldID,
        ::std::function<
            void(::World::IWorldStorageHandler::DuplicateWorldResult, ::std::optional<::World::StartLocalWorldResult>)>
            onComplete
    );

    MCAPI ::World::StartLocalWorldResult startLocalWorld(::World::WorldID const& worldID);
    // NOLINTEND
};

} // namespace World
