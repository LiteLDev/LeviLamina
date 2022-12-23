/**
 * @file  ActorContainerDiffHelper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorContainerDiffHelper.
 *
 */
namespace ActorContainerDiffHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?applyIfChanged@ActorContainerDiffHelper@@YAXAEAV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@AEBV23@1@Z
     * @hash   -1742849787
     */
    MCAPI void applyIfChanged(std::vector<class MobEffectInstance> &, std::vector<class MobEffectInstance> const &, std::vector<class MobEffectInstance> const &);
    /**
     * @symbol ?applyIfChanged@ActorContainerDiffHelper@@YAXAEAVBaseAttributeMap@@AEBV2@1@Z
     * @hash   -279325100
     */
    MCAPI void applyIfChanged(class BaseAttributeMap &, class BaseAttributeMap const &, class BaseAttributeMap const &);
    /**
     * @symbol ?applyIfChanged@ActorContainerDiffHelper@@YAXAEAVSynchedActorData@@AEBV2@1PEAVActor@@@Z
     * @hash   -403417404
     */
    MCAPI void applyIfChanged(class SynchedActorData &, class SynchedActorData const &, class SynchedActorData const &, class Actor *);

};