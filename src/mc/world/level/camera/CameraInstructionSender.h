#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraInstructionSender {
// NOLINTBEGIN
MCAPI void sendInstruction(
    class PacketSender&             packetSender,
    class EntityContext&            entity,
    struct CameraInstruction const& instruction
);

MCAPI void updateCameraComponentsOnEntity(class EntityContext& entity, struct CameraInstruction const& instruction);
// NOLINTEND

}; // namespace CameraInstructionSender
