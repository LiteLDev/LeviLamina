#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class MobEffectInstance;
// clang-format on

namespace ActorContainerDiffHelperImpl::Compare {
// NOLINTBEGIN
// symbol:
// ?_attributeSnapshotLessThan@Compare@ActorContainerDiffHelperImpl@@YA_NV?$not_null@PEBVAttributeInstance@@@gsl@@0@Z
MCAPI bool
    _attributeSnapshotLessThan(gsl::not_null<class AttributeInstance const*>, gsl::not_null<class AttributeInstance const*>);

// symbol:
// ?_mobEffectInstanceLessThan@Compare@ActorContainerDiffHelperImpl@@YA_NV?$not_null@PEBVMobEffectInstance@@@gsl@@0@Z
MCAPI bool
    _mobEffectInstanceLessThan(gsl::not_null<class MobEffectInstance const*>, gsl::not_null<class MobEffectInstance const*>);
// NOLINTEND

}; // namespace ActorContainerDiffHelperImpl::Compare
