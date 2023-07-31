#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationControllerPlayer {

public:
    // prevent constructor by default
    ActorAnimationControllerPlayer& operator=(ActorAnimationControllerPlayer const&) = delete;
    ActorAnimationControllerPlayer(ActorAnimationControllerPlayer const&)            = delete;
    ActorAnimationControllerPlayer()                                                 = delete;

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
     * ?applyToPose\@ActorAnimationControllerPlayer\@\@UEAAXAEAVRenderParams\@\@AEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@M\@Z
     */
    virtual void applyToPose(
        class RenderParams&,
        std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&,
        float
    );
    /**
     * @vftbl 2
     * @symbol ?resetAnimation\@ActorAnimationControllerPlayer\@\@UEAAXXZ
     */
    virtual void resetAnimation();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?bindParticleEffects\@ActorAnimationControllerPlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const&);
    /**
     * @vftbl 5
     * @symbol
     * ?bindSoundEffects\@ActorAnimationControllerPlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const&);
    /**
     * @vftbl 6
     * @symbol ?hasAnimationFinished\@ActorAnimationControllerPlayer\@\@UEBA_NXZ
     */
    virtual bool hasAnimationFinished() const;
    /**
     * @vftbl 7
     * @symbol
     * ?findAnimation\@ActorAnimationControllerPlayer\@\@UEAA?AV?$shared_ptr\@VActorAnimationPlayer\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&);
    /**
     * @vftbl 8
     * @symbol ?getAnimationType\@ActorAnimationControllerPlayer\@\@UEBA?AW4ActorAnimationType\@\@XZ
     */
    virtual enum class ActorAnimationType getAnimationType() const;
    /**
     * @vftbl 9
     * @symbol ?getRawName\@ActorAnimationControllerPlayer\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getRawName() const;
    /**
     * @symbol
     * ??0ActorAnimationControllerPlayer\@\@QEAA\@AEBVHashedString\@\@AEBVActorAnimationControllerPtr\@\@AEAVAnimationComponent\@\@AEBVExpressionNode\@\@AEAV?$set\@VHashedString\@\@U?$hash\@VHashedString\@\@\@std\@\@V?$allocator\@VHashedString\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI
    ActorAnimationControllerPlayer(class HashedString const&, class ActorAnimationControllerPtr const&, class AnimationComponent&, class ExpressionNode const&, std::set<class HashedString, std::hash<class HashedString>, std::allocator<class HashedString>>&);
    /**
     * @symbol
     * ?applyStateAnimationToPose\@ActorAnimationControllerPlayer\@\@QEAAXAEAVRenderParams\@\@AEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@M\@Z
     */
    MCAPI void applyStateAnimationToPose(
        class RenderParams&,
        std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&,
        float
    );
    /**
     * @symbol
     * ?blendViaShortestPath\@ActorAnimationControllerPlayer\@\@QEAAXAEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@00MM\@Z
     */
    MCAPI void blendViaShortestPath(
        std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&,
        std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&,
        std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&,
        float,
        float
    );
    // NOLINTEND
};
