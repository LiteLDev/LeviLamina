/**
 * @file  MC/SideBySideTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SideBySideTrigger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDETRIGGER
public:
    class SideBySideTrigger& operator=(class SideBySideTrigger const &) = delete;
    SideBySideTrigger(class SideBySideTrigger const &) = delete;
    SideBySideTrigger() = delete;
#endif

public:
    /**
     * @symbol ?flagUnsupportedComparisonFrame@SideBySideTrigger@@SAXAEAUIActorMovementProxy@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAUSideBySidePartialComparison@@@Z
     */
    MCAPI static void flagUnsupportedComparisonFrame(struct IActorMovementProxy &, class std::basic_string_view<char, struct std::char_traits<char>>, struct SideBySidePartialComparison *);
    /**
     * @symbol ?flagUnsupportedComparisonFrame@SideBySideTrigger@@SAXAEAVActor@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAUSideBySidePartialComparison@@@Z
     */
    MCAPI static void flagUnsupportedComparisonFrame(class Actor &, class std::basic_string_view<char, struct std::char_traits<char>>, struct SideBySidePartialComparison *);
    /**
     * @symbol ?shouldSimulateLegacy@SideBySideTrigger@@SA_NAEBUIActorMovementProxy@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@@Z
     */
    MCAPI static bool shouldSimulateLegacy(struct IActorMovementProxy const &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>);
    /**
     * @symbol ?shouldSimulateLegacy@SideBySideTrigger@@SA_NAEBVActor@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@@Z
     */
    MCAPI static bool shouldSimulateLegacy(class Actor const &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>);
    /**
     * @symbol ?storeCurrentSideBySideResult@SideBySideTrigger@@SAXAEAVActor@@USideBySideResult@@@Z
     */
    MCAPI static void storeCurrentSideBySideResult(class Actor &, struct SideBySideResult);
    /**
     * @symbol ?storeSideBySideResult@SideBySideTrigger@@SAXAEAUIActorMovementProxy@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@USideBySideResult@@@Z
     */
    MCAPI static void storeSideBySideResult(struct IActorMovementProxy &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>, struct SideBySideResult);
    /**
     * @symbol ?storeSideBySideResult@SideBySideTrigger@@SAXAEAVActor@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@USideBySideResult@@@Z
     */
    MCAPI static void storeSideBySideResult(class Actor &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>, struct SideBySideResult);
    /**
     * @symbol ?tryTrigger@SideBySideTrigger@@SA_NAEAUIActorMovementProxy@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@W4SideBySideExtractionStep@@@Z
     */
    MCAPI static bool tryTrigger(struct IActorMovementProxy &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>, enum SideBySideExtractionStep);
    /**
     * @symbol ?tryTrigger@SideBySideTrigger@@SA_NAEAVActor@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@W4SideBySideExtractionStep@@@Z
     */
    MCAPI static bool tryTrigger(class Actor &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>, enum SideBySideExtractionStep);
    /**
     * @symbol ?tryTriggerCurrentPostSimulation@SideBySideTrigger@@SA_NAEAUIActorMovementProxy@@V?$optional@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@@std@@@Z
     */
    MCAPI static bool tryTriggerCurrentPostSimulation(struct IActorMovementProxy &, class std::optional<class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>>);
    /**
     * @symbol ?tryTriggerCurrentPostSimulation@SideBySideTrigger@@SA_NAEAVActor@@V?$optional@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@@std@@@Z
     */
    MCAPI static bool tryTriggerCurrentPostSimulation(class Actor &, class std::optional<class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>>);

};