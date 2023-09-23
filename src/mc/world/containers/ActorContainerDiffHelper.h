#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorContainerDiffHelper {
// NOLINTBEGIN
// symbol: ?applyIfChanged@ActorContainerDiffHelper@@YAXAEAVBaseAttributeMap@@AEBV2@1@Z
MCAPI void applyIfChanged(class BaseAttributeMap&, class BaseAttributeMap const&, class BaseAttributeMap const&);

// symbol:
// ?applyIfChanged@ActorContainerDiffHelper@@YAXAEAV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@AEBV23@1@Z
MCAPI void
applyIfChanged(std::vector<class MobEffectInstance>&, std::vector<class MobEffectInstance> const&, std::vector<class MobEffectInstance> const&);
// NOLINTEND

}; // namespace ActorContainerDiffHelper
