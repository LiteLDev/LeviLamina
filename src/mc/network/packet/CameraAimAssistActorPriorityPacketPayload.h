#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    CameraAimAssistActorPriorityPacketPayload& operator=(CameraAimAssistActorPriorityPacketPayload const&);
    CameraAimAssistActorPriorityPacketPayload(CameraAimAssistActorPriorityPacketPayload const&);
    CameraAimAssistActorPriorityPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CameraAimAssistActorPriorityPacketPayload& operator=(::CameraAimAssistActorPriorityPacketPayload&&);
    // NOLINTEND
};
