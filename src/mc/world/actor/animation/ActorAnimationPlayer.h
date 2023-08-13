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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?applyToPose\@ActorSkeletalAnimationPlayer\@\@UEAAXAEAVRenderParams\@\@AEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@M\@Z
     */
    virtual void applyToPose(
        class RenderParams&,
        std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&,
        float
    ) = 0;
    /**
     * @vftbl 2
     * @symbol ?resetAnimation\@ActorSkeletalAnimationPlayer\@\@UEAAXXZ
     */
    virtual void resetAnimation() = 0;
    /**
     * @vftbl 3
     * @symbol ?buildBoneToPartMapping\@ActorAnimationPlayer\@\@UEAAXAEAVAnimationComponent\@\@\@Z
     */
    virtual void buildBoneToPartMapping(class AnimationComponent&);
    /**
     * @vftbl 4
     * @symbol
     * ?bindParticleEffects\@ActorAnimationPlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const&);
    /**
     * @vftbl 5
     * @symbol
     * ?bindSoundEffects\@ActorAnimationPlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const&);
    /**
     * @vftbl 6
     * @symbol ?hasAnimationFinished\@ActorSkeletalAnimationPlayer\@\@UEBA_NXZ
     */
    virtual bool hasAnimationFinished() const = 0;
    /**
     * @vftbl 7
     * @symbol
     * ?findAnimation\@ActorSkeletalAnimationPlayer\@\@UEAA?AV?$shared_ptr\@VActorAnimationPlayer\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&) = 0;
    /**
     * @vftbl 8
     * @symbol ?getAnimationType\@ActorSkeletalAnimationPlayer\@\@UEBA?AW4ActorAnimationType\@\@XZ
     */
    virtual enum class ActorAnimationType getAnimationType() const = 0;
    /**
     * @vftbl 9
     * @symbol ?getRawName\@ActorSkeletalAnimationPlayer\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getRawName() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONPLAYER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorAnimationPlayer();
#endif
    // NOLINTEND
};
