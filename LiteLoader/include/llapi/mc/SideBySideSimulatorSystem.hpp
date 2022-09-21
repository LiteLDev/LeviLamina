/**
 * @file  MC/SideBySideSimulatorSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"

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
     * @hash   -593216145
     * @symbol ?_clearRemappings@SideBySideSimulatorSystem@@SAXV?$OptionalGlobalT@USideBySideRemappingComponent@@VEntityRegistryBase@@@@@Z
     */
    MCAPI static void _clearRemappings(class OptionalGlobalT<struct SideBySideRemappingComponent, class EntityRegistryBase>);
    /**
     * @hash   -1223740848
     * @symbol ?createBegin@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBegin();
    /**
     * @hash   726666304
     * @symbol ?createClearRemappingsSystem@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClearRemappingsSystem();
    /**
     * @hash   -793710992
     * @symbol ?createEnd@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createEnd();
    /**
     * @symbol ?createMigrator@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@AEBV?$vector@IV?$allocator@I@std@@@4@@Z
     */
    MCAPI static struct TickingSystemWithInfo createMigrator(class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>, std::vector<unsigned int> const &);
    /**
     * @hash   1651193442
     * @symbol ?createSideBySideResultMigratorSystem@SideBySideSimulatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideResultMigratorSystem();
    /**
     * @hash   1030661958
     * @symbol ?tickBegin@SideBySideSimulatorSystem@@SAXVEntityFactory@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@USideBySideSimulatorComponent@@V?$FlagComponent@UUsesECSMovementFlag@@@@@@V?$OptionalGlobalT@USideBySideRemappingComponent@@VEntityRegistryBase@@@@@Z
     */
    MCAPI static void tickBegin(class EntityFactory, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>, struct SideBySideSimulatorComponent, class FlagComponent<struct UsesECSMovementFlag>>, class OptionalGlobalT<struct SideBySideRemappingComponent, class EntityRegistryBase>);
    /**
     * @hash   1032079960
     * @symbol ?tickEnd@SideBySideSimulatorSystem@@SAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@USideBySideSimulatorComponent@@@@VEntityFactory@@@Z
     */
    MCAPI static void tickEnd(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SideBySideSimulatorComponent>, class EntityFactory);

};