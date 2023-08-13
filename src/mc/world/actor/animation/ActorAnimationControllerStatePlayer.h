#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ActorAnimationPlayer.h"

class ActorAnimationControllerStatePlayer : public ::ActorAnimationPlayer {

public:
    // prevent constructor by default
    ActorAnimationControllerStatePlayer& operator=(ActorAnimationControllerStatePlayer const&) = delete;
    ActorAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const&)            = delete;
    ActorAnimationControllerStatePlayer()                                                      = delete;

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
     * ?applyToPose\@ActorAnimationControllerStatePlayer\@\@UEAAXAEAVRenderParams\@\@AEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@M\@Z
     */
    virtual void applyToPose(
        class RenderParams&,
        std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&,
        float
    );
    /**
     * @vftbl 2
     * @symbol ?resetAnimation\@ActorAnimationControllerStatePlayer\@\@UEAAXXZ
     */
    virtual void resetAnimation();
    /**
     * @vftbl 4
     * @symbol
     * ?bindParticleEffects\@ActorAnimationControllerStatePlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const&);
    /**
     * @vftbl 5
     * @symbol
     * ?bindSoundEffects\@ActorAnimationControllerStatePlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const&);
    /**
     * @vftbl 6
     * @symbol ?hasAnimationFinished\@ActorAnimationControllerStatePlayer\@\@UEBA_NXZ
     */
    virtual bool hasAnimationFinished() const;
    /**
     * @vftbl 7
     * @symbol
     * ?findAnimation\@ActorAnimationControllerStatePlayer\@\@UEAA?AV?$shared_ptr\@VActorAnimationPlayer\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&);
    /**
     * @vftbl 8
     * @symbol ?getAnimationType\@ActorAnimationControllerStatePlayer\@\@UEBA?AW4ActorAnimationType\@\@XZ
     */
    virtual enum class ActorAnimationType getAnimationType() const;
    /**
     * @vftbl 9
     * @symbol ?getRawName\@ActorAnimationControllerStatePlayer\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getRawName() const;
    /**
     * @symbol
     * ??0ActorAnimationControllerStatePlayer\@\@QEAA\@AEBVHashedString\@\@AEAVActorAnimationControllerPlayer\@\@V?$shared_ptr\@VActorAnimationControllerState\@\@\@std\@\@AEAVAnimationComponent\@\@AEBVExpressionNode\@\@AEAV?$set\@VHashedString\@\@U?$hash\@VHashedString\@\@\@std\@\@V?$allocator\@VHashedString\@\@\@3\@\@4\@\@Z
     */
    MCAPI
    ActorAnimationControllerStatePlayer(class HashedString const&, class ActorAnimationControllerPlayer&, std::shared_ptr<class ActorAnimationControllerState>, class AnimationComponent&, class ExpressionNode const&, std::set<class HashedString, std::hash<class HashedString>, std::allocator<class HashedString>>&);
    /**
     * @symbol ?allAnimationsFinished\@ActorAnimationControllerStatePlayer\@\@QEBA_NXZ
     */
    MCAPI bool allAnimationsFinished() const;
    /**
     * @symbol ?anyAnimationsFinished\@ActorAnimationControllerStatePlayer\@\@QEBA_NXZ
     */
    MCAPI bool anyAnimationsFinished() const;
    // NOLINTEND
};
