#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommonResourceDefinitionMap {
public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&);
    CommonResourceDefinitionMap(CommonResourceDefinitionMap const&);

public:
    // NOLINTBEGIN
    MCAPI CommonResourceDefinitionMap();

    MCAPI bool isCommonResourceDefinitionMapEmpty() const;

    MCAPI void mergeActorAnimateScriptArray(std::vector<struct NamedMolangScript> const& actorAnimateScriptArray);

    MCAPI void mergeAnimation(class HashedString const& name, class ActorSkeletalAnimationPtr animationPtr);

    MCAPI void
    mergeAnimationController(class HashedString const& name, class ActorAnimationControllerPtr animationControllerPtr);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::recursive_mutex& _getAnimationResourceDefinitionLock();

    // NOLINTEND
};
