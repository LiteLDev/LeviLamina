/**
 * @file  ScopedSideBySideTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ScopedSideBySideTrigger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOPEDSIDEBYSIDETRIGGER
public:
    class ScopedSideBySideTrigger& operator=(class ScopedSideBySideTrigger const &) = delete;
    ScopedSideBySideTrigger(class ScopedSideBySideTrigger const &) = delete;
    ScopedSideBySideTrigger() = delete;
#endif

public:
    /**
     * @symbol ?end@ScopedSideBySideTrigger@@QEAA_NXZ
     */
    MCAPI bool end();
    /**
     * @symbol ??1ScopedSideBySideTrigger@@QEAA@XZ
     */
    MCAPI ~ScopedSideBySideTrigger();
    /**
     * @symbol ?tryTriggerIf@ScopedSideBySideTrigger@@SA?AV1@_NAEAUIActorMovementProxy@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@@Z
     */
    MCAPI static class ScopedSideBySideTrigger tryTriggerIf(bool, struct IActorMovementProxy &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>);

};