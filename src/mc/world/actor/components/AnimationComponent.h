#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationComponent {

public:
    // prevent constructor by default
    AnimationComponent& operator=(AnimationComponent const&) = delete;
    AnimationComponent(AnimationComponent const&)            = delete;
    AnimationComponent()                                     = delete;

public:
    /**
     * @symbol ??0AnimationComponent\@\@QEAA\@W4AnimationComponentGroupType\@\@AEBVAnimationComponentID\@\@\@Z
     */
    MCAPI AnimationComponent(enum class AnimationComponentGroupType, class AnimationComponentID const&); // NOLINT
    /**
     * @symbol ?applyAnimations\@AnimationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void applyAnimations(bool); // NOLINT
    /**
     * @symbol
     * ?createAnimationPlayer\@AnimationComponent\@\@QEAA?AV?$shared_ptr\@VActorAnimationPlayer\@\@\@std\@\@AEBVHashedString\@\@AEBVExpressionNode\@\@AEAV?$set\@VHashedString\@\@U?$hash\@VHashedString\@\@\@std\@\@V?$allocator\@VHashedString\@\@\@3\@\@3\@\@Z
     */
    MCAPI class std::shared_ptr<class ActorAnimationPlayer>
    createAnimationPlayer(class HashedString const&, class ExpressionNode const&, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>>&); // NOLINT
    /**
     * @symbol
     * ?getAllBoneOrientations\@AnimationComponent\@\@QEAAAEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        enum class SkeletalHierarchyIndex,
        std::vector<class BoneOrientation>,
        struct std::hash<enum class SkeletalHierarchyIndex>,
        struct std::equal_to<enum class SkeletalHierarchyIndex>,
        class std::allocator<
            struct std::pair<enum class SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>>&
    getAllBoneOrientations(); // NOLINT
    /**
     * @symbol
     * ?getAnimationComponentInitFunction\@AnimationComponent\@\@QEBAAEBV?$function\@$$A6AXAEAVActorAnimationPlayer\@\@\@Z\@std\@\@XZ
     */
    MCAPI class std::function<void(class ActorAnimationPlayer&)> const&
    getAnimationComponentInitFunction() const; // NOLINT
    /**
     * @symbol
     * ?getBoneOrientations\@AnimationComponent\@\@QEAAPEAV?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@W4SkeletalHierarchyIndex\@\@_N\@Z
     */
    MCAPI std::vector<class BoneOrientation>* getBoneOrientations(enum class SkeletalHierarchyIndex, bool); // NOLINT
    /**
     * @symbol
     * ?getCurrentAnimationControllerStatePlayer\@AnimationComponent\@\@QEBA?BV?$shared_ptr\@VActorAnimationControllerStatePlayer\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ActorAnimationControllerStatePlayer> const
    getCurrentAnimationControllerStatePlayer() const; // NOLINT
    /**
     * @symbol ?getLocator\@AnimationComponent\@\@QEAAPEAVModelPartLocator\@\@AEB_K\@Z
     */
    MCAPI class ModelPartLocator* getLocator(unsigned __int64 const&); // NOLINT
    /**
     * @symbol ?getRenderParams\@AnimationComponent\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams& getRenderParams(); // NOLINT
    /**
     * @symbol ?initInstanceSpecificAnimationData\@AnimationComponent\@\@QEAAXPEAVMolangVariableMap\@\@\@Z
     */
    MCAPI void initInstanceSpecificAnimationData(class MolangVariableMap*); // NOLINT
    /**
     * @symbol
     * ?initializeServerAnimationComponent\@AnimationComponent\@\@QEAAXAEAVActor\@\@V?$shared_ptr\@VCommonResourceDefinitionMap\@\@\@std\@\@V?$function\@$$A6AXAEAVActorAnimationPlayer\@\@\@Z\@4\@\@Z
     */
    MCAPI void
    initializeServerAnimationComponent(class Actor&, class std::shared_ptr<class CommonResourceDefinitionMap>, class std::function<void(class ActorAnimationPlayer&)>); // NOLINT
    /**
     * @symbol ?isInitialized\@AnimationComponent\@\@QEAA_NXZ
     */
    MCAPI bool isInitialized(); // NOLINT
    /**
     * @symbol ?serverUpdate\@AnimationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void serverUpdate(class Actor&); // NOLINT
    /**
     * @symbol
     * ?setCurrentAnimationControllerStatePlayer\@AnimationComponent\@\@QEAAXV?$shared_ptr\@VActorAnimationControllerStatePlayer\@\@\@std\@\@\@Z
     */
    MCAPI void setCurrentAnimationControllerStatePlayer(class std::shared_ptr<
                                                        class ActorAnimationControllerStatePlayer>); // NOLINT
    /**
     * @symbol ?setDirty\@AnimationComponent\@\@QEAAXXZ
     */
    MCAPI void setDirty(); // NOLINT
    /**
     * @symbol ?setLastReloadInitTimeStampClient\@AnimationComponent\@\@QEAAX_K\@Z
     */
    MCAPI void setLastReloadInitTimeStampClient(unsigned __int64); // NOLINT
    /**
     * @symbol ?setupDeltaTimeAndLifeTimeParams\@AnimationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setupDeltaTimeAndLifeTimeParams(bool); // NOLINT
    /**
     * @symbol ?shouldReloadBasedOnLastReloadInitTimeStamp\@AnimationComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldReloadBasedOnLastReloadInitTimeStamp() const; // NOLINT
    /**
     * @symbol ?usesLastReloadInitTimeStampClient\@AnimationComponent\@\@QEBA_NXZ
     */
    MCAPI bool usesLastReloadInitTimeStampClient() const; // NOLINT
    /**
     * @symbol ??1AnimationComponent\@\@QEAA\@XZ
     */
    MCAPI ~AnimationComponent(); // NOLINT
    /**
     * @symbol ?getReloadTimeStampClient\@AnimationComponent\@\@SA_KXZ
     */
    MCAPI static unsigned __int64 getReloadTimeStampClient(); // NOLINT
    /**
     * @symbol ?incrementCurrentServerFrameIndex\@AnimationComponent\@\@SAXXZ
     */
    MCAPI static void incrementCurrentServerFrameIndex(); // NOLINT

    // private:

private:
    /**
     * @symbol ?mClientFrameIndex\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static struct std::atomic<__int64> mClientFrameIndex; // NOLINT
    /**
     * @symbol ?mReloadTimeStampClient\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static struct std::atomic<__int64> mReloadTimeStampClient; // NOLINT
    /**
     * @symbol ?mServerFrameIndex\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static struct std::atomic<__int64> mServerFrameIndex; // NOLINT
};
