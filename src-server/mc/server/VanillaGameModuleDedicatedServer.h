#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/module/IGameModuleShared.h"

// auto generated forward declare list
// clang-format off
class GameModuleServer;
class IInPackagePacks;
class ServerInstanceEventCoordinator;
// clang-format on

class VanillaGameModuleDedicatedServer : public ::IGameModuleShared {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::GameModuleServer> createGameModuleServer() /*override*/;

    virtual ::std::shared_ptr<::IInPackagePacks> createInPackagePacks() /*override*/;

    virtual void registerMolangQueries() /*override*/;

    virtual void registerServerInstanceHandler(::ServerInstanceEventCoordinator&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
