#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class HashedString;
class RenderParams;
// clang-format on

class DefaultEmptyActorAnimationPlayer : public ::ActorAnimationPlayer {
public:
    // prevent constructor by default
    DefaultEmptyActorAnimationPlayer& operator=(DefaultEmptyActorAnimationPlayer const&);
    DefaultEmptyActorAnimationPlayer(DefaultEmptyActorAnimationPlayer const&);
    DefaultEmptyActorAnimationPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void applyToPose(
        ::RenderParams&,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>&,
        float
    ) /*override*/;

    // vIndex: 2
    virtual void resetAnimation() /*override*/;

    // vIndex: 6
    virtual bool hasAnimationFinished() const /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const&) /*override*/;

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const /*override*/;

    // vIndex: 9
    virtual ::HashedString const& getRawName() const /*override*/;

    // vIndex: 0
    virtual ~DefaultEmptyActorAnimationPlayer() /*override*/;
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
        ::RenderParams&,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>&,
        float
    );

    MCAPI void $resetAnimation();

    MCAPI bool $hasAnimationFinished() const;

    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const&);

    MCAPI ::ActorAnimationType $getAnimationType() const;

    MCAPI ::HashedString const& $getRawName() const;
    // NOLINTEND
};
