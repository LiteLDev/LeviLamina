/**
 * @file  MC/EntitySystems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntitySystems.
 *
 */
class EntitySystems {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSYSTEMS
public:
    class EntitySystems& operator=(class EntitySystems const &) = delete;
    EntitySystems(class EntitySystems const &) = delete;
    EntitySystems() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYSYSTEMS
    /**
     * @hash   583372731
     * @symbol ?registerTickingSystem@EntitySystems@@UEAAXV?$span@$$CBV?$typeid_t@USystemCategory@@@@$0?0@gsl@@V?$unique_ptr@VITickingSystem@@U?$default_delete@VITickingSystem@@@std@@@std@@AEBUSystemInfo@@@Z
     */
    MCVAPI void registerTickingSystem(class gsl::span<class typeid_t<struct SystemCategory> const, -1>, std::unique_ptr<class ITickingSystem>, struct SystemInfo const &);
    /**
     * @hash   -778640668
     * @symbol ?tickMovementCatchup@EntitySystems@@UEAAXAEAVEntityRegistry@@@Z
     */
    MCVAPI void tickMovementCatchup(class EntityRegistry &);
    /**
     * @hash   -1228431832
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntitySystems();
#endif
    /**
     * @hash   860202014
     * @symbol ??0EntitySystems@@QEAA@V?$unique_ptr@UIEntitySystemsCollection@@U?$default_delete@UIEntitySystemsCollection@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
     */
    MCAPI EntitySystems(std::unique_ptr<struct IEntitySystemsCollection>, std::string);
    /**
     * @hash   -983897274
     * @symbol ??0EntitySystems@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI EntitySystems(std::string);
    /**
     * @hash   58280122
     * @symbol ?getPlayerInteractionSystem@EntitySystems@@QEAAAEAVPlayerInteractionSystem@@XZ
     */
    MCAPI class PlayerInteractionSystem & getPlayerInteractionSystem();
    /**
     * @hash   1202177622
     * @symbol ?registerEditorOnlyTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
     */
    MCAPI void registerEditorOnlyTickingSystem(struct TickingSystemWithInfo &&);
    /**
     * @hash   -1285711796
     * @symbol ?registerEvents@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
     */
    MCAPI void registerEvents(class EntityRegistry &);
    /**
     * @hash   1477988736
     * @symbol ?registerGameOnlyTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
     */
    MCAPI void registerGameOnlyTickingSystem(struct TickingSystemWithInfo &&);
    /**
     * @hash   -913268718
     * @symbol ?registerMovementTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
     */
    MCAPI void registerMovementTickingSystem(struct TickingSystemWithInfo &&);
    /**
     * @hash   428755969
     * @symbol ?registerSystem@EntitySystems@@QEAAXV?$unique_ptr@UISystem@@U?$default_delete@UISystem@@@std@@@std@@AEBUSystemInfo@@@Z
     */
    MCAPI void registerSystem(std::unique_ptr<struct ISystem>, struct SystemInfo const &);
    /**
     * @hash   304855892
     * @symbol ?registerTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
     */
    MCAPI void registerTickingSystem(struct TickingSystemWithInfo &&);
    /**
     * @hash   -1729902340
     * @symbol ?tick@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
     */
    MCAPI void tick(class EntityRegistry &);
    /**
     * @hash   106868604
     * @symbol ?tickEditor@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
     */
    MCAPI void tickEditor(class EntityRegistry &);

};