#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationControllerPtr.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerStatePlayer;
class AnimationComponent;
class BoneOrientation;
class ExpressionNode;
class HashedString;
class RenderParams;
struct AnimationVisitor;
// clang-format on

class ActorAnimationControllerPlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ActorAnimationControllerPtr> mAnimationControllerPtr;
    ::ll::TypedStorage<4, 4, int>                            mCurrStateIndex;
    ::ll::TypedStorage<4, 4, int>                            mLastStateIndex;
    ::ll::TypedStorage<4, 4, int>                            mNextStateIndex;
    ::ll::TypedStorage<4, 4, int>                            mBlendTransitionStateIndex;
    ::ll::TypedStorage<4, 4, float>                          mBlendTransitionTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationControllerStatePlayer>>>
        mAnimationControllerStatePlayers;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::HashedString> const*> mActorParticleEffectMap;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::std::string> const*>  mActorSoundEffectMap;
    // NOLINTEND

public:
    // prevent constructor by default
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

    // vIndex: 10
    virtual void visit(::AnimationVisitor&& dispatcher) /*override*/;

    // vIndex: 0
    virtual ~ActorAnimationControllerPlayer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAnimationControllerPlayer(
        ::HashedString const&                                    friendlyName,
        ::ActorAnimationControllerPtr const&                     animationControllerPtr,
        ::AnimationComponent&                                    animationComponent,
        ::ExpressionNode const&                                  blendExpression,
        ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack
    );

    MCAPI void applyStateAnimationToPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    MCAPI void blendViaShortestPath(
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>> const&
            blendOutBoneOrientationsMap,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>> const&
              blendInBoneOrientationsMap,
        float blendInWeight,
        float blendWeight
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $applyToPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    MCAPI void $resetAnimation();

    MCAPI void $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap);

    MCAPI void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);

    MCAPI bool $hasAnimationFinished() const;

    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const& friendlyName);

    MCFOLD ::ActorAnimationType $getAnimationType() const;

    MCAPI ::HashedString const& $getRawName() const;

    MCAPI void $visit(::AnimationVisitor&& dispatcher);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
