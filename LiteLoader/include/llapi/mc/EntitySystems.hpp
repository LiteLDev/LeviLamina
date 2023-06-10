/**
 * @file  EntitySystems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

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
     * @symbol ?registerSingleTickingSystem\@EntitySystems\@\@UEAAXV?$span\@$$CBV?$typeid_t\@USystemCategory\@\@\@Bedrock\@\@$0?0\@gsl\@\@V?$unique_ptr\@VITickingSystem\@\@U?$default_delete\@VITickingSystem\@\@\@std\@\@\@std\@\@AEBUSystemInfo\@\@\@Z
     */
    MCVAPI void registerSingleTickingSystem(class gsl::span<class Bedrock::typeid_t<struct SystemCategory> const, -1>, std::unique_ptr<class ITickingSystem>, struct SystemInfo const &);
    /**
     * @symbol ?registerTickingSystem\@EntitySystems\@\@UEAAXV?$span\@$$CBV?$typeid_t\@USystemCategory\@\@\@Bedrock\@\@$0?0\@gsl\@\@V?$unique_ptr\@VITickingSystem\@\@U?$default_delete\@VITickingSystem\@\@\@std\@\@\@std\@\@AEBUSystemInfo\@\@\@Z
     */
    MCVAPI void registerTickingSystem(class gsl::span<class Bedrock::typeid_t<struct SystemCategory> const, -1>, std::unique_ptr<class ITickingSystem>, struct SystemInfo const &);
    /**
     * @symbol ?tickMovementCatchup\@EntitySystems\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCVAPI void tickMovementCatchup(class EntityRegistry &);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntitySystems();
#endif
    /**
     * @symbol ??0EntitySystems\@\@QEAA\@V?$unique_ptr\@UIEntitySystemsCollection\@\@U?$default_delete\@UIEntitySystemsCollection\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI EntitySystems(std::unique_ptr<struct IEntitySystemsCollection>, std::string);
    /**
     * @symbol ??0EntitySystems\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EntitySystems(std::string);
    /**
     * @symbol ?getPlayerInteractionSystem\@EntitySystems\@\@QEAAAEAVPlayerInteractionSystem\@\@XZ
     */
    MCAPI class PlayerInteractionSystem & getPlayerInteractionSystem();
    /**
     * @symbol ?registerEditorOnlyTickingSystem\@EntitySystems\@\@QEAAX$$QEAUTickingSystemWithInfo\@\@\@Z
     */
    MCAPI void registerEditorOnlyTickingSystem(struct TickingSystemWithInfo &&);
    /**
     * @symbol ?registerEvents\@EntitySystems\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void registerEvents(class EntityRegistry &);
    /**
     * @symbol ?registerGameOnlyTickingSystem\@EntitySystems\@\@QEAAX$$QEAUTickingSystemWithInfo\@\@\@Z
     */
    MCAPI void registerGameOnlyTickingSystem(struct TickingSystemWithInfo &&);
    /**
     * @symbol ?registerMovementTickingSystem\@EntitySystems\@\@QEAAX$$QEAUTickingSystemWithInfo\@\@\@Z
     */
    MCAPI void registerMovementTickingSystem(struct TickingSystemWithInfo &&);
    /**
     * @symbol ?registerSystem\@EntitySystems\@\@QEAAXV?$unique_ptr\@UISystem\@\@U?$default_delete\@UISystem\@\@\@std\@\@\@std\@\@AEBUSystemInfo\@\@\@Z
     */
    MCAPI void registerSystem(std::unique_ptr<struct ISystem>, struct SystemInfo const &);
    /**
     * @symbol ?registerTickingSystem\@EntitySystems\@\@QEAAX$$QEAUTickingSystemWithInfo\@\@\@Z
     */
    MCAPI void registerTickingSystem(struct TickingSystemWithInfo &&);
    /**
     * @symbol ?tick\@EntitySystems\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void tick(class EntityRegistry &);
    /**
     * @symbol ?tickEditor\@EntitySystems\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void tickEditor(class EntityRegistry &);

//private:
    /**
     * @symbol ?_singleTickCategory\@EntitySystems\@\@AEAAXV?$typeid_t\@USystemCategory\@\@\@Bedrock\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI void _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory>, class EntityContext &);

private:

};
