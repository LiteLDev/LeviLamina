/**
 * @file  OnActorEnterVolumeDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnActorEnterVolumeDefinition.
 *
 */
struct OnActorEnterVolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONACTORENTERVOLUMEDEFINITION
public:
    struct OnActorEnterVolumeDefinition& operator=(struct OnActorEnterVolumeDefinition const &) = delete;
    OnActorEnterVolumeDefinition(struct OnActorEnterVolumeDefinition const &) = delete;
    OnActorEnterVolumeDefinition() = delete;
#endif

public:
    /**
     * @hash   2089810289
     * @symbol  ?initialize\@OnActorEnterVolumeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVOnActorEnterVolumeComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class OnActorEnterVolumeComponent &) const;
    /**
     * @hash   -2030060807
     * @symbol  ??1OnActorEnterVolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~OnActorEnterVolumeDefinition();
    /**
     * @hash   -1089268285
     * @symbol  ?NAME\@OnActorEnterVolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    /**
     * @hash   -1589560381
     * @symbol  ?bindType\@OnActorEnterVolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();

};