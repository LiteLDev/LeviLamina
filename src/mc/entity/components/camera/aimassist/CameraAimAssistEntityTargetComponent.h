#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class StrictEntityContext;
class Vec3;
// clang-format on

struct CameraAimAssistEntityTargetComponent {
public:
    // CameraAimAssistEntityTargetComponent inner types declare
    // clang-format off
    struct EntityStatus;
    // clang-format on

    // CameraAimAssistEntityTargetComponent inner types define
    struct EntityStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 24> mUnk357c36;
        ::ll::UntypedStorage<4, 12> mUnk61d6cb;
        ::ll::UntypedStorage<4, 4>  mUnkbcb585;
        ::ll::UntypedStorage<4, 8>  mUnkb9b45b;
        ::ll::UntypedStorage<1, 1>  mUnk896489;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntityStatus& operator=(EntityStatus const&);
        EntityStatus(EntityStatus const&);
        EntityStatus();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI EntityStatus(
            ::AABB const&                hitbox,
            ::Vec3 const&                position,
            float                        priorityPercentage,
            ::StrictEntityContext const& entityContext,
            bool                         obstructed
        );
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void* $ctor(
            ::AABB const&                hitbox,
            ::Vec3 const&                position,
            float                        priorityPercentage,
            ::StrictEntityContext const& entityContext,
            bool                         obstructed
        );
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraAimAssistEntityTargetComponent::EntityStatus>> mEntitiesInFrustum;
    // NOLINTEND
};
