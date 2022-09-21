/**
 * @file  MC/BoneAnimationChannel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoneAnimationChannel.
 *
 */
class BoneAnimationChannel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONEANIMATIONCHANNEL
public:
    class BoneAnimationChannel& operator=(class BoneAnimationChannel const &) = delete;
    BoneAnimationChannel(class BoneAnimationChannel const &) = delete;
    BoneAnimationChannel() = delete;
#endif

public:
    /**
     * @hash   -1216953089
     * @symbol ?addKeyFrame@BoneAnimationChannel@@QEAAAEAVKeyFrameTransform@@M@Z
     */
    MCAPI class KeyFrameTransform & addKeyFrame(float);
    /**
     * @hash   1114951379
     * @symbol ?sortKeyFrames@BoneAnimationChannel@@QEAAXXZ
     */
    MCAPI void sortKeyFrames();

};