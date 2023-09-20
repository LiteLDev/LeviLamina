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
     * @symbol ?registerActorPreTravelSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorPreTravelSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorTravelSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorTravelSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerBlockPosTrackerSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerBlockPosTrackerSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerEntityInsideSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerEntityInsideSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerEnvironmentSensingSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerEnvironmentSensingSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerMinecartMovementSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerMinecartMovementSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerMoveIntentSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerMoveIntentSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerMoveSpeedSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerMoveSpeedSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerMovementInputSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerMovementInputSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerPostMovementSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerPostMovementSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerSharedVanillaPlayerInteractionSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@\@Z
     */
    MCAPI void registerSharedVanillaPlayerInteractionSystems(class EntitySystems &);
    /**
     * @symbol ?registerTickFilterSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@\@Z
     */
    MCAPI void registerTickFilterSystems(class EntitySystems &);
    /**
     * @symbol ?registerVanillaServerTickingSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@V?$not_null\@V?$NonOwnerPointer\@$$CBVILevel\@\@\@Bedrock\@\@\@gsl\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerVanillaServerTickingSystems(class EntitySystems &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerVehicleManagementSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerVehicleManagementSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);

};