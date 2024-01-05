#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorAnimationType.h"
#include "mc/enums/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"

class ActorAnimationControllerPlayer : public ::ActorAnimationPlayer {
public:
    // prevent constructor by default
    ActorAnimationControllerPlayer& operator=(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorAnimationControllerPlayer@@UEAA@XZ
    virtual ~ActorAnimationControllerPlayer() = default;

    // vIndex: 1, symbol:
    // ?applyToPose@ActorAnimationControllerPlayer@@UEAAXAEAVRenderParams@@AEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@M@Z
    virtual void applyToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    // vIndex: 2, symbol: ?resetAnimation@ActorAnimationControllerPlayer@@UEAAXXZ
    virtual void resetAnimation();

    // vIndex: 4, symbol:
    // ?bindParticleEffects@ActorAnimationControllerPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z
    virtual void
    bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const& actorParticleEffectMap);

    // vIndex: 5, symbol:
    // ?bindSoundEffects@ActorAnimationControllerPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const& actorSoundEffectMap);

    // vIndex: 6, symbol: ?hasAnimationFinished@ActorAnimationControllerPlayer@@UEBA_NXZ
    virtual bool hasAnimationFinished() const;

    // vIndex: 7, symbol:
    // ?findAnimation@ActorAnimationControllerPlayer@@UEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@@Z
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const& friendlyName);

    // vIndex: 8, symbol: ?getAnimationType@ActorAnimationControllerPlayer@@UEBA?AW4ActorAnimationType@@XZ
    virtual ::ActorAnimationType getAnimationType() const;

    // vIndex: 9, symbol: ?getRawName@ActorAnimationControllerPlayer@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getRawName() const;

    // symbol:
    // ??0ActorAnimationControllerPlayer@@QEAA@AEBVHashedString@@AEBVActorAnimationControllerPtr@@AEAVAnimationComponent@@AEBVExpressionNode@@AEAV?$set@VHashedString@@U?$hash@VHashedString@@@std@@V?$allocator@VHashedString@@@3@@std@@@Z
    MCAPI
    ActorAnimationControllerPlayer(class HashedString const& friendlyName, class ActorAnimationControllerPtr const& animationControllerPtr, class AnimationComponent& animationComponent, class ExpressionNode const& blendExpression, std::set<class HashedString, std::hash<class HashedString>>&);

    // symbol:
    // ?applyStateAnimationToPose@ActorAnimationControllerPlayer@@QEAAXAEAVRenderParams@@AEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@M@Z
    MCAPI void applyStateAnimationToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    // symbol:
    // ?blendViaShortestPath@ActorAnimationControllerPlayer@@QEAAXAEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@00MM@Z
    MCAPI void blendViaShortestPath(
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& blendOutBoneOrientationsMap,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& blendInBoneOrientationsMap,
        float                                                                             blendInWeight,
        float                                                                             blendWeight
    );

    // NOLINTEND
};
