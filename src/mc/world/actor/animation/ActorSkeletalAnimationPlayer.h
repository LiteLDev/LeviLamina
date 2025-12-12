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
struct AnimationVisitor;
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
    virtual void applyToPose(
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

    virtual ~ActorSkeletalAnimationPlayer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSkeletalAnimationPlayer(
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animationData,
        ::AnimationComponent&       animationComponent,
        ::ExpressionNode const&     blendExpression
    );

    MCNAPI_C void _animateBones(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    );

    MCNAPI_C void _fireParticleEvents(::RenderParams& renderParams);

    MCNAPI_C void _fireSoundEvents(::RenderParams& renderParams);

    MCNAPI_C void _rebuildBoneAnimationPlayers();

    MCNAPI_C void _setDefaultPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap
    ) const;

    MCNAPI bool _updateAnimTime(::RenderParams& renderParams);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animationData,
        ::AnimationComponent&       animationComponent,
        ::ExpressionNode const&     blendExpression
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $applyToPose(
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
