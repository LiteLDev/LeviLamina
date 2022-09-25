/**
 * @file  BoneAnimation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoneAnimation.
 *
 */
class BoneAnimation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONEANIMATION
public:
    class BoneAnimation& operator=(class BoneAnimation const &) = delete;
    BoneAnimation(class BoneAnimation const &) = delete;
    BoneAnimation() = delete;
#endif

public:
    /**
     * @hash   1192005473
     * @symbol ?addAnimationChannel@BoneAnimation@@QEAAAEAVBoneAnimationChannel@@W4BoneTransformType@@@Z
     */
    MCAPI class BoneAnimationChannel & addAnimationChannel(enum BoneTransformType);
    /**
     * @hash   -1792765014
     * @symbol ?setRotationRelativeMode@BoneAnimation@@QEAAXW4BoneAnimationRelativeMode@@@Z
     */
    MCAPI void setRotationRelativeMode(enum BoneAnimationRelativeMode);

};