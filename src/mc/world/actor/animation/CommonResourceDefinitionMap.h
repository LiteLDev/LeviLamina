#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommonResourceDefinitionMap {
public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&);
    CommonResourceDefinitionMap(CommonResourceDefinitionMap const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CommonResourceDefinitionMap@@QEAA@XZ
    MCAPI CommonResourceDefinitionMap();

    // symbol:
    // ?getAnimateScriptArray@CommonResourceDefinitionMap@@QEBAAEBV?$vector@UNamedMolangScript@@V?$allocator@UNamedMolangScript@@@std@@@std@@XZ
    MCAPI std::vector<struct NamedMolangScript> const& getAnimateScriptArray() const;

    // symbol:
    // ?getAnimationControllers@CommonResourceDefinitionMap@@QEBAAEBV?$unordered_map@VHashedString@@VActorAnimationControllerPtr@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@VActorAnimationControllerPtr@@@std@@@4@@std@@XZ
    MCAPI std::unordered_map<class HashedString, class ActorAnimationControllerPtr> const&
          getAnimationControllers() const;

    // symbol:
    // ?getAnimations@CommonResourceDefinitionMap@@QEBAAEBV?$unordered_map@VHashedString@@VActorSkeletalAnimationPtr@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@VActorSkeletalAnimationPtr@@@std@@@4@@std@@XZ
    MCAPI std::unordered_map<class HashedString, class ActorSkeletalAnimationPtr> const& getAnimations() const;

    // symbol:
    // ?getVariableSettings@CommonResourceDefinitionMap@@QEBAAEBV?$vector@UMolangVariableSettings@@V?$allocator@UMolangVariableSettings@@@std@@@std@@XZ
    MCAPI std::vector<struct MolangVariableSettings> const& getVariableSettings() const;

    // symbol: ?isCommonResourceDefinitionMapEmpty@CommonResourceDefinitionMap@@QEBA_NXZ
    MCAPI bool isCommonResourceDefinitionMapEmpty() const;

    // symbol:
    // ?mergeActorAnimateScriptArray@CommonResourceDefinitionMap@@QEAAXAEBV?$vector@UNamedMolangScript@@V?$allocator@UNamedMolangScript@@@std@@@std@@@Z
    MCAPI void mergeActorAnimateScriptArray(std::vector<struct NamedMolangScript> const& actorAnimateScriptArray);

    // symbol: ?mergeAnimation@CommonResourceDefinitionMap@@QEAAXAEBVHashedString@@VActorSkeletalAnimationPtr@@@Z
    MCAPI void mergeAnimation(class HashedString const& name, class ActorSkeletalAnimationPtr animationPtr);

    // symbol:
    // ?mergeAnimationController@CommonResourceDefinitionMap@@QEAAXAEBVHashedString@@VActorAnimationControllerPtr@@@Z
    MCAPI void
    mergeAnimationController(class HashedString const& name, class ActorAnimationControllerPtr animationControllerPtr);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getAnimationResourceDefinitionLock@CommonResourceDefinitionMap@@CAAEAVrecursive_mutex@std@@XZ
    MCAPI static std::recursive_mutex& _getAnimationResourceDefinitionLock();

    // NOLINTEND
};
