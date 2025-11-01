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
    ::ll::UntypedStorage<8, 8> mUnk5832d5;
    ::ll::UntypedStorage<8, 16> mUnkc95601;
    ::ll::UntypedStorage<8, 24> mUnkede714;
    ::ll::UntypedStorage<4, 4> mUnk711489;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerStatePlayer& operator=(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void applyToPose(::RenderParams& renderParams, ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap, float blendWeight) /*override*/;

    // vIndex: 2
    virtual void resetAnimation() /*override*/;

    // vIndex: 4
    virtual void bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&) /*override*/;

    // vIndex: 5
    virtual void bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap) /*override*/;

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
    virtual ~ActorAnimationControllerStatePlayer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationControllerStatePlayer(::HashedString const& friendlyName, ::ActorAnimationControllerPlayer& owner, ::std::shared_ptr<::ActorAnimationControllerState> animationControllerState, ::AnimationComponent& animationComponent, ::ExpressionNode const& blendExpression, ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const& friendlyName, ::ActorAnimationControllerPlayer& owner, ::std::shared_ptr<::ActorAnimationControllerState> animationControllerState, ::AnimationComponent& animationComponent, ::ExpressionNode const& blendExpression, ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $applyToPose(::RenderParams& renderParams, ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap, float blendWeight);

    MCNAPI void $resetAnimation();

    MCNAPI void $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&);

    MCNAPI void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);

    MCNAPI bool $hasAnimationFinished() const;

    MCNAPI ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const& friendlyName);

    MCNAPI ::ActorAnimationType $getAnimationType() const;

    MCNAPI ::HashedString const& $getRawName() const;

    MCNAPI void $visit(::AnimationVisitor&& dispatcher);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
