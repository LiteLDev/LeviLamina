#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorSkeletalAnimation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSKELETALANIMATION
public:
    ActorSkeletalAnimation& operator=(ActorSkeletalAnimation const&) = delete;
    ActorSkeletalAnimation(ActorSkeletalAnimation const&)            = delete;
    ActorSkeletalAnimation()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ??0ActorSkeletalAnimation\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI ActorSkeletalAnimation(std::string const&, std::string const&);
    /**
     * @symbol
     * ?addActorEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorAnimationEvent\@\@MAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CurrentCmdVersion\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI class ActorAnimationEvent&
    addActorEvent(float, std::string const&, enum class CurrentCmdVersion, enum class MolangVersion);
    /**
     * @symbol
     * ?addBoneAnimation\@ActorSkeletalAnimation\@\@QEAAAEAVBoneAnimation\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BoneAnimation& addBoneAnimation(std::string const&);
    /**
     * @symbol ?addParticleEffectEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorParticleEffectEvent\@\@M\@Z
     */
    MCAPI class ActorParticleEffectEvent& addParticleEffectEvent(float);
    /**
     * @symbol ?addSoundEffectEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorSoundEffectEvent\@\@M\@Z
     */
    MCAPI class ActorSoundEffectEvent& addSoundEffectEvent(float);
    /**
     * @symbol
     * ?removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion();
};
