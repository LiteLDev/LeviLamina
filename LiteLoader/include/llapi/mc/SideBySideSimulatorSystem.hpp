/**
 * @file  SideBySideSimulatorSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideSimulatorSystem.
 *
 */
class SideBySideSimulatorSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDESIMULATORSYSTEM
public:
    class SideBySideSimulatorSystem& operator=(class SideBySideSimulatorSystem const &) = delete;
    SideBySideSimulatorSystem(class SideBySideSimulatorSystem const &) = delete;
    SideBySideSimulatorSystem() = delete;
#endif

public:
    /**
     * @hash   -1598929553
     * @symbol  ?_clearRemappings\@SideBySideSimulatorSystem\@\@SAXV?$OptionalGlobalT\@USideBySideRemappingComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI static void _clearRemappings(class OptionalGlobalT<struct SideBySideRemappingComponent, class EntityRegistryBase>);
    /**
     * @hash   2065513040
     * @symbol  ?createBegin\@SideBySideSimulatorSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBegin();
    /**
     * @hash   -279047104
     * @symbol  ?createClearRemappingsSystem\@SideBySideSimulatorSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClearRemappingsSystem();
    /**
     * @hash   -1799424400
     * @symbol  ?createEnd\@SideBySideSimulatorSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createEnd();
    /**
     * @hash   1882685248
     * @symbol  ?createMigrator\@SideBySideSimulatorSystem\@\@SA?AUTickingSystemWithInfo\@\@W4SideBySideExtractionId\@\@AEBV?$vector\@IV?$allocator\@I\@std\@\@\@std\@\@\@Z
     */
    MCAPI static struct TickingSystemWithInfo createMigrator(enum class SideBySideExtractionId, std::vector<unsigned int> const &);
    /**
     * @hash   646110450
     * @symbol  ?createSideBySideResultMigratorSystem\@SideBySideSimulatorSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideResultMigratorSystem();
    /**
     * @hash   25671222
     * @symbol  ?tickBegin\@SideBySideSimulatorSystem\@\@SAXVEntityFactory\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@USideBySideSimulatorComponent\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@\@\@V?$OptionalGlobalT\@USideBySideRemappingComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI static void tickBegin(class EntityFactory, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>, struct SideBySideSimulatorComponent, class FlagComponent<struct UsesECSMovementFlag>>, class OptionalGlobalT<struct SideBySideRemappingComponent, class EntityRegistryBase>);
    /**
     * @hash   27304488
     * @symbol  ?tickEnd\@SideBySideSimulatorSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USideBySideSimulatorComponent\@\@\@\@VEntityFactory\@\@\@Z
     */
    MCAPI static void tickEnd(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SideBySideSimulatorComponent>, class EntityFactory);

};