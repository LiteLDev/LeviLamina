#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class BoneOrientation;
class HashedString;
class RenderParams;
// clang-format on

class ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnkd5fe13;
    ::ll::UntypedStorage<8, 216> mUnkad5060;
    ::ll::UntypedStorage<1, 1>   mUnk923d16;
    ::ll::UntypedStorage<1, 1>   mUnkdcf6cd;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationPlayer& operator=(ActorAnimationPlayer const&);
    ActorAnimationPlayer(ActorAnimationPlayer const&);
    ActorAnimationPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAnimationPlayer();

    // vIndex: 1
    virtual void applyToPose(
        ::RenderParams&,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>&,
        float
    ) = 0;

    // vIndex: 2
    virtual void resetAnimation() = 0;

    // vIndex: 3
    virtual void buildBoneToPartMapping(::AnimationComponent&);

    // vIndex: 4
    virtual void bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&);

    // vIndex: 5
    virtual void bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const&);

    // vIndex: 6
    virtual bool hasAnimationFinished() const = 0;

    // vIndex: 7
    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const&) = 0;

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const = 0;

    // vIndex: 9
    virtual ::HashedString const& getRawName() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $buildBoneToPartMapping(::AnimationComponent&);

    MCAPI void $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&);

    MCAPI void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
