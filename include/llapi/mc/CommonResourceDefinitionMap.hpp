/**
 * @file  CommonResourceDefinitionMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommonResourceDefinitionMap.
 *
 */
class CommonResourceDefinitionMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMONRESOURCEDEFINITIONMAP
public:
    class CommonResourceDefinitionMap& operator=(class CommonResourceDefinitionMap const &) = delete;
    CommonResourceDefinitionMap(class CommonResourceDefinitionMap const &) = delete;
#endif

public:
    /**
     * @symbol  ??0CommonResourceDefinitionMap\@\@QEAA\@XZ
     */
    MCAPI CommonResourceDefinitionMap();
    /**
     * @symbol  ?getAnimateScriptArray\@CommonResourceDefinitionMap\@\@QEBAAEBV?$vector\@UNamedMolangScript\@\@V?$allocator\@UNamedMolangScript\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct NamedMolangScript> const & getAnimateScriptArray() const;
    /**
     * @symbol  ?getAnimationControllers\@CommonResourceDefinitionMap\@\@QEBAAEBV?$unordered_map\@VHashedString\@\@VActorAnimationControllerPtr\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VActorAnimationControllerPtr\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class HashedString, class ActorAnimationControllerPtr, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class ActorAnimationControllerPtr>>> const & getAnimationControllers() const;
    /**
     * @symbol  ?getAnimations\@CommonResourceDefinitionMap\@\@QEBAAEBV?$unordered_map\@VHashedString\@\@VActorSkeletalAnimationPtr\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VActorSkeletalAnimationPtr\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class HashedString, class ActorSkeletalAnimationPtr, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class ActorSkeletalAnimationPtr>>> const & getAnimations() const;
    /**
     * @symbol  ?getVariableSettings\@CommonResourceDefinitionMap\@\@QEBAAEBV?$vector\@UMolangVariableSettings\@\@V?$allocator\@UMolangVariableSettings\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct MolangVariableSettings> const & getVariableSettings() const;
    /**
     * @symbol  ?isCommonResourceDefinitionMapEmpty\@CommonResourceDefinitionMap\@\@QEBA_NXZ
     */
    MCAPI bool isCommonResourceDefinitionMapEmpty() const;
    /**
     * @symbol  ?mergeActorAnimateScriptArray\@CommonResourceDefinitionMap\@\@QEAAXAEBV?$vector\@UNamedMolangScript\@\@V?$allocator\@UNamedMolangScript\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void mergeActorAnimateScriptArray(std::vector<struct NamedMolangScript> const &);
    /**
     * @symbol  ?mergeAnimation\@CommonResourceDefinitionMap\@\@QEAAXAEBVHashedString\@\@VActorSkeletalAnimationPtr\@\@\@Z
     */
    MCAPI void mergeAnimation(class HashedString const &, class ActorSkeletalAnimationPtr);
    /**
     * @symbol  ?mergeAnimationController\@CommonResourceDefinitionMap\@\@QEAAXAEBVHashedString\@\@VActorAnimationControllerPtr\@\@\@Z
     */
    MCAPI void mergeAnimationController(class HashedString const &, class ActorAnimationControllerPtr);

//private:
    /**
     * @symbol  ?_getAnimationResourceDefinitionLock\@CommonResourceDefinitionMap\@\@CAAEAVrecursive_mutex\@std\@\@XZ
     */
    MCAPI static class std::recursive_mutex & _getAnimationResourceDefinitionLock();

private:

};