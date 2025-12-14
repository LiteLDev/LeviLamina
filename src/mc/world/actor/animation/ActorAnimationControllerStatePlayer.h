#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPlayer;
class ActorAnimationControllerState;
class ActorSkeletalAnimationPtr;
class AnimationComponent;
class BoneOrientation;
class ExpressionNode;
class HashedString;
class RenderParams;
struct AnimationVisitor;
// clang-format on

class ActorAnimationControllerStatePlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorAnimationControllerPlayer&>                         mOwner;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationControllerState>>       mControllerState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationPlayer>>> mAnimationPlayers;
    ::ll::TypedStorage<4, 4, float>                                                     mStateTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerStatePlayer& operator=(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void applyToPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    ) /*override*/;

    virtual void resetAnimation() /*override*/;

    virtual void bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&) /*override*/;

    virtual void
    bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap) /*override*/;

    virtual bool hasAnimationFinished() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const& friendlyName) /*override*/;

    virtual ::ActorAnimationType getAnimationType() const /*override*/;

    virtual ::HashedString const& getRawName() const /*override*/;

    virtual void visit(::AnimationVisitor&& dispatcher) /*override*/;

    virtual ~ActorAnimationControllerStatePlayer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAnimationControllerStatePlayer(
        ::HashedString const&                                    friendlyName,
        ::ActorAnimationControllerPlayer&                        owner,
        ::std::shared_ptr<::ActorAnimationControllerState>       animationControllerState,
        ::AnimationComponent&                                    animationComponent,
        ::ExpressionNode const&                                  blendExpression,
        ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack
    );

    MCAPI_C void addAnimation(
        ::AnimationComponent&       animationComponent,
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HashedString const&                                    friendlyName,
        ::ActorAnimationControllerPlayer&                        owner,
        ::std::shared_ptr<::ActorAnimationControllerState>       animationControllerState,
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

    MCFOLD void $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&);

    MCFOLD void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);

    MCFOLD bool $hasAnimationFinished() const;

    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const& friendlyName);

    MCFOLD ::ActorAnimationType $getAnimationType() const;

    MCFOLD ::HashedString const& $getRawName() const;

    MCAPI void $visit(::AnimationVisitor&& dispatcher);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
