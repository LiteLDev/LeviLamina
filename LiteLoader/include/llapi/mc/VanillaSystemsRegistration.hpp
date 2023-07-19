/**
 * @file  VanillaSystemsRegistration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol ?registerActorAiStepSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorAiStepSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorMoveSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorMoveSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorMovementTickSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorMovementTickSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorNormalTickSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorNormalTickSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorPositionPassenger\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorPositionPassenger(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorPreTravelSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorPreTravelSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorTravelSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorTravelSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerPassengerTick\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerPassengerTick(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerRemovePassengerSystems\@VanillaSystemsRegistration\@\@YAXAEAVIEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerRemovePassengerSystems(class IEntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerSharedVanillaPlayerInteractionSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@\@Z
     */
    MCAPI void registerSharedVanillaPlayerInteractionSystems(class EntitySystems &);
    /**
     * @symbol ?registerTickFilterSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@\@Z
     */
    MCAPI void registerTickFilterSystems(class EntitySystems &);
    /**
     * @symbol ?registerUpdateMobTravelSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@\@Z
     */
    MCAPI void registerUpdateMobTravelSystems(class EntitySystems &);
    /**
     * @symbol ?registerVanillaServerTickingSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@V?$not_null\@V?$NonOwnerPointer\@$$CBVILevel\@\@\@Bedrock\@\@\@gsl\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerVanillaServerTickingSystems(class EntitySystems &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>, struct VanillaSystemsRegistration::RegistrationOptions const &);

};