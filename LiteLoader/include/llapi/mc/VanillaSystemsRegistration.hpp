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
     * @symbol ?_registerSideBySideCompare\@VanillaSystemsRegistration\@\@YAXAEBV?$vector\@IV?$allocator\@I\@std\@\@\@std\@\@AEAVEntitySystems\@\@W4SideBySideExtractionId\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void _registerSideBySideCompare(std::vector<unsigned int> const &, class EntitySystems &, enum class SideBySideExtractionId, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorAiStepSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEAUDependencyInfo\@1\@AEBURegistrationOptions\@1\@AEAV?$shared_future\@UEntitySystemsInfo\@\@\@std\@\@\@Z
     */
    MCAPI void registerActorAiStepSystems(class EntitySystems &, struct VanillaSystemsRegistration::DependencyInfo &, struct VanillaSystemsRegistration::RegistrationOptions const &, class std::shared_future<struct EntitySystemsInfo> &);
    /**
     * @symbol ?registerActorMoveSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEAUDependencyInfo\@1\@AEBURegistrationOptions\@1\@W4MoveSystemsRegistrationMode\@1\@\@Z
     */
    MCAPI void registerActorMoveSystems(class EntitySystems &, struct VanillaSystemsRegistration::DependencyInfo &, struct VanillaSystemsRegistration::RegistrationOptions const &, enum class VanillaSystemsRegistration::MoveSystemsRegistrationMode);
    /**
     * @symbol ?registerActorMovementTickSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@AEAV?$shared_future\@UEntitySystemsInfo\@\@\@std\@\@\@Z
     */
    MCAPI void registerActorMovementTickSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &, class std::shared_future<struct EntitySystemsInfo> &);
    /**
     * @symbol ?registerActorNormalTickSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEAUDependencyInfo\@1\@AEBURegistrationOptions\@1\@AEAV?$shared_future\@UEntitySystemsInfo\@\@\@std\@\@\@Z
     */
    MCAPI void registerActorNormalTickSystems(class EntitySystems &, struct VanillaSystemsRegistration::DependencyInfo &, struct VanillaSystemsRegistration::RegistrationOptions const &, class std::shared_future<struct EntitySystemsInfo> &);
    /**
     * @symbol ?registerActorPositionPassenger\@VanillaSystemsRegistration\@\@YAXAEAVIEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorPositionPassenger(class IEntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorPreTravelSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorPreTravelSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerActorTravelSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEAUDependencyInfo\@1\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerActorTravelSystems(class EntitySystems &, struct VanillaSystemsRegistration::DependencyInfo &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerExtractApplyBlock\@VanillaSystemsRegistration\@\@YAXAEAUDependencyInfo\@1\@W4ExtractApplyMode\@1\@W4SideBySideExtractionId\@\@AEAVEntitySystems\@\@AEBURegistrationOptions\@1\@AEBV?$function\@$$A6AXAEAVIEntitySystems\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void registerExtractApplyBlock(struct VanillaSystemsRegistration::DependencyInfo &, enum class VanillaSystemsRegistration::ExtractApplyMode, enum class SideBySideExtractionId, class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &, class std::function<void (class IEntitySystems &)> const &);
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
     * @symbol ?registerUpdateMobTravelSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerUpdateMobTravelSystems(class EntitySystems &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?registerVanillaServerTickingSystems\@VanillaSystemsRegistration\@\@YAXAEAVEntitySystems\@\@V?$not_null\@V?$NonOwnerPointer\@$$CBVILevel\@\@\@Bedrock\@\@\@gsl\@\@AEBURegistrationOptions\@1\@\@Z
     */
    MCAPI void registerVanillaServerTickingSystems(class EntitySystems &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>, struct VanillaSystemsRegistration::RegistrationOptions const &);

};