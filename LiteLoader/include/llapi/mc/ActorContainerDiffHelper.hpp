/**
 * @file  ActorContainerDiffHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1742849787
     * @symbol  ?applyIfChanged\@ActorContainerDiffHelper\@\@YAXAEAV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@AEBV23\@1\@Z
     */
    MCAPI void applyIfChanged(std::vector<class MobEffectInstance> &, std::vector<class MobEffectInstance> const &, std::vector<class MobEffectInstance> const &);
    /**
     * @hash   -279325100
     * @symbol  ?applyIfChanged\@ActorContainerDiffHelper\@\@YAXAEAVBaseAttributeMap\@\@AEBV2\@1\@Z
     */
    MCAPI void applyIfChanged(class BaseAttributeMap &, class BaseAttributeMap const &, class BaseAttributeMap const &);
    /**
     * @hash   -403417404
     * @symbol  ?applyIfChanged\@ActorContainerDiffHelper\@\@YAXAEAVSynchedActorData\@\@AEBV2\@1PEAVActor\@\@\@Z
     */
    MCAPI void applyIfChanged(class SynchedActorData &, class SynchedActorData const &, class SynchedActorData const &, class Actor *);

};