#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorAnimationType.h"
#include "mc/enums/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"

class ActorAnimationControllerStatePlayer : public ::ActorAnimationPlayer {
public:
    // prevent constructor by default
    ActorAnimationControllerStatePlayer& operator=(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorAnimationControllerStatePlayer@@UEAA@XZ
    virtual ~ActorAnimationControllerStatePlayer() = default;

    // vIndex: 1, symbol:
    // ?applyToPose@ActorAnimationControllerStatePlayer@@UEAAXAEAVRenderParams@@AEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@M@Z
    virtual void applyToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    // vIndex: 2, symbol: ?resetAnimation@ActorAnimationControllerStatePlayer@@UEAAXXZ
    virtual void resetAnimation();

    // vIndex: 4, symbol:
    // ?bindParticleEffects@ActorAnimationControllerStatePlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z
    virtual void bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const&);

    // vIndex: 5, symbol:
    // ?bindSoundEffects@ActorAnimationControllerStatePlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const& actorSoundEffectMap);

    // vIndex: 6, symbol: ?hasAnimationFinished@ActorAnimationControllerStatePlayer@@UEBA_NXZ
    virtual bool hasAnimationFinished() const;

    // vIndex: 7, symbol:
    // ?findAnimation@ActorAnimationControllerStatePlayer@@UEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@@Z
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const& friendlyName);

    // vIndex: 8, symbol: ?getAnimationType@ActorAnimationControllerStatePlayer@@UEBA?AW4ActorAnimationType@@XZ
    virtual ::ActorAnimationType getAnimationType() const;

    // vIndex: 9, symbol: ?getRawName@ActorAnimationControllerStatePlayer@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getRawName() const;

    // symbol:
    // ??0ActorAnimationControllerStatePlayer@@QEAA@AEBVHashedString@@AEAVActorAnimationControllerPlayer@@V?$shared_ptr@VActorAnimationControllerState@@@std@@AEAVAnimationComponent@@AEBVExpressionNode@@AEAV?$set@VHashedString@@U?$hash@VHashedString@@@std@@V?$allocator@VHashedString@@@3@@4@@Z
    MCAPI ActorAnimationControllerStatePlayer(class HashedString const& friendlyName, class ActorAnimationControllerPlayer& owner, std::shared_ptr<class ActorAnimationControllerState> animationControllerState, class AnimationComponent& animationComponent, class ExpressionNode const& blendExpression, std::set<class HashedString, std::hash<class HashedString>>&);

    // symbol: ?allAnimationsFinished@ActorAnimationControllerStatePlayer@@QEBA_NXZ
    MCAPI bool allAnimationsFinished() const;

    // symbol: ?anyAnimationsFinished@ActorAnimationControllerStatePlayer@@QEBA_NXZ
    MCAPI bool anyAnimationsFinished() const;

    // NOLINTEND
};
