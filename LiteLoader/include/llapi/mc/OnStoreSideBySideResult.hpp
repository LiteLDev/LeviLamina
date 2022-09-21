/**
 * @file  MC/OnStoreSideBySideResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct OnStoreSideBySideResult {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTORESIDEBYSIDERESULT
public:
    struct OnStoreSideBySideResult& operator=(struct OnStoreSideBySideResult const &) = delete;
    OnStoreSideBySideResult(struct OnStoreSideBySideResult const &) = delete;
    OnStoreSideBySideResult() = delete;
#endif

public:
    /**
     * @symbol ??0OnStoreSideBySideResult@@QEAA@V?$optional@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@@std@@AEBVStrictEntityContext@@V?$not_null@PEAVEntityRegistryBase@@@gsl@@USideBySideResult@@@Z
     */
    MCAPI OnStoreSideBySideResult(class std::optional<class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>>, class StrictEntityContext const &, class gsl::not_null<class EntityRegistryBase *>, struct SideBySideResult);
    /**
     * @symbol ??1OnStoreSideBySideResult@@QEAA@XZ
     */
    MCAPI ~OnStoreSideBySideResult();

};