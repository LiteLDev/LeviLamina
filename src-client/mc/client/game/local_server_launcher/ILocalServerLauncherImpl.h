#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace LocalServerLauncher { struct GameDependencies; }
namespace LocalServerLauncher { struct IGameInterface; }
namespace LocalServerLauncher { struct IServerInstanceBuilder; }
namespace LocalServerLauncher { struct ServerInitData; }
namespace LocalServerLauncher { struct ServerLaunchResult; }
// clang-format on

namespace LocalServerLauncher {

class ILocalServerLauncherImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILocalServerLauncherImpl() = default;

    virtual ::std::unique_ptr<::LocalServerLauncher::IGameInterface> createGameInterface() = 0;

    virtual ::std::unique_ptr<::LocalServerLauncher::IServerInstanceBuilder> createServerBuilder() = 0;

    virtual ::std::unique_ptr<::LocalServerLauncher::GameDependencies> createGameDependencies() = 0;

    virtual void completeServerStartup(
        ::std::shared_ptr<::LocalServerLauncher::ServerInitData>,
        ::LocalServerLauncher::ServerLaunchResult&&
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace LocalServerLauncher
