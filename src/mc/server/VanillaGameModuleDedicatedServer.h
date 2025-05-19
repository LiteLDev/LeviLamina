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
    // vIndex: 1
    virtual ::std::unique_ptr<::GameModuleServer> createGameModuleServer() /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::IInPackagePacks> createInPackagePacks() /*override*/;

    // vIndex: 3
    virtual void registerMolangQueries() /*override*/;

    // vIndex: 4
    virtual void
    registerServerInstanceHandler(::ServerInstanceEventCoordinator& serverInstanceCoordinator) /*override*/;

    // vIndex: 0
    virtual ~VanillaGameModuleDedicatedServer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::GameModuleServer> $createGameModuleServer();

    MCNAPI ::std::shared_ptr<::IInPackagePacks> $createInPackagePacks();

    MCNAPI void $registerMolangQueries();

    MCNAPI void $registerServerInstanceHandler(::ServerInstanceEventCoordinator& serverInstanceCoordinator);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
