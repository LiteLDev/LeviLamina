#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorContainerDiffHelperImpl::Compare {
/**
 * @symbol
 * ?_attributeSnapshotLessThan\@Compare\@ActorContainerDiffHelperImpl\@\@YA_NV?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@0\@Z
 */
MCAPI bool
    _attributeSnapshotLessThan(class gsl::not_null<class AttributeInstance const*>, class gsl::not_null<class AttributeInstance const*>);
/**
 * @symbol
 * ?_dataItemLessThan\@Compare\@ActorContainerDiffHelperImpl\@\@YA_NV?$not_null\@PEBVDataItem\@\@\@gsl\@\@V34\@\@Z
 */
MCAPI bool _dataItemLessThan(class gsl::not_null<class DataItem const*>, class gsl::not_null<class DataItem const*>);
/**
 * @symbol
 * ?_mobEffectInstanceLessThan\@Compare\@ActorContainerDiffHelperImpl\@\@YA_NV?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@0\@Z
 */
MCAPI bool
    _mobEffectInstanceLessThan(class gsl::not_null<class MobEffectInstance const*>, class gsl::not_null<class MobEffectInstance const*>);

}; // namespace ActorContainerDiffHelperImpl::Compare
