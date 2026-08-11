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
class ApplyAnimationContext;
class BoneOrientation;
class ExpressionNode;
class HashedString;
class RenderParams;
struct AnimationVisitor;
namespace Util { struct HashStringHashGreater; }
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
        ::ApplyAnimationContext const&                                                    applyContext,
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    ) /*override*/;

    virtual void resetAnimation() /*override*/;

    virtual void bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&) /*override*/;

    virtual void bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const&) /*override*/;

    virtual bool hasAnimationFinished() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const& friendlyName) /*override*/;

    virtual ::ActorAnimationType getAnimationType() const /*override*/;

    virtual ::HashedString const& getRawName() const /*override*/;

    virtual void visit(::AnimationVisitor&& dispatcher) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ActorAnimationControllerStatePlayer(
        ::HashedString const&                                      friendlyName,
        ::ActorAnimationControllerPlayer&                          owner,
        ::std::shared_ptr<::ActorAnimationControllerState>         animationControllerState,
        ::AnimationComponent&                                      animationComponent,
        ::ExpressionNode const&                                    blendExpression,
        ::std::set<::HashedString, ::Util::HashStringHashGreater>& animationControllerNameStack
    );

    MCAPI void addAnimation(
        ::AnimationComponent&       animationComponent,
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animation
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
