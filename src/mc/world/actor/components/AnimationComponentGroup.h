#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AnimationComponentGroupType.h"

class AnimationComponentGroup {
public:
    // prevent constructor by default
    AnimationComponentGroup& operator=(AnimationComponentGroup const&);
    AnimationComponentGroup(AnimationComponentGroup const&);
    AnimationComponentGroup();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getAllAnimationComponents@AnimationComponentGroup@@SAAEAV?$unordered_map@VAnimationComponentID@@V?$weak_ptr@VAnimationComponent@@@std@@U?$hash@VAnimationComponentID@@@3@U?$equal_to@VAnimationComponentID@@@3@V?$allocator@U?$pair@$$CBVAnimationComponentID@@V?$weak_ptr@VAnimationComponent@@@std@@@std@@@3@@std@@W4AnimationComponentGroupType@@@Z
    MCAPI static std::unordered_map<class AnimationComponentID, std::weak_ptr<class AnimationComponent>>&
        _getAllAnimationComponents(::AnimationComponentGroupType);

    // symbol:
    // ?getAnimationComponent@AnimationComponentGroup@@SA?AV?$shared_ptr@VAnimationComponent@@@std@@W4AnimationComponentGroupType@@VAnimationComponentID@@@Z
    MCAPI static std::shared_ptr<class AnimationComponent>
    getAnimationComponent(::AnimationComponentGroupType, class AnimationComponentID ownerUUID);

    // symbol:
    // ?releaseAnimationComponent@AnimationComponentGroup@@SAXW4AnimationComponentGroupType@@VAnimationComponentID@@@Z
    MCAPI static void releaseAnimationComponent(::AnimationComponentGroupType, class AnimationComponentID ownerUUID);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getAnimationComponentMapLock@AnimationComponentGroup@@CAAEAVrecursive_mutex@std@@XZ
    MCAPI static std::recursive_mutex& _getAnimationComponentMapLock();

    // NOLINTEND
};
