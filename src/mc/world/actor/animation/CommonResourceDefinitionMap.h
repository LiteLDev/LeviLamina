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
