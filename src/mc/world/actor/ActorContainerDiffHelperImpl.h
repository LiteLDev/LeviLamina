#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorContainerDiffHelperImpl {
// NOLINTBEGIN
// symbol:
// ?_applyDiff@ActorContainerDiffHelperImpl@@YAXAEAVBaseAttributeMap@@AEBV?$vector@V?$not_null@PEBVAttributeInstance@@@gsl@@V?$allocator@V?$not_null@PEBVAttributeInstance@@@gsl@@@std@@@std@@@Z
MCAPI void _applyDiff(class BaseAttributeMap&, std::vector<gsl::not_null<class AttributeInstance const*>> const&);

// symbol:
// ?_createListOfPointers@ActorContainerDiffHelperImpl@@YA?BV?$vector@V?$not_null@PEBVAttributeInstance@@@gsl@@V?$allocator@V?$not_null@PEBVAttributeInstance@@@gsl@@@std@@@std@@AEBVBaseAttributeMap@@@Z
MCAPI std::vector<gsl::not_null<class AttributeInstance const*>> const
      _createListOfPointers(class BaseAttributeMap const& attributes);

// symbol:
// ?_createListOfPointers@ActorContainerDiffHelperImpl@@YA?BV?$vector@V?$not_null@PEBVMobEffectInstance@@@gsl@@V?$allocator@V?$not_null@PEBVMobEffectInstance@@@gsl@@@std@@@std@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@3@@Z
MCAPI std::vector<gsl::not_null<class MobEffectInstance const*>> const
      _createListOfPointers(std::vector<class MobEffectInstance> const& list);

// symbol:
// ?_getDiff@ActorContainerDiffHelperImpl@@YA?BV?$vector@V?$not_null@PEBVAttributeInstance@@@gsl@@V?$allocator@V?$not_null@PEBVAttributeInstance@@@gsl@@@std@@@std@@AEBVBaseAttributeMap@@0@Z
MCAPI std::vector<gsl::not_null<class AttributeInstance const*>> const
      _getDiff(class BaseAttributeMap const&, class BaseAttributeMap const&);

// symbol:
// ?_getDiff@ActorContainerDiffHelperImpl@@YA?BV?$vector@V?$not_null@PEBVMobEffectInstance@@@gsl@@V?$allocator@V?$not_null@PEBVMobEffectInstance@@@gsl@@@std@@@std@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@3@0@Z
MCAPI std::vector<gsl::not_null<class MobEffectInstance const*>> const
      _getDiff(std::vector<class MobEffectInstance> const&, std::vector<class MobEffectInstance> const&);
// NOLINTEND

}; // namespace ActorContainerDiffHelperImpl
