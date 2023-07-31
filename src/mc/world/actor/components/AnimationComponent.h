#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationComponent {

public:
    // prevent constructor by default
    AnimationComponent& operator=(AnimationComponent const&) = delete;
    AnimationComponent(AnimationComponent const&)            = delete;
    AnimationComponent()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0AnimationComponent\@\@QEAA\@W4AnimationComponentGroupType\@\@AEBVAnimationComponentID\@\@\@Z
     */
    MCAPI AnimationComponent(enum class AnimationComponentGroupType, class AnimationComponentID const&);
    /**
     * @symbol ?applyAnimations\@AnimationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void applyAnimations(bool);
    /**
     * @symbol
     * ?createAnimationPlayer\@AnimationComponent\@\@QEAA?AV?$shared_ptr\@VActorAnimationPlayer\@\@\@std\@\@AEBVHashedString\@\@AEBVExpressionNode\@\@AEAV?$set\@VHashedString\@\@U?$hash\@VHashedString\@\@\@std\@\@V?$allocator\@VHashedString\@\@\@3\@\@3\@\@Z
     */
    MCAPI std::shared_ptr<class ActorAnimationPlayer>
    createAnimationPlayer(class HashedString const&, class ExpressionNode const&, std::set<class HashedString, std::hash<class HashedString>, std::allocator<class HashedString>>&);
    /**
     * @symbol
     * ?getAllBoneOrientations\@AnimationComponent\@\@QEAAAEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&
          getAllBoneOrientations();
    /**
     * @symbol
     * ?getAnimationComponentInitFunction\@AnimationComponent\@\@QEBAAEBV?$function\@$$A6AXAEAVActorAnimationPlayer\@\@\@Z\@std\@\@XZ
     */
    MCAPI std::function<void(class ActorAnimationPlayer&)> const& getAnimationComponentInitFunction() const;
    /**
     * @symbol
     * ?getBoneOrientations\@AnimationComponent\@\@QEAAPEAV?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@W4SkeletalHierarchyIndex\@\@_N\@Z
     */
    MCAPI std::vector<class BoneOrientation>* getBoneOrientations(enum class SkeletalHierarchyIndex, bool);
    /**
     * @symbol
     * ?getCurrentAnimationControllerStatePlayer\@AnimationComponent\@\@QEBA?BV?$shared_ptr\@VActorAnimationControllerStatePlayer\@\@\@std\@\@XZ
     */
    MCAPI std::shared_ptr<class ActorAnimationControllerStatePlayer> const
          getCurrentAnimationControllerStatePlayer() const;
    /**
     * @symbol ?getLocator\@AnimationComponent\@\@QEAAPEAVModelPartLocator\@\@AEB_K\@Z
     */
    MCAPI class ModelPartLocator* getLocator(uint64_t const&);
    /**
     * @symbol ?getRenderParams\@AnimationComponent\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams& getRenderParams();
    /**
     * @symbol ?initInstanceSpecificAnimationData\@AnimationComponent\@\@QEAAXPEAVMolangVariableMap\@\@\@Z
     */
    MCAPI void initInstanceSpecificAnimationData(class MolangVariableMap*);
    /**
     * @symbol
     * ?initializeServerAnimationComponent\@AnimationComponent\@\@QEAAXAEAVActor\@\@V?$shared_ptr\@VCommonResourceDefinitionMap\@\@\@std\@\@V?$function\@$$A6AXAEAVActorAnimationPlayer\@\@\@Z\@4\@\@Z
     */
    MCAPI void
    initializeServerAnimationComponent(class Actor&, std::shared_ptr<class CommonResourceDefinitionMap>, std::function<void(class ActorAnimationPlayer&)>);
    /**
     * @symbol ?isInitialized\@AnimationComponent\@\@QEAA_NXZ
     */
    MCAPI bool isInitialized();
    /**
     * @symbol ?serverUpdate\@AnimationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void serverUpdate(class Actor&);
    /**
     * @symbol
     * ?setCurrentAnimationControllerStatePlayer\@AnimationComponent\@\@QEAAXV?$shared_ptr\@VActorAnimationControllerStatePlayer\@\@\@std\@\@\@Z
     */
    MCAPI void setCurrentAnimationControllerStatePlayer(std::shared_ptr<class ActorAnimationControllerStatePlayer>);
    /**
     * @symbol ?setDirty\@AnimationComponent\@\@QEAAXXZ
     */
    MCAPI void setDirty();
    /**
     * @symbol ?setLastReloadInitTimeStampClient\@AnimationComponent\@\@QEAAX_K\@Z
     */
    MCAPI void setLastReloadInitTimeStampClient(uint64_t);
    /**
     * @symbol ?setupDeltaTimeAndLifeTimeParams\@AnimationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setupDeltaTimeAndLifeTimeParams(bool);
    /**
     * @symbol ?shouldReloadBasedOnLastReloadInitTimeStamp\@AnimationComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldReloadBasedOnLastReloadInitTimeStamp() const;
    /**
     * @symbol ?usesLastReloadInitTimeStampClient\@AnimationComponent\@\@QEBA_NXZ
     */
    MCAPI bool usesLastReloadInitTimeStampClient() const;
    /**
     * @symbol ??1AnimationComponent\@\@QEAA\@XZ
     */
    MCAPI ~AnimationComponent();
    /**
     * @symbol ?getReloadTimeStampClient\@AnimationComponent\@\@SA_KXZ
     */
    MCAPI static uint64_t getReloadTimeStampClient();
    /**
     * @symbol ?incrementCurrentServerFrameIndex\@AnimationComponent\@\@SAXXZ
     */
    MCAPI static void incrementCurrentServerFrameIndex();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mClientFrameIndex\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static std::atomic<int64_t> mClientFrameIndex;
    /**
     * @symbol ?mReloadTimeStampClient\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static std::atomic<int64_t> mReloadTimeStampClient;
    /**
     * @symbol ?mServerFrameIndex\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static std::atomic<int64_t> mServerFrameIndex;
    // NOLINTEND
};
