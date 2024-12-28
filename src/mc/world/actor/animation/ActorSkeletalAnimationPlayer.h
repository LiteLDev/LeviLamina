#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class ActorSkeletalAnimationPtr;
class AnimationComponent;
class BoneOrientation;
class ExpressionNode;
class HashedString;
class RenderParams;
// clang-format on

class ActorSkeletalAnimationPlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf2dda4;
    ::ll::UntypedStorage<8, 24> mUnk934a88;
    ::ll::UntypedStorage<8, 64> mUnk64ca7e;
    ::ll::UntypedStorage<8, 8>  mUnkbf3295;
    ::ll::UntypedStorage<8, 8>  mUnk80bd55;
    ::ll::UntypedStorage<4, 4>  mUnk173802;
    ::ll::UntypedStorage<4, 4>  mUnk7a32f6;
    ::ll::UntypedStorage<4, 4>  mUnk2a6bf2;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSkeletalAnimationPlayer& operator=(ActorSkeletalAnimationPlayer const&);
    ActorSkeletalAnimationPlayer(ActorSkeletalAnimationPlayer const&);
    ActorSkeletalAnimationPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void applyToPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    ) /*override*/;

    // vIndex: 2
    virtual void resetAnimation() /*override*/;

    // vIndex: 3
    virtual void buildBoneToPartMapping(::AnimationComponent& animationComponent) /*override*/;

    // vIndex: 4
    virtual void bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap
    ) /*override*/;

    // vIndex: 5
    virtual void bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap
    ) /*override*/;

    // vIndex: 6
    virtual bool hasAnimationFinished() const /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const&) /*override*/;

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const /*override*/;

    // vIndex: 9
    virtual ::HashedString const& getRawName() const /*override*/;

    // vIndex: 0
    virtual ~ActorSkeletalAnimationPlayer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSkeletalAnimationPlayer(
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animationData,
        ::AnimationComponent&       animationComponent,
        ::ExpressionNode const&     blendExpression
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animationData,
        ::AnimationComponent&       animationComponent,
        ::ExpressionNode const&     blendExpression
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyToPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    );

    MCAPI void $resetAnimation();

    MCAPI void $buildBoneToPartMapping(::AnimationComponent& animationComponent);

    MCAPI void $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap);

    MCAPI void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);

    MCAPI bool $hasAnimationFinished() const;

    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const&);

    MCAPI ::ActorAnimationType $getAnimationType() const;

    MCAPI ::HashedString const& $getRawName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
