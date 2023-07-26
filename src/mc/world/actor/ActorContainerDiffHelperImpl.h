#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorContainerDiffHelperImpl {
/**
 * @symbol
 * ?_applyDiff\@ActorContainerDiffHelperImpl\@\@YAXAEAVBaseAttributeMap\@\@AEBV?$vector\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@\@Z
 */
MCAPI void
_applyDiff(class BaseAttributeMap&, std::vector<class gsl::not_null<class AttributeInstance const*>> const&); // NOLINT
/**
 * @symbol
 * ?_createListOfPointers\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBVBaseAttributeMap\@\@\@Z
 */
MCAPI std::vector<class gsl::not_null<class AttributeInstance const*>> const
      _createListOfPointers(class BaseAttributeMap const&); // NOLINT
/**
 * @symbol
 * ?_createListOfPointers\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVDataItem\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVDataItem\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBVSynchedActorData\@\@\@Z
 */
MCAPI std::vector<class gsl::not_null<class DataItem const*>> const
      _createListOfPointers(class SynchedActorData const&); // NOLINT
/**
 * @symbol
 * ?_createListOfPointers\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@3\@\@Z
 */
MCAPI std::vector<class gsl::not_null<class MobEffectInstance const*>> const
      _createListOfPointers(std::vector<class MobEffectInstance> const&); // NOLINT
/**
 * @symbol
 * ?_getDiff\@ActorContainerDiffHelperImpl\@\@YA?AV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVSynchedActorData\@\@0\@Z
 */
MCAPI std::vector<std::unique_ptr<class DataItem>>
      _getDiff(class SynchedActorData const&, class SynchedActorData const&); // NOLINT
/**
 * @symbol
 * ?_getDiff\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBVBaseAttributeMap\@\@0\@Z
 */
MCAPI std::vector<class gsl::not_null<class AttributeInstance const*>> const
      _getDiff(class BaseAttributeMap const&, class BaseAttributeMap const&); // NOLINT
/**
 * @symbol
 * ?_getDiff\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@3\@0\@Z
 */
MCAPI std::vector<class gsl::not_null<class MobEffectInstance const*>> const
      _getDiff(std::vector<class MobEffectInstance> const&, std::vector<class MobEffectInstance> const&); // NOLINT

}; // namespace ActorContainerDiffHelperImpl
