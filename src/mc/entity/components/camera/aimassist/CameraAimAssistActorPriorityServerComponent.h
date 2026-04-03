#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components/camera/aimassist/camera_aim_assist_actor_priority/PriorityKey.h"

struct CameraAimAssistActorPriorityServerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                           mTick;
    ::ll::TypedStorage<1, 1, bool>                                                          mDirty;
    ::ll::TypedStorage<8, 16, ::std::map<::CameraAimAssistActorPriority::PriorityKey, int>> mActorPriorities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>                    mPresetIds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>                    mCategoryIds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>                    mActorIds;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistActorPriorityServerComponent& operator=(CameraAimAssistActorPriorityServerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistActorPriorityServerComponent();

    MCAPI CameraAimAssistActorPriorityServerComponent(::CameraAimAssistActorPriorityServerComponent const&);

    MCAPI ::CameraAimAssistActorPriorityServerComponent& operator=(::CameraAimAssistActorPriorityServerComponent&&);

    MCAPI void setExclusion(::HashedString const& presetId, ::HashedString const& actorId, bool isExcluded);

    MCAPI void setPriority(
        ::HashedString const& presetId,
        ::HashedString const& categoryId,
        ::HashedString const& actorId,
        int                   newPriority
    );

    MCAPI ~CameraAimAssistActorPriorityServerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CameraAimAssistActorPriorityServerComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
