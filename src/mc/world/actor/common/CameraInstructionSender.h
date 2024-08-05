#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraInstructionSender {
// NOLINTBEGIN
MCAPI void sendInstruction(class PacketSender&, class EntityContext&, struct CameraInstruction const&);

MCAPI void updateCameraComponentsOnEntity(class EntityContext&, struct CameraInstruction const&);
// NOLINTEND

}; // namespace CameraInstructionSender
