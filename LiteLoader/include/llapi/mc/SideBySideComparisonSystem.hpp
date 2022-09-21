/**
 * @file  MC/SideBySideComparisonSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideComparisonSystem.
 *
 */
class SideBySideComparisonSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECOMPARISONSYSTEM
public:
    class SideBySideComparisonSystem& operator=(class SideBySideComparisonSystem const &) = delete;
    SideBySideComparisonSystem(class SideBySideComparisonSystem const &) = delete;
    SideBySideComparisonSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSideBySideComparisonSystem@SideBySideComparisonSystem@@SA?AUTickingSystemWithInfo@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@AEBV?$vector@IV?$allocator@I@std@@@4@@Z
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideComparisonSystem(class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>, std::vector<unsigned int> const &);
    /**
     * @symbol ?createSideBySideExceptionSystems@SideBySideComparisonSystem@@SA?AV?$array@UTickingSystemWithInfo@@$0P@@std@@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 15> createSideBySideExceptionSystems();

};