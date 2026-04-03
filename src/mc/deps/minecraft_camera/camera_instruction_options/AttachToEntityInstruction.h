#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

namespace CameraInstructionOptions {

struct AttachToEntityInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                                mAttachToEntityId;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mActorLocator;
    // NOLINTEND
};

} // namespace CameraInstructionOptions
