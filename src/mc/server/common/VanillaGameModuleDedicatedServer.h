#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaGameModuleDedicatedServer {
public:
    // prevent constructor by default
    VanillaGameModuleDedicatedServer& operator=(VanillaGameModuleDedicatedServer const&);
    VanillaGameModuleDedicatedServer(VanillaGameModuleDedicatedServer const&);
    VanillaGameModuleDedicatedServer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~VanillaGameModuleDedicatedServer();

    // vIndex: 1, symbol:
    // ?createGameModuleServer@VanillaGameModuleDedicatedServer@@UEAA?AV?$unique_ptr@VGameModuleServer@@U?$default_delete@VGameModuleServer@@@std@@@std@@XZ
    virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();

    // vIndex: 2, symbol:
    // ?createInPackagePacks@VanillaGameModuleDedicatedServer@@UEAA?AV?$shared_ptr@VIInPackagePacks@@@std@@XZ
    virtual std::shared_ptr<class IInPackagePacks> createInPackagePacks();

    // vIndex: 3, symbol: ?registerMolangQueries@VanillaGameModuleDedicatedServer@@UEAAXXZ
    virtual void registerMolangQueries();

    // vIndex: 4, symbol:
    // ?registerServerInstanceHandler@VanillaGameModuleDedicatedServer@@UEAAXAEAVServerInstanceEventCoordinator@@@Z
    virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator&);

    // NOLINTEND
};
