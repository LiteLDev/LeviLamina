#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"
#include "mc/world/actor/animation/ActorSkeletalAnimationPtr.h"

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class BoneOrientation;
class ExpressionNode;
class HashedString;
class RenderParams;
struct AnimationVisitor;
struct BoneAnimationPlayer;
// clang-format on

class ActorSkeletalAnimationPlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ActorSkeletalAnimationPtr>                                        mAnimationData;
    ::ll::TypedStorage<8, 24, ::std::vector<::BoneAnimationPlayer>>                               mBoneAnimationPlayers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<int>>> mBoneToPartMapping;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::HashedString> const*> mActorParticleEffectMap;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::std::string> const*>  mActorSoundEffectMap;
    ::ll::TypedStorage<4, 4, float>                                                       mAnimTime;
    ::ll::TypedStorage<4, 4, float>                                                       mLastAnimTime;
    ::ll::TypedStorage<4, 4, float>                                                       mStartDelay;
    // NOLINTEND

public:
    // prevent constructor by default
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
    virtual void bindParticleEffects(
        ::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap
    ) /*override*/;

    // vIndex: 5
    virtual void
    bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap) /*override*/;

    // vIndex: 6
    virtual bool hasAnimationFinished() const /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const&) /*override*/;

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const /*override*/;

    // vIndex: 9
    virtual ::HashedString const& getRawName() const /*override*/;

    // vIndex: 10
    virtual void visit(::AnimationVisitor&& dispatcher) /*override*/;

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

    MCAPI void _animateBones(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    );

    MCAPI void _fireParticleEvents(::RenderParams& renderParams);

    MCAPI void _fireSoundEvents(::RenderParams& renderParams);

    MCAPI void _rebuildBoneAnimationPlayers();

    MCAPI void _setDefaultPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap
    ) const;

    MCAPI bool _updateAnimTime(::RenderParams& renderParams);
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

    MCFOLD bool $hasAnimationFinished() const;

    MCFOLD ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const&);

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
