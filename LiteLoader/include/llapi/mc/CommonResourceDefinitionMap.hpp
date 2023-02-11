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
     * @hash   -1790377764
     * @symbol  ??0CommonResourceDefinitionMap\@\@QEAA\@XZ
     */
    MCAPI CommonResourceDefinitionMap();
    /**
     * @hash   -2031302150
     * @symbol  ?getAnimateScriptArray\@CommonResourceDefinitionMap\@\@QEBAAEBV?$vector\@UNamedMolangScript\@\@V?$allocator\@UNamedMolangScript\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct NamedMolangScript> const & getAnimateScriptArray() const;
    /**
     * @hash   -357419441
     * @symbol  ?getAnimationControllers\@CommonResourceDefinitionMap\@\@QEBAAEBV?$unordered_map\@VHashedString\@\@VActorAnimationControllerPtr\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VActorAnimationControllerPtr\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class HashedString, class ActorAnimationControllerPtr, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class ActorAnimationControllerPtr>>> const & getAnimationControllers() const;
    /**
     * @hash   1697935399
     * @symbol  ?getAnimations\@CommonResourceDefinitionMap\@\@QEBAAEBV?$unordered_map\@VHashedString\@\@VActorSkeletalAnimationPtr\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VActorSkeletalAnimationPtr\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class HashedString, class ActorSkeletalAnimationPtr, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class ActorSkeletalAnimationPtr>>> const & getAnimations() const;
    /**
     * @hash   -1143891618
     * @symbol  ?getVariableSettings\@CommonResourceDefinitionMap\@\@QEBAAEBV?$vector\@UMolangVariableSettings\@\@V?$allocator\@UMolangVariableSettings\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct MolangVariableSettings> const & getVariableSettings() const;
    /**
     * @hash   -1247983936
     * @symbol  ?isCommonResourceDefinitionMapEmpty\@CommonResourceDefinitionMap\@\@QEBA_NXZ
     */
    MCAPI bool isCommonResourceDefinitionMapEmpty() const;
    /**
     * @hash   -1784444984
     * @symbol  ?mergeActorAnimateScriptArray\@CommonResourceDefinitionMap\@\@QEAAXAEBV?$vector\@UNamedMolangScript\@\@V?$allocator\@UNamedMolangScript\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void mergeActorAnimateScriptArray(std::vector<struct NamedMolangScript> const &);
    /**
     * @hash   416080459
     * @symbol  ?mergeAnimation\@CommonResourceDefinitionMap\@\@QEAAXAEBVHashedString\@\@VActorSkeletalAnimationPtr\@\@\@Z
     */
    MCAPI void mergeAnimation(class HashedString const &, class ActorSkeletalAnimationPtr);
    /**
     * @hash   -640762035
     * @symbol  ?mergeAnimationController\@CommonResourceDefinitionMap\@\@QEAAXAEBVHashedString\@\@VActorAnimationControllerPtr\@\@\@Z
     */
    MCAPI void mergeAnimationController(class HashedString const &, class ActorAnimationControllerPtr);

//private:
    /**
     * @hash   -2024929316
     * @symbol  ?_getAnimationResourceDefinitionLock\@CommonResourceDefinitionMap\@\@CAAEAVrecursive_mutex\@std\@\@XZ
     */
    MCAPI static class std::recursive_mutex & _getAnimationResourceDefinitionLock();

private:

};