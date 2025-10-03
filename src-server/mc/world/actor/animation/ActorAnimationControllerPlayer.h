#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPtr;
class AnimationComponent;
class BoneOrientation;
class ExpressionNode;
class HashedString;
class RenderParams;
// clang-format on

class ActorAnimationControllerPlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk696cb1;
    ::ll::UntypedStorage<4, 4>  mUnkaf7cd8;
    ::ll::UntypedStorage<4, 4>  mUnk603dec;
    ::ll::UntypedStorage<4, 4>  mUnk2da515;
    ::ll::UntypedStorage<4, 4>  mUnkf5685f;
    ::ll::UntypedStorage<4, 4>  mUnkb59735;
    ::ll::UntypedStorage<8, 24> mUnkd7616b;
    ::ll::UntypedStorage<8, 8>  mUnkda6c18;
    ::ll::UntypedStorage<8, 8>  mUnk1e1a51;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerPlayer& operator=(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void applyToPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    ) /*override*/;

    // vIndex: 2
    virtual void resetAnimation() /*override*/;

    // vIndex: 4
    virtual void bindParticleEffects(
        ::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap
    ) /*override*/;

    // vIndex: 5
    virtual void
    bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap) /*override*/;

    // vIndex: 6
    virtual bool hasAnimationFinished() const /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const& friendlyName) /*override*/;

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const /*override*/;

    // vIndex: 9
    virtual ::HashedString const& getRawName() const /*override*/;

    // vIndex: 0
    virtual ~ActorAnimationControllerPlayer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationControllerPlayer(
        ::HashedString const&                                    friendlyName,
        ::ActorAnimationControllerPtr const&                     animationControllerPtr,
        ::AnimationComponent&                                    animationComponent,
        ::ExpressionNode const&                                  blendExpression,
        ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack
    );

    MCNAPI void applyStateAnimationToPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    MCNAPI void blendViaShortestPath(
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& blendOutBoneOrientationsMap,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& blendInBoneOrientationsMap,
        float                                                                             blendInWeight,
        float                                                                             blendWeight
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HashedString const&                                    friendlyName,
        ::ActorAnimationControllerPtr const&                     animationControllerPtr,
        ::AnimationComponent&                                    animationComponent,
        ::ExpressionNode const&                                  blendExpression,
        ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $applyToPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    MCNAPI void $resetAnimation();

    MCNAPI void
    $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap);

    MCNAPI void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);

    MCNAPI bool $hasAnimationFinished() const;

    MCNAPI ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const& friendlyName);

    MCNAPI ::ActorAnimationType $getAnimationType() const;

    MCNAPI ::HashedString const& $getRawName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
