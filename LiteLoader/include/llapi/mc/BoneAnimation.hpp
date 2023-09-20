/**
 * @file  BoneAnimation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BoneAnimation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONEANIMATION
public:
    class BoneAnimation& operator=(class BoneAnimation const &) = delete;
    BoneAnimation(class BoneAnimation const &) = delete;
    BoneAnimation() = delete;
#endif

public:
    /**
     * @symbol ?addAnimationChannel\@BoneAnimation\@\@QEAAAEAVBoneAnimationChannel\@\@W4BoneTransformType\@\@\@Z
     */
    MCAPI class BoneAnimationChannel & addAnimationChannel(enum class BoneTransformType);
    /**
     * @symbol ?setRotationRelativeMode\@BoneAnimation\@\@QEAAXW4BoneAnimationRelativeMode\@\@\@Z
     */
    MCAPI void setRotationRelativeMode(enum class BoneAnimationRelativeMode);

};
