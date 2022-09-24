/**
 * @file  SideBySideExtractionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"
#include "SideBySide.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideExtractionSystem.
 *
 */
class SideBySideExtractionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEEXTRACTIONSYSTEM
public:
    class SideBySideExtractionSystem& operator=(class SideBySideExtractionSystem const &) = delete;
    SideBySideExtractionSystem(class SideBySideExtractionSystem const &) = delete;
    SideBySideExtractionSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SideBySideExtractionSystem();
    /**
     * @hash   1082388071
     * @vftbl  1
     * @symbol ?registerEvents@SideBySideExtractionSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    /**
     * @symbol ??0SideBySideExtractionSystem@@QEAA@AEBV?$tuple@U?$ExtractionDependencies@UTickBegin@SideBySideExtractionId@@@@U?$ExtractionDependencies@UBeginManagePassengers@SideBySideExtractionId@@@@U?$ExtractionDependencies@UManagePassengersStopRiding@SideBySideExtractionId@@@@U?$ExtractionDependencies@UManagePassengersPositioning@SideBySideExtractionId@@@@U?$ExtractionDependencies@UPassengerFreezeMovement@SideBySideExtractionId@@@@U?$ExtractionDependencies@UEnteringNormalTick@SideBySideExtractionId@@@@U?$ExtractionDependencies@UEnterMove@SideBySideExtractionId@@@@U?$ExtractionDependencies@UMove@SideBySideExtractionId@@@@U?$ExtractionDependencies@UMove2@SideBySideExtractionId@@@@U?$ExtractionDependencies@UExitingNormalTick@SideBySideExtractionId@@@@U?$ExtractionDependencies@UPostPlayerNormalTick@SideBySideExtractionId@@@@U?$ExtractionDependencies@UPostDerivedPlayerNormalTick@SideBySideExtractionId@@@@U?$ExtractionDependencies@UPassengerTick@SideBySideExtractionId@@@@U?$ExtractionDependencies@UEntityInside@SideBySideExtractionId@@@@@std@@@Z
     */
    MCAPI SideBySideExtractionSystem(class std::tuple<struct ExtractionDependencies<struct SideBySideExtractionId::TickBegin>, struct ExtractionDependencies<struct SideBySideExtractionId::BeginManagePassengers>, struct ExtractionDependencies<struct SideBySideExtractionId::ManagePassengersStopRiding>, struct ExtractionDependencies<struct SideBySideExtractionId::ManagePassengersPositioning>, struct ExtractionDependencies<struct SideBySideExtractionId::PassengerFreezeMovement>, struct ExtractionDependencies<struct SideBySideExtractionId::EnteringNormalTick>, struct ExtractionDependencies<struct SideBySideExtractionId::EnterMove>, struct ExtractionDependencies<struct SideBySideExtractionId::Move>, struct ExtractionDependencies<struct SideBySideExtractionId::Move2>, struct ExtractionDependencies<struct SideBySideExtractionId::ExitingNormalTick>, struct ExtractionDependencies<struct SideBySideExtractionId::PostPlayerNormalTick>, struct ExtractionDependencies<struct SideBySideExtractionId::PostDerivedPlayerNormalTick>, struct ExtractionDependencies<struct SideBySideExtractionId::PassengerTick>, struct ExtractionDependencies<struct SideBySideExtractionId::EntityInside>> const &);
    /**
     * @hash   512984717
     * @symbol ?_onSideBySideExtractionRequest@SideBySideExtractionSystem@@SAXAEBUExtractMethods@SideBySide@@AEBUOnExtractSideBySide@@@Z
     */
    MCAPI static void _onSideBySideExtractionRequest(struct SideBySide::ExtractMethods const &, struct OnExtractSideBySide const &);
    /**
     * @hash   -2099257614
     * @symbol ?onStoreSideBySideResult@SideBySideExtractionSystem@@SAXAEBUOnStoreSideBySideResult@@@Z
     */
    MCAPI static void onStoreSideBySideResult(struct OnStoreSideBySideResult const &);

};