#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/module/IGameModuleShared.h"

class VanillaGameModuleDedicatedServer : public ::IGameModuleShared {

public:
    // prevent constructor by default
    VanillaGameModuleDedicatedServer& operator=(VanillaGameModuleDedicatedServer const&) = delete;
    VanillaGameModuleDedicatedServer(VanillaGameModuleDedicatedServer const&)            = delete;
    VanillaGameModuleDedicatedServer()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?createGameModuleServer\@VanillaGameModuleDedicatedServer\@\@UEAA?AV?$unique_ptr\@VGameModuleServer\@\@U?$default_delete\@VGameModuleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();
    /**
     * @vftbl 2
     * @symbol
     * ?createInPackagePacks\@VanillaGameModuleDedicatedServer\@\@UEAA?AV?$shared_ptr\@VIInPackagePacks\@\@\@std\@\@XZ
     */
    virtual std::shared_ptr<class IInPackagePacks> createInPackagePacks();
    /**
     * @vftbl 3
     * @symbol ?registerMolangQueries\@VanillaGameModuleDedicatedServer\@\@UEAAXXZ
     */
    virtual void registerMolangQueries();
    /**
     * @vftbl 4
     * @symbol
     * ?registerServerInstanceHandler\@VanillaGameModuleDedicatedServer\@\@UEAAXAEAVServerInstanceEventCoordinator\@\@\@Z
     */
    virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator&);
    // NOLINTEND
};
