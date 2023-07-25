#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorContainerDiffHelper {
/**
 * @symbol ?applyIfChanged\@ActorContainerDiffHelper\@\@YAXAEAVSynchedActorData\@\@AEBV2\@1PEAVActor\@\@\@Z
 */
MCAPI void
applyIfChanged(class SynchedActorData&, class SynchedActorData const&, class SynchedActorData const&, class Actor*);
/**
 * @symbol
 * ?applyIfChanged\@ActorContainerDiffHelper\@\@YAXAEAV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@AEBV23\@1\@Z
 */
MCAPI void
applyIfChanged(std::vector<class MobEffectInstance>&, std::vector<class MobEffectInstance> const&, std::vector<class MobEffectInstance> const&);

}; // namespace ActorContainerDiffHelper
