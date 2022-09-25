/**
 * @file  SideBySidePostComparisonSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySidePostComparisonSystem.
 *
 */
class SideBySidePostComparisonSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEPOSTCOMPARISONSYSTEM
public:
    class SideBySidePostComparisonSystem& operator=(class SideBySidePostComparisonSystem const &) = delete;
    SideBySidePostComparisonSystem(class SideBySidePostComparisonSystem const &) = delete;
    SideBySidePostComparisonSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSideBySideCleanupCopyComponentSystem@SideBySidePostComparisonSystem@@SA?AUTickingSystemWithInfo@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@@Z
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideCleanupCopyComponentSystem(class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>);

};