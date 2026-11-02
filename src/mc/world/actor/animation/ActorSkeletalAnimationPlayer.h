#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"
#include "mc/world/actor/animation/ActorSkeletalAnimationPtr.h"

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class ApplyAnimationContext;
class BoneOrientation;
class ExpressionNode;
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorSkeletalAnimationPlayer();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void applyToPose(
        ::ApplyAnimationContext const&                                                    applyContext,
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    ) /*override*/;

    virtual void resetAnimation() /*override*/;

    virtual void buildBoneToPartMapping(::AnimationComponent& animationComponent) /*override*/;

    virtual void bindParticleEffects(
        ::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap
    ) /*override*/;

    virtual void
    bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap) /*override*/;

    virtual bool hasAnimationFinished() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const&) /*override*/;

    virtual ::ActorAnimationType getAnimationType() const /*override*/;

    virtual ::HashedString const& getRawName() const /*override*/;

    virtual void visit(::AnimationVisitor&& dispatcher) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ActorSkeletalAnimationPlayer(
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animationData,
        ::AnimationComponent&       animationComponent,
        ::ExpressionNode const&     blendExpression
    );

    MCNAPI void _fireSoundEvents(::RenderParams& renderParams);
#endif

    MCNAPI void _setDefaultPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animationData,
        ::AnimationComponent&       animationComponent,
        ::ExpressionNode const&     blendExpression
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $applyToPose(
        ::ApplyAnimationContext const&                                                    applyContext,
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    );

    MCNAPI void $resetAnimation();

    MCNAPI void $buildBoneToPartMapping(::AnimationComponent& animationComponent);

    MCNAPI void
    $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap);

    MCNAPI void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);

    MCNAPI bool $hasAnimationFinished() const;

    MCNAPI ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const&);

    MCNAPI ::ActorAnimationType $getAnimationType() const;

    MCNAPI ::HashedString const& $getRawName() const;

    MCNAPI void $visit(::AnimationVisitor&& dispatcher);


    // NOLINTEND
};
