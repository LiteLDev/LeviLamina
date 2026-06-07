#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CameraAimAssistActorPriorityServerComponent;
namespace CameraAimAssistActorPriority { struct PriorityData; }
// clang-format on

struct CameraAimAssistActorPriorityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraAimAssistActorPriority::PriorityData>> mPriorities;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistActorPriorityPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CameraAimAssistActorPriorityPacketPayload(
        ::CameraAimAssistActorPriorityServerComponent const& aimAssistActorPriorityComponent
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CameraAimAssistActorPriorityServerComponent const& aimAssistActorPriorityComponent);
    // NOLINTEND
};
