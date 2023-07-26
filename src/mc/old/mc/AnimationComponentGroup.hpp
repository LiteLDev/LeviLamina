/**
 * @file  AnimationComponentGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimationComponentGroup.
 *
 */
class AnimationComponentGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONCOMPONENTGROUP
public:
    class AnimationComponentGroup& operator=(class AnimationComponentGroup const &) = delete;
    AnimationComponentGroup(class AnimationComponentGroup const &) = delete;
    AnimationComponentGroup() = delete;
#endif

public:
    /**
     * @symbol  ?_getAllAnimationComponents\@AnimationComponentGroup\@\@SAAEAV?$unordered_map\@VAnimationComponentID\@\@V?$weak_ptr\@VAnimationComponent\@\@\@std\@\@U?$hash\@VAnimationComponentID\@\@\@3\@U?$equal_to\@VAnimationComponentID\@\@\@3\@V?$allocator\@U?$pair\@$$CBVAnimationComponentID\@\@V?$weak_ptr\@VAnimationComponent\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@W4AnimationComponentGroupType\@\@\@Z
     */
    MCAPI static class std::unordered_map<class AnimationComponentID, class std::weak_ptr<class AnimationComponent>, struct std::hash<class AnimationComponentID>, struct std::equal_to<class AnimationComponentID>, class std::allocator<struct std::pair<class AnimationComponentID const, class std::weak_ptr<class AnimationComponent>>>> & _getAllAnimationComponents(enum class AnimationComponentGroupType);
    /**
     * @symbol  ?getAnimationComponent\@AnimationComponentGroup\@\@SA?AV?$shared_ptr\@VAnimationComponent\@\@\@std\@\@W4AnimationComponentGroupType\@\@VAnimationComponentID\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class AnimationComponent> getAnimationComponent(enum class AnimationComponentGroupType, class AnimationComponentID);
    /**
     * @symbol  ?releaseAnimationComponent\@AnimationComponentGroup\@\@SAXW4AnimationComponentGroupType\@\@VAnimationComponentID\@\@\@Z
     */
    MCAPI static void releaseAnimationComponent(enum class AnimationComponentGroupType, class AnimationComponentID);

//private:
    /**
     * @symbol  ?_getAnimationComponentMapLock\@AnimationComponentGroup\@\@CAAEAVrecursive_mutex\@std\@\@XZ
     */
    MCAPI static class std::recursive_mutex & _getAnimationComponentMapLock();

private:

};