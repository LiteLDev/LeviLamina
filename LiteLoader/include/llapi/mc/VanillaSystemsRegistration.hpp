/**
 * @file  VanillaSystemsRegistration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VanillaSystemsRegistration.
 *
 */
namespace VanillaSystemsRegistration {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?_registerSideBySideApply@VanillaSystemsRegistration@@YAXAEBV?$vector@IV?$allocator@I@std@@@std@@0AEAVEntitySystems@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@3@AEBURegistrationOptions@1@@Z
     */
    MCAPI void _registerSideBySideApply(std::vector<unsigned int> const &, std::vector<unsigned int> const &, class EntitySystems &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorMoveSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEAUDependencyInfo@1@AEBURegistrationOptions@1@_N@Z
     */
    MCAPI void registerActorMoveSystems(class EntitySystems &, struct VanillaSystemsRegistration::DependencyInfo &, struct VanillaSystemsRegistration::RegistrationOptions const &, bool);
    /**
     * @symbol ?registerExtractApplyBlock@VanillaSystemsRegistration@@YAXAEAUDependencyInfo@1@W4ExtractApplyMode@1@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UPassengerFreezeMovement@2@UEnteringNormalTick@2@UEnterMove@2@UMove@2@UMove2@2@UExitingNormalTick@2@UPostPlayerNormalTick@2@UPostDerivedPlayerNormalTick@2@UPassengerTick@2@UEntityInside@2@@std@@AEAVEntitySystems@@AEBURegistrationOptions@1@AEBV?$function@$$A6AXAEAVIEntitySystems@@@Z@5@@Z
     */
    MCAPI void registerExtractApplyBlock(struct VanillaSystemsRegistration::DependencyInfo &, enum class VanillaSystemsRegistration::ExtractApplyMode, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::PassengerFreezeMovement, struct SideBySideExtractionId::EnteringNormalTick, struct SideBySideExtractionId::EnterMove, struct SideBySideExtractionId::Move, struct SideBySideExtractionId::Move2, struct SideBySideExtractionId::ExitingNormalTick, struct SideBySideExtractionId::PostPlayerNormalTick, struct SideBySideExtractionId::PostDerivedPlayerNormalTick, struct SideBySideExtractionId::PassengerTick, struct SideBySideExtractionId::EntityInside>, class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &, class std::function<void (class IEntitySystems &)> const &);
    /**
     * @symbol ?registerPassengerTick@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEAUDependencyInfo@1@AEBURegistrationOptions@1@_N@Z
     */
    MCAPI void registerPassengerTick(class EntitySystems &, struct VanillaSystemsRegistration::DependencyInfo &, struct VanillaSystemsRegistration::RegistrationOptions const &, bool);
    /**
     * @symbol ?registerPostNormalTickSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEAUDependencyInfo@1@AEBURegistrationOptions@1@_N@Z
     */
    MCAPI void registerPostNormalTickSystems(class EntitySystems &, struct VanillaSystemsRegistration::DependencyInfo &, struct VanillaSystemsRegistration::RegistrationOptions const &, bool);
    /**
     * @symbol ?registerPreNormalTickSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEAUDependencyInfo@1@AEBURegistrationOptions@1@@Z
     */
    MCAPI void registerPreNormalTickSystems(class EntitySystems &, struct VanillaSystemsRegistration::DependencyInfo &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @hash   1534960191
     * @symbol ?registerSharedVanillaPlayerInteractionSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@@Z
     */
    MCAPI void registerSharedVanillaPlayerInteractionSystems(class EntitySystems &);
    /**
     * @hash   1156608847
     * @symbol ?registerTickFilterSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@@Z
     */
    MCAPI void registerTickFilterSystems(class EntitySystems &);
    /**
     * @hash   1339831502
     * @symbol ?registerVanillaServerTickingSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@AEBURegistrationOptions@1@@Z
     */
    MCAPI void registerVanillaServerTickingSystems(class EntitySystems &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>, struct VanillaSystemsRegistration::RegistrationOptions const &);

};