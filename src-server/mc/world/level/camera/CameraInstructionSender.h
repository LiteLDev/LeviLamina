#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PacketSender;
struct CameraInstruction;
// clang-format on

namespace CameraInstructionSender {
// functions
// NOLINTBEGIN
MCNAPI void sendInstruction(::PacketSender& packetSender, ::EntityContext& entity, ::CameraInstruction const& instruction);

MCNAPI void updateCameraComponentsOnEntity(::EntityContext& entity, ::CameraInstruction const& instruction);
// NOLINTEND

}
