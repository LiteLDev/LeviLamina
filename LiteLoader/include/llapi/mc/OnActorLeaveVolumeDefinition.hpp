/**
 * @file  OnActorLeaveVolumeDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnActorLeaveVolumeDefinition.
 *
 */
struct OnActorLeaveVolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONACTORLEAVEVOLUMEDEFINITION
public:
    struct OnActorLeaveVolumeDefinition& operator=(struct OnActorLeaveVolumeDefinition const &) = delete;
    OnActorLeaveVolumeDefinition(struct OnActorLeaveVolumeDefinition const &) = delete;
    OnActorLeaveVolumeDefinition() = delete;
#endif

public:
    /**
     * @hash   -15738289
     * @symbol ?initialize@OnActorLeaveVolumeDefinition@@QEBAXAEAVEntityContext@@AEAVOnActorLeaveVolumeComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class OnActorLeaveVolumeComponent &) const;
    /**
     * @hash   1447671869
     * @symbol ?NAME@OnActorLeaveVolumeDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NAME;
    /**
     * @hash   2105528275
     * @symbol ?bindType@OnActorLeaveVolumeDefinition@@SAXXZ
     */
    MCAPI static void bindType();

};