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
    // vIndex: 0, symbol: __gen_??1VanillaGameModuleDedicatedServer@@UEAA@XZ
    virtual ~VanillaGameModuleDedicatedServer() = default;

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
