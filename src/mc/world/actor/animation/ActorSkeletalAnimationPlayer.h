#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorAnimationType.h"
#include "mc/enums/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"

class ActorSkeletalAnimationPlayer : public ::ActorAnimationPlayer {
public:
    // prevent constructor by default
    ActorSkeletalAnimationPlayer& operator=(ActorSkeletalAnimationPlayer const&);
    ActorSkeletalAnimationPlayer(ActorSkeletalAnimationPlayer const&);
    ActorSkeletalAnimationPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorSkeletalAnimationPlayer@@UEAA@XZ
    virtual ~ActorSkeletalAnimationPlayer() = default;

    // vIndex: 1, symbol:
    // ?applyToPose@ActorSkeletalAnimationPlayer@@UEAAXAEAVRenderParams@@AEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@M@Z
    virtual void applyToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    );

    // vIndex: 2, symbol: ?resetAnimation@ActorSkeletalAnimationPlayer@@UEAAXXZ
    virtual void resetAnimation();

    // vIndex: 3, symbol: ?buildBoneToPartMapping@ActorSkeletalAnimationPlayer@@UEAAXAEAVAnimationComponent@@@Z
    virtual void buildBoneToPartMapping(class AnimationComponent& animationComponent);

    // vIndex: 4, symbol:
    // ?bindParticleEffects@ActorSkeletalAnimationPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z
    virtual void
    bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const& actorParticleEffectMap);

    // vIndex: 5, symbol:
    // ?bindSoundEffects@ActorSkeletalAnimationPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const& actorSoundEffectMap);

    // vIndex: 6, symbol: ?hasAnimationFinished@ActorSkeletalAnimationPlayer@@UEBA_NXZ
    virtual bool hasAnimationFinished() const;

    // vIndex: 7, symbol:
    // ?findAnimation@ActorSkeletalAnimationPlayer@@UEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@@Z
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&);

    // vIndex: 8, symbol: ?getAnimationType@ActorSkeletalAnimationPlayer@@UEBA?AW4ActorAnimationType@@XZ
    virtual ::ActorAnimationType getAnimationType() const;

    // vIndex: 9, symbol: ?getRawName@ActorSkeletalAnimationPlayer@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getRawName() const;

    // symbol:
    // ??0ActorSkeletalAnimationPlayer@@QEAA@AEBVHashedString@@VActorSkeletalAnimationPtr@@AEAVAnimationComponent@@AEBVExpressionNode@@@Z
    MCAPI ActorSkeletalAnimationPlayer(
        class HashedString const&       friendlyName,
        class ActorSkeletalAnimationPtr animationData,
        class AnimationComponent&       animationComponent,
        class ExpressionNode const&     blendExpression
    );

    // NOLINTEND
};
