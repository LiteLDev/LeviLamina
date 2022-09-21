/**
 * @file  MC/CommonResourceDefinitionMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -580209684
     * @symbol ??0CommonResourceDefinitionMap@@QEAA@XZ
     */
    MCAPI CommonResourceDefinitionMap();
    /**
     * @hash   -992069062
     * @symbol ?getAnimateScriptArray@CommonResourceDefinitionMap@@QEBAAEBV?$vector@UNamedMolangScript@@V?$allocator@UNamedMolangScript@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct NamedMolangScript> const & getAnimateScriptArray() const;
    /**
     * @hash   -463682977
     * @symbol ?getAnimationControllers@CommonResourceDefinitionMap@@QEBAAEBV?$unordered_map@VHashedString@@VActorAnimationControllerPtr@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@VActorAnimationControllerPtr@@@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<class HashedString, class ActorAnimationControllerPtr, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class ActorAnimationControllerPtr>>> const & getAnimationControllers() const;
    /**
     * @hash   1601312615
     * @symbol ?getAnimations@CommonResourceDefinitionMap@@QEBAAEBV?$unordered_map@VHashedString@@VActorSkeletalAnimationPtr@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@VActorSkeletalAnimationPtr@@@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<class HashedString, class ActorSkeletalAnimationPtr, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class ActorSkeletalAnimationPtr>>> const & getAnimations() const;
    /**
     * @hash   -435088770
     * @symbol ?getVariableSettings@CommonResourceDefinitionMap@@QEBAAEBV?$vector@UMolangVariableSettings@@V?$allocator@UMolangVariableSettings@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct MolangVariableSettings> const & getVariableSettings() const;
    /**
     * @hash   -208750848
     * @symbol ?isCommonResourceDefinitionMapEmpty@CommonResourceDefinitionMap@@QEBA_NXZ
     */
    MCAPI bool isCommonResourceDefinitionMapEmpty() const;
    /**
     * @hash   -745211896
     * @symbol ?mergeActorAnimateScriptArray@CommonResourceDefinitionMap@@QEAAXAEBV?$vector@UNamedMolangScript@@V?$allocator@UNamedMolangScript@@@std@@@std@@@Z
     */
    MCAPI void mergeActorAnimateScriptArray(std::vector<struct NamedMolangScript> const &);
    /**
     * @hash   1455313547
     * @symbol ?mergeAnimation@CommonResourceDefinitionMap@@QEAAXAEBVHashedString@@VActorSkeletalAnimationPtr@@@Z
     */
    MCAPI void mergeAnimation(class HashedString const &, class ActorSkeletalAnimationPtr);
    /**
     * @hash   398455677
     * @symbol ?mergeAnimationController@CommonResourceDefinitionMap@@QEAAXAEBVHashedString@@VActorAnimationControllerPtr@@@Z
     */
    MCAPI void mergeAnimationController(class HashedString const &, class ActorAnimationControllerPtr);

//private:
    /**
     * @hash   -985788484
     * @symbol ?_getAnimationResourceDefinitionLock@CommonResourceDefinitionMap@@CAAEAVrecursive_mutex@std@@XZ
     */
    MCAPI static class std::recursive_mutex & _getAnimationResourceDefinitionLock();

private:

};