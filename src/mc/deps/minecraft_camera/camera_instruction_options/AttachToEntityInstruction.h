#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct AttachToEntityInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                                mAttachToEntityId;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mActorLocator;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool operator==(::CameraInstructionOptions::AttachToEntityInstruction const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
