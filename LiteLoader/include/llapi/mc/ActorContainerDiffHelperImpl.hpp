/**
 * @file  ActorContainerDiffHelperImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorContainerDiffHelperImpl.
 *
 */
namespace ActorContainerDiffHelperImpl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?_applyDiff\@ActorContainerDiffHelperImpl\@\@YAXAEAVBaseAttributeMap\@\@AEBV?$vector\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _applyDiff(class BaseAttributeMap &, std::vector<class gsl::not_null<class AttributeInstance const *>> const &);
    /**
     * @symbol  ?_createListOfPointers\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBVBaseAttributeMap\@\@\@Z
     */
    MCAPI std::vector<class gsl::not_null<class AttributeInstance const *>> const _createListOfPointers(class BaseAttributeMap const &);
    /**
     * @symbol  ?_createListOfPointers\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVDataItem\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVDataItem\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBVSynchedActorData\@\@\@Z
     */
    MCAPI std::vector<class gsl::not_null<class DataItem const *>> const _createListOfPointers(class SynchedActorData const &);
    /**
     * @symbol  ?_createListOfPointers\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::vector<class gsl::not_null<class MobEffectInstance const *>> const _createListOfPointers(std::vector<class MobEffectInstance> const &);
    /**
     * @symbol  ?_getDiff\@ActorContainerDiffHelperImpl\@\@YA?AV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVSynchedActorData\@\@0\@Z
     */
    MCAPI std::vector<std::unique_ptr<class DataItem>> _getDiff(class SynchedActorData const &, class SynchedActorData const &);
    /**
     * @symbol  ?_getDiff\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVAttributeInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBVBaseAttributeMap\@\@0\@Z
     */
    MCAPI std::vector<class gsl::not_null<class AttributeInstance const *>> const _getDiff(class BaseAttributeMap const &, class BaseAttributeMap const &);
    /**
     * @symbol  ?_getDiff\@ActorContainerDiffHelperImpl\@\@YA?BV?$vector\@V?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEBVMobEffectInstance\@\@\@gsl\@\@\@std\@\@\@std\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@3\@0\@Z
     */
    MCAPI std::vector<class gsl::not_null<class MobEffectInstance const *>> const _getDiff(std::vector<class MobEffectInstance> const &, std::vector<class MobEffectInstance> const &);

};