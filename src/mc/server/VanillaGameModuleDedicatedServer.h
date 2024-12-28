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
    // prevent constructor by default
    VanillaGameModuleDedicatedServer& operator=(VanillaGameModuleDedicatedServer const&);
    VanillaGameModuleDedicatedServer(VanillaGameModuleDedicatedServer const&);
    VanillaGameModuleDedicatedServer();

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
    virtual void registerServerInstanceHandler(::ServerInstanceEventCoordinator& serverInstanceCoordinator
    ) /*override*/;

    // vIndex: 0
    virtual ~VanillaGameModuleDedicatedServer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::GameModuleServer> $createGameModuleServer();

    MCAPI ::std::shared_ptr<::IInPackagePacks> $createInPackagePacks();

    MCAPI void $registerMolangQueries();

    MCAPI void $registerServerInstanceHandler(::ServerInstanceEventCoordinator& serverInstanceCoordinator);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
