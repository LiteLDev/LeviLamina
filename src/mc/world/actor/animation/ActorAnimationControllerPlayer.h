#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationControllerPtr.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerStatePlayer;
class AnimationComponent;
class ApplyAnimationContext;
class BoneOrientation;
class ExpressionNode;
class RenderParams;
struct AnimationVisitor;
namespace Util { struct HashStringHashGreater; }
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
    virtual void applyToPose(
        ::ApplyAnimationContext const&,
        ::RenderParams&,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>&,
        float
    ) /*override*/;

    virtual void resetAnimation() /*override*/;

    virtual void bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&) /*override*/;

    virtual void bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const&) /*override*/;

    virtual bool hasAnimationFinished() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const&) /*override*/;

    virtual ::ActorAnimationType getAnimationType() const /*override*/;

    virtual ::HashedString const& getRawName() const /*override*/;

    virtual void visit(::AnimationVisitor&& dispatcher) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAnimationControllerPlayer(
        ::HashedString const&                                      friendlyName,
        ::ActorAnimationControllerPtr const&                       animationControllerPtr,
        ::AnimationComponent&                                      animationComponent,
        ::ExpressionNode const&                                    blendExpression,
        ::std::set<::HashedString, ::Util::HashStringHashGreater>& animationControllerNameStack
    );

#ifdef LL_PLAT_C
    MCAPI ::std::shared_ptr<::ActorAnimationControllerStatePlayer>
    getStatePlayer(::HashedString const& stateName, ::AnimationComponent& animationComponent, bool createIfMissing);

    MCAPI void setNextState(::HashedString const& stateName);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HashedString const&                                      friendlyName,
        ::ActorAnimationControllerPtr const&                       animationControllerPtr,
        ::AnimationComponent&                                      animationComponent,
        ::ExpressionNode const&                                    blendExpression,
        ::std::set<::HashedString, ::Util::HashStringHashGreater>& animationControllerNameStack
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
