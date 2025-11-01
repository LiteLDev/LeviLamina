#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<4, 4> mUnkbcb585;
        ::ll::UntypedStorage<4, 8> mUnkb9b45b;
        ::ll::UntypedStorage<1, 1> mUnk896489;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        EntityStatus& operator=(EntityStatus const&);
        EntityStatus(EntityStatus const&);
        EntityStatus();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraAimAssistEntityTargetComponent::EntityStatus>> mEntitiesInFrustum;
    // NOLINTEND

};
