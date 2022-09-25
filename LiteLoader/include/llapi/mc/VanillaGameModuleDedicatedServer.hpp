/**
 * @file  VanillaGameModuleDedicatedServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaGameModuleDedicatedServer.
 *
 */
class VanillaGameModuleDedicatedServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULEDEDICATEDSERVER
public:
    class VanillaGameModuleDedicatedServer& operator=(class VanillaGameModuleDedicatedServer const &) = delete;
    VanillaGameModuleDedicatedServer(class VanillaGameModuleDedicatedServer const &) = delete;
    VanillaGameModuleDedicatedServer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~VanillaGameModuleDedicatedServer();
    /**
     * @hash   687466622
     * @vftbl  1
     * @symbol ?createGameModuleServer@VanillaGameModuleDedicatedServer@@UEAA?AV?$unique_ptr@VGameModuleServer@@U?$default_delete@VGameModuleServer@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();
    /**
     * @hash   2072300667
     * @vftbl  2
     * @symbol ?createInPackagePacks@VanillaGameModuleDedicatedServer@@UEAA?AV?$shared_ptr@VIInPackagePacks@@@std@@XZ
     */
    virtual class std::shared_ptr<class IInPackagePacks> createInPackagePacks();
    /**
     * @hash   308546897
     * @vftbl  3
     * @symbol ?registerMolangQueries@VanillaGameModuleDedicatedServer@@UEAAXXZ
     */
    virtual void registerMolangQueries();
    /**
     * @hash   846214089
     * @vftbl  4
     * @symbol ?registerServerInstanceHandler@VanillaGameModuleDedicatedServer@@UEAAXAEAVServerInstanceEventCoordinator@@@Z
     */
    virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator &);

};