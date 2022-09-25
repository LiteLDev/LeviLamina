/**
 * @file  AnimationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -27079729
     * @symbol ??0AnimationComponent@@QEAA@W4AnimationComponentGroupType@@AEBVAnimationComponentID@@@Z
     */
    MCAPI AnimationComponent(enum AnimationComponentGroupType, class AnimationComponentID const &);
    /**
     * @hash   -1656359356
     * @symbol ?applyAnimations@AnimationComponent@@QEAAX_N@Z
     */
    MCAPI void applyAnimations(bool);
    /**
     * @hash   966500785
     * @symbol ?createAnimationPlayer@AnimationComponent@@QEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@AEBVExpressionNode@@AEAV?$set@VHashedString@@U?$hash@VHashedString@@@std@@V?$allocator@VHashedString@@@3@@3@@Z
     */
    MCAPI class std::shared_ptr<class ActorAnimationPlayer> createAnimationPlayer(class HashedString const &, class ExpressionNode const &, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>> &);
    /**
     * @hash   1954174645
     * @symbol ?getAllBoneOrientations@AnimationComponent@@QEAAAEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@XZ
     */
    MCAPI class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> & getAllBoneOrientations();
    /**
     * @hash   -1430515381
     * @symbol ?getAnimationComponentInitFunction@AnimationComponent@@QEBAAEBV?$function@$$A6AXAEAVActorAnimationPlayer@@@Z@std@@XZ
     */
    MCAPI class std::function<void (class ActorAnimationPlayer &)> const & getAnimationComponentInitFunction() const;
    /**
     * @hash   1684869517
     * @symbol ?getBoneOrientations@AnimationComponent@@QEAAPEAV?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@W4SkeletalHierarchyIndex@@_N@Z
     */
    MCAPI std::vector<class BoneOrientation> * getBoneOrientations(enum SkeletalHierarchyIndex, bool);
    /**
     * @hash   -1488760491
     * @symbol ?getCurrentAnimationControllerStatePlayer@AnimationComponent@@QEBA?BV?$shared_ptr@VActorAnimationControllerStatePlayer@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class ActorAnimationControllerStatePlayer> const getCurrentAnimationControllerStatePlayer() const;
    /**
     * @hash   -316127800
     * @symbol ?getLocator@AnimationComponent@@QEAAPEAVModelPartLocator@@AEB_K@Z
     */
    MCAPI class ModelPartLocator * getLocator(unsigned __int64 const &);
    /**
     * @hash   -657184616
     * @symbol ?getRenderParams@AnimationComponent@@QEAAAEAVRenderParams@@XZ
     */
    MCAPI class RenderParams & getRenderParams();
    /**
     * @hash   -1335303053
     * @symbol ?initInstanceSpecificAnimationData@AnimationComponent@@QEAAXPEAVMolangVariableMap@@@Z
     */
    MCAPI void initInstanceSpecificAnimationData(class MolangVariableMap *);
    /**
     * @hash   -1066223985
     * @symbol ?initializeServerAnimationComponent@AnimationComponent@@QEAAXAEAVActor@@V?$shared_ptr@VCommonResourceDefinitionMap@@@std@@V?$function@$$A6AXAEAVActorAnimationPlayer@@@Z@4@@Z
     */
    MCAPI void initializeServerAnimationComponent(class Actor &, class std::shared_ptr<class CommonResourceDefinitionMap>, class std::function<void (class ActorAnimationPlayer &)>);
    /**
     * @hash   -2019629614
     * @symbol ?isInitialized@AnimationComponent@@QEAA_NXZ
     */
    MCAPI bool isInitialized();
    /**
     * @hash   664220298
     * @symbol ?serverUpdate@AnimationComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void serverUpdate(class Actor &);
    /**
     * @hash   2117978355
     * @symbol ?setCurrentAnimationControllerStatePlayer@AnimationComponent@@QEAAXV?$shared_ptr@VActorAnimationControllerStatePlayer@@@std@@@Z
     */
    MCAPI void setCurrentAnimationControllerStatePlayer(class std::shared_ptr<class ActorAnimationControllerStatePlayer>);
    /**
     * @hash   574654005
     * @symbol ?setDirty@AnimationComponent@@QEAAXXZ
     */
    MCAPI void setDirty();
    /**
     * @hash   -2065536853
     * @symbol ?setLastReloadInitTimeStampClient@AnimationComponent@@QEAAX_K@Z
     */
    MCAPI void setLastReloadInitTimeStampClient(unsigned __int64);
    /**
     * @hash   418904514
     * @symbol ?setupDeltaTimeAndLifeTimeParams@AnimationComponent@@QEAAX_N@Z
     */
    MCAPI void setupDeltaTimeAndLifeTimeParams(bool);
    /**
     * @hash   1423273470
     * @symbol ?shouldReloadBasedOnLastReloadInitTimeStamp@AnimationComponent@@QEBA_NXZ
     */
    MCAPI bool shouldReloadBasedOnLastReloadInitTimeStamp() const;
    /**
     * @hash   -151311846
     * @symbol ?usesLastReloadInitTimeStampClient@AnimationComponent@@QEBA_NXZ
     */
    MCAPI bool usesLastReloadInitTimeStampClient() const;
    /**
     * @hash   -1669776221
     * @symbol ??1AnimationComponent@@QEAA@XZ
     */
    MCAPI ~AnimationComponent();
    /**
     * @hash   1730698517
     * @symbol ?getReloadTimeStampClient@AnimationComponent@@SA_KXZ
     */
    MCAPI static unsigned __int64 getReloadTimeStampClient();
    /**
     * @hash   -1380297197
     * @symbol ?incrementCurrentServerFrameIndex@AnimationComponent@@SAXXZ
     */
    MCAPI static void incrementCurrentServerFrameIndex();

//private:

private:
    /**
     * @hash   -1083635075
     * @symbol ?mClientFrameIndex@AnimationComponent@@0U?$atomic@_J@std@@A
     */
    MCAPI static struct std::atomic<__int64> mClientFrameIndex;
    /**
     * @hash   -1758126861
     * @symbol ?mReloadTimeStampClient@AnimationComponent@@0U?$atomic@_J@std@@A
     */
    MCAPI static struct std::atomic<__int64> mReloadTimeStampClient;
    /**
     * @hash   -166255875
     * @symbol ?mServerFrameIndex@AnimationComponent@@0U?$atomic@_J@std@@A
     */
    MCAPI static struct std::atomic<__int64> mServerFrameIndex;

};