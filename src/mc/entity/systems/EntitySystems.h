#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

class EntitySystems {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSYSTEMS
public:
    EntitySystems& operator=(EntitySystems const&) = delete;
    EntitySystems(EntitySystems const&)            = delete;
    EntitySystems()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYSYSTEMS
    /**
     * @symbol
     * ?registerTickingSystem\@EntitySystems\@\@UEAAXV?$span\@$$CBV?$typeid_t\@USystemCategory\@\@\@Bedrock\@\@$0?0\@gsl\@\@V?$unique_ptr\@VITickingSystem\@\@U?$default_delete\@VITickingSystem\@\@\@std\@\@\@std\@\@AEBUSystemInfo\@\@UEntitySystemTickingMode\@\@\@Z
     */
    MCVAPI void registerTickingSystem(
        class gsl::span<class Bedrock::typeid_t<struct SystemCategory> const, -1>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );
    /**
     * @symbol ?tickMovementCatchup\@EntitySystems\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCVAPI void tickMovementCatchup(class EntityRegistry&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntitySystems();
#endif
    /**
     * @symbol
     * ??0EntitySystems\@\@QEAA\@V?$unique_ptr\@UIEntitySystemsCollection\@\@U?$default_delete\@UIEntitySystemsCollection\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI EntitySystems(std::unique_ptr<struct IEntitySystemsCollection>, std::string);
    /**
     * @symbol ??0EntitySystems\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EntitySystems(std::string);
    /**
     * @symbol ?getPlayerInteractionSystem\@EntitySystems\@\@QEAAAEAVPlayerInteractionSystem\@\@XZ
     */
    MCAPI class PlayerInteractionSystem& getPlayerInteractionSystem();
    /**
     * @symbol ?registerEditorOnlyTickingSystem\@EntitySystems\@\@QEAAX$$QEAUTickingSystemWithInfo\@\@\@Z
     */
    MCAPI void registerEditorOnlyTickingSystem(struct TickingSystemWithInfo&&);
    /**
     * @symbol ?registerEvents\@EntitySystems\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void registerEvents(class EntityRegistry&);
    /**
     * @symbol ?registerGameOnlyTickingSystem\@EntitySystems\@\@QEAAX$$QEAUTickingSystemWithInfo\@\@\@Z
     */
    MCAPI void registerGameOnlyTickingSystem(struct TickingSystemWithInfo&&);
    /**
     * @symbol ?registerMovementTickingSystem\@EntitySystems\@\@QEAAX$$QEAUTickingSystemWithInfo\@\@\@Z
     */
    MCAPI void registerMovementTickingSystem(struct TickingSystemWithInfo&&);
    /**
     * @symbol ?registerTickingSystem\@EntitySystems\@\@QEAAX$$QEAUTickingSystemWithInfo\@\@\@Z
     */
    MCAPI void registerTickingSystem(struct TickingSystemWithInfo&&);
    /**
     * @symbol ?tick\@EntitySystems\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void tick(class EntityRegistry&);
    /**
     * @symbol ?tickEditor\@EntitySystems\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void tickEditor(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_hasSingleTickCategory\@EntitySystems\@\@AEBA_NV?$typeid_t\@USystemCategory\@\@\@Bedrock\@\@\@Z
     */
    MCAPI bool _hasSingleTickCategory(class Bedrock::typeid_t<struct SystemCategory>) const;
    /**
     * @symbol
     * ?_singleTickCategory\@EntitySystems\@\@AEAAXV?$typeid_t\@USystemCategory\@\@\@Bedrock\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI void _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory>, class EntityContext&);

private:
};
