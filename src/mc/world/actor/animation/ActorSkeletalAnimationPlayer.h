#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorSkeletalAnimationPlayer {

public:
    // prevent constructor by default
    ActorSkeletalAnimationPlayer& operator=(ActorSkeletalAnimationPlayer const&) = delete;
    ActorSkeletalAnimationPlayer(ActorSkeletalAnimationPlayer const&)            = delete;
    ActorSkeletalAnimationPlayer()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?applyToPose\@ActorSkeletalAnimationPlayer\@\@UEAAXAEAVRenderParams\@\@AEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@M\@Z
     */
    virtual void applyToPose(
        class RenderParams&,
        class std::unordered_map<
            enum class SkeletalHierarchyIndex,
            std::vector<class BoneOrientation>,
            struct std::hash<enum class SkeletalHierarchyIndex>,
            struct std::equal_to<enum class SkeletalHierarchyIndex>,
            class std::allocator<
                struct std::pair<enum class SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>>&,
        float
    ); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?resetAnimation\@ActorSkeletalAnimationPlayer\@\@UEAAXXZ
     */
    virtual void resetAnimation(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?buildBoneToPartMapping\@ActorSkeletalAnimationPlayer\@\@UEAAXAEAVAnimationComponent\@\@\@Z
     */
    virtual void buildBoneToPartMapping(class AnimationComponent&); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?bindParticleEffects\@ActorSkeletalAnimationPlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void
    bindParticleEffects(class std::unordered_map<
                        class HashedString,
                        class HashedString,
                        struct std::hash<class HashedString>,
                        struct std::equal_to<class HashedString>,
                        class std::allocator<
                            struct std::pair<class HashedString const, class HashedString>>> const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?bindSoundEffects\@ActorSkeletalAnimationPlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void
    bindSoundEffects(class std::unordered_map<
                     class HashedString,
                     std::string,
                     struct std::hash<class HashedString>,
                     struct std::equal_to<class HashedString>,
                     class std::allocator<struct std::pair<class HashedString const, std::string>>> const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?hasAnimationFinished\@ActorSkeletalAnimationPlayer\@\@UEBA_NXZ
     */
    virtual bool hasAnimationFinished() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?findAnimation\@ActorSkeletalAnimationPlayer\@\@UEAA?AV?$shared_ptr\@VActorAnimationPlayer\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    virtual class std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getAnimationType\@ActorSkeletalAnimationPlayer\@\@UEBA?AW4ActorAnimationType\@\@XZ
     */
    virtual enum class ActorAnimationType getAnimationType() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getRawName\@ActorSkeletalAnimationPlayer\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getRawName() const; // NOLINT
    /**
     * @symbol
     * ??0ActorSkeletalAnimationPlayer\@\@QEAA\@AEBVHashedString\@\@VActorSkeletalAnimationPtr\@\@AEAVAnimationComponent\@\@AEBVExpressionNode\@\@\@Z
     */
    MCAPI
    ActorSkeletalAnimationPlayer(class HashedString const&, class ActorSkeletalAnimationPtr, class AnimationComponent&, class ExpressionNode const&); // NOLINT
};
