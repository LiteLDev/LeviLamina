#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationPlayer {

public:
    // prevent constructor by default
    ActorAnimationPlayer& operator=(ActorAnimationPlayer const&) = delete;
    ActorAnimationPlayer(ActorAnimationPlayer const&)            = delete;
    ActorAnimationPlayer()                                       = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONPLAYER
    /**
     * @symbol
     * ?bindParticleEffects\@ActorAnimationPlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCVAPI void bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const&);
    /**
     * @symbol
     * ?bindSoundEffects\@ActorAnimationPlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCVAPI void bindSoundEffects(std::unordered_map<class HashedString, std::string> const&);
    /**
     * @symbol ?buildBoneToPartMapping\@ActorAnimationPlayer\@\@UEAAXAEAVAnimationComponent\@\@\@Z
     */
    MCVAPI void buildBoneToPartMapping(class AnimationComponent&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorAnimationPlayer();
#endif
    // NOLINTEND
};
