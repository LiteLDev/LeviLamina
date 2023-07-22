/**
 * @file  AnimationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimationComponent.
 *
 */
class AnimationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONCOMPONENT
public:
    class AnimationComponent& operator=(class AnimationComponent const &) = delete;
    AnimationComponent(class AnimationComponent const &) = delete;
    AnimationComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0AnimationComponent\@\@QEAA\@W4AnimationComponentGroupType\@\@AEBVAnimationComponentID\@\@\@Z
     */
    MCAPI AnimationComponent(enum class AnimationComponentGroupType, class AnimationComponentID const &);
    /**
     * @symbol  ?applyAnimations\@AnimationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void applyAnimations(bool);
    /**
     * @symbol  ?createAnimationPlayer\@AnimationComponent\@\@QEAA?AV?$shared_ptr\@VActorAnimationPlayer\@\@\@std\@\@AEBVHashedString\@\@AEBVExpressionNode\@\@AEAV?$set\@VHashedString\@\@U?$hash\@VHashedString\@\@\@std\@\@V?$allocator\@VHashedString\@\@\@3\@\@3\@\@Z
     */
    MCAPI class std::shared_ptr<class ActorAnimationPlayer> createAnimationPlayer(class HashedString const &, class ExpressionNode const &, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>> &);
    /**
     * @symbol  ?getAllBoneOrientations\@AnimationComponent\@\@QEAAAEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<enum class SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum class SkeletalHierarchyIndex>, struct std::equal_to<enum class SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum class SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> & getAllBoneOrientations();
    /**
     * @symbol  ?getAnimationComponentInitFunction\@AnimationComponent\@\@QEBAAEBV?$function\@$$A6AXAEAVActorAnimationPlayer\@\@\@Z\@std\@\@XZ
     */
    MCAPI class std::function<void (class ActorAnimationPlayer &)> const & getAnimationComponentInitFunction() const;
    /**
     * @symbol  ?getBoneOrientations\@AnimationComponent\@\@QEAAPEAV?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@W4SkeletalHierarchyIndex\@\@_N\@Z
     */
    MCAPI std::vector<class BoneOrientation> * getBoneOrientations(enum class SkeletalHierarchyIndex, bool);
    /**
     * @symbol  ?getCurrentAnimationControllerStatePlayer\@AnimationComponent\@\@QEBA?BV?$shared_ptr\@VActorAnimationControllerStatePlayer\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ActorAnimationControllerStatePlayer> const getCurrentAnimationControllerStatePlayer() const;
    /**
     * @symbol  ?getLocator\@AnimationComponent\@\@QEAAPEAVModelPartLocator\@\@AEB_K\@Z
     */
    MCAPI class ModelPartLocator * getLocator(unsigned __int64 const &);
    /**
     * @symbol  ?getRenderParams\@AnimationComponent\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams & getRenderParams();
    /**
     * @symbol  ?initInstanceSpecificAnimationData\@AnimationComponent\@\@QEAAXPEAVMolangVariableMap\@\@\@Z
     */
    MCAPI void initInstanceSpecificAnimationData(class MolangVariableMap *);
    /**
     * @symbol  ?initializeServerAnimationComponent\@AnimationComponent\@\@QEAAXAEAVActor\@\@V?$shared_ptr\@VCommonResourceDefinitionMap\@\@\@std\@\@V?$function\@$$A6AXAEAVActorAnimationPlayer\@\@\@Z\@4\@\@Z
     */
    MCAPI void initializeServerAnimationComponent(class Actor &, class std::shared_ptr<class CommonResourceDefinitionMap>, class std::function<void (class ActorAnimationPlayer &)>);
    /**
     * @symbol  ?isInitialized\@AnimationComponent\@\@QEAA_NXZ
     */
    MCAPI bool isInitialized();
    /**
     * @symbol  ?serverUpdate\@AnimationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void serverUpdate(class Actor &);
    /**
     * @symbol  ?setCurrentAnimationControllerStatePlayer\@AnimationComponent\@\@QEAAXV?$shared_ptr\@VActorAnimationControllerStatePlayer\@\@\@std\@\@\@Z
     */
    MCAPI void setCurrentAnimationControllerStatePlayer(class std::shared_ptr<class ActorAnimationControllerStatePlayer>);
    /**
     * @symbol  ?setDirty\@AnimationComponent\@\@QEAAXXZ
     */
    MCAPI void setDirty();
    /**
     * @symbol  ?setLastReloadInitTimeStampClient\@AnimationComponent\@\@QEAAX_K\@Z
     */
    MCAPI void setLastReloadInitTimeStampClient(unsigned __int64);
    /**
     * @symbol  ?setupDeltaTimeAndLifeTimeParams\@AnimationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setupDeltaTimeAndLifeTimeParams(bool);
    /**
     * @symbol  ?shouldReloadBasedOnLastReloadInitTimeStamp\@AnimationComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldReloadBasedOnLastReloadInitTimeStamp() const;
    /**
     * @symbol  ?usesLastReloadInitTimeStampClient\@AnimationComponent\@\@QEBA_NXZ
     */
    MCAPI bool usesLastReloadInitTimeStampClient() const;
    /**
     * @symbol  ??1AnimationComponent\@\@QEAA\@XZ
     */
    MCAPI ~AnimationComponent();
    /**
     * @symbol  ?getReloadTimeStampClient\@AnimationComponent\@\@SA_KXZ
     */
    MCAPI static unsigned __int64 getReloadTimeStampClient();
    /**
     * @symbol  ?incrementCurrentServerFrameIndex\@AnimationComponent\@\@SAXXZ
     */
    MCAPI static void incrementCurrentServerFrameIndex();

//private:

private:
    /**
     * @symbol  ?mClientFrameIndex\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static struct std::atomic<__int64> mClientFrameIndex;
    /**
     * @symbol  ?mReloadTimeStampClient\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static struct std::atomic<__int64> mReloadTimeStampClient;
    /**
     * @symbol  ?mServerFrameIndex\@AnimationComponent\@\@0U?$atomic\@_J\@std\@\@A
     */
    MCAPI static struct std::atomic<__int64> mServerFrameIndex;

};