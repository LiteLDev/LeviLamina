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
MCAPI bool _attributeSnapshotLessThan(
    gsl::not_null<class AttributeInstance const*> a,
    gsl::not_null<class AttributeInstance const*> b
);

// symbol:
// ?_mobEffectInstanceLessThan@Compare@ActorContainerDiffHelperImpl@@YA_NV?$not_null@PEBVMobEffectInstance@@@gsl@@0@Z
MCAPI bool _mobEffectInstanceLessThan(
    gsl::not_null<class MobEffectInstance const*> a,
    gsl::not_null<class MobEffectInstance const*> b
);
// NOLINTEND

}; // namespace ActorContainerDiffHelperImpl::Compare
