#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorAnimationType.h"
#include "mc/enums/SkeletalHierarchyIndex.h"

class ActorAnimationPlayer {
public:
    // prevent constructor by default
    ActorAnimationPlayer& operator=(ActorAnimationPlayer const&);
    ActorAnimationPlayer(ActorAnimationPlayer const&);
    ActorAnimationPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorAnimationPlayer@@UEAA@XZ
    virtual ~ActorAnimationPlayer();

    // vIndex: 1, symbol:
    // ?applyToPose@ActorAnimationControllerStatePlayer@@UEAAXAEAVRenderParams@@AEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@M@Z
    virtual void applyToPose(
        class RenderParams&,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>&,
        float
    ) = 0;

    // vIndex: 2, symbol: ?resetAnimation@ActorAnimationControllerStatePlayer@@UEAAXXZ
    virtual void resetAnimation() = 0;

    // vIndex: 3, symbol: ?buildBoneToPartMapping@ActorAnimationPlayer@@UEAAXAEAVAnimationComponent@@@Z
    virtual void buildBoneToPartMapping(class AnimationComponent&);

    // vIndex: 4, symbol:
    // ?bindParticleEffects@ActorAnimationPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z
    virtual void bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const&);

    // vIndex: 5, symbol:
    // ?bindSoundEffects@ActorAnimationPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const&);

    // vIndex: 6, symbol: ?hasAnimationFinished@ActorAnimationControllerStatePlayer@@UEBA_NXZ
    virtual bool hasAnimationFinished() const = 0;

    // vIndex: 7, symbol:
    // ?findAnimation@ActorAnimationControllerStatePlayer@@UEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@@Z
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&) = 0;

    // vIndex: 8, symbol: ?getAnimationType@ActorAnimationControllerStatePlayer@@UEBA?AW4ActorAnimationType@@XZ
    virtual ::ActorAnimationType getAnimationType() const = 0;

    // vIndex: 9, symbol: ?getRawName@ActorAnimationControllerStatePlayer@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getRawName() const = 0;

    // NOLINTEND
};
