#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/module/IGameModuleShared.h"

class VanillaGameModuleDedicatedServer : public ::IGameModuleShared {
public:
    // prevent constructor by default
    VanillaGameModuleDedicatedServer& operator=(VanillaGameModuleDedicatedServer const&);
    VanillaGameModuleDedicatedServer(VanillaGameModuleDedicatedServer const&);
    VanillaGameModuleDedicatedServer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaGameModuleDedicatedServer() = default;

    // vIndex: 1
    virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();

    // vIndex: 2
    virtual std::shared_ptr<class IInPackagePacks> createInPackagePacks();

    // vIndex: 3
    virtual void registerMolangQueries();

    // vIndex: 4
    virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator& serverInstanceCoordinator);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::unique_ptr<class GameModuleServer> createGameModuleServer$();

    MCAPI std::shared_ptr<class IInPackagePacks> createInPackagePacks$();

    MCAPI void registerMolangQueries$();

    MCAPI void registerServerInstanceHandler$(class ServerInstanceEventCoordinator& serverInstanceCoordinator);

    // NOLINTEND
};
