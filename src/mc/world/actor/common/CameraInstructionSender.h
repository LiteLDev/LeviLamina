#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraInstructionSender {
// NOLINTBEGIN
// symbol: ?sendInstruction@CameraInstructionSender@@YAXAEAVPacketSender@@AEAVEntityContext@@AEBUCameraInstruction@@@Z
MCAPI void sendInstruction(class PacketSender&, class EntityContext&, struct CameraInstruction const&);

// symbol: ?updateCameraComponentsOnEntity@CameraInstructionSender@@YAXAEAVEntityContext@@AEBUCameraInstruction@@@Z
MCAPI void updateCameraComponentsOnEntity(class EntityContext&, struct CameraInstruction const&);
// NOLINTEND

}; // namespace CameraInstructionSender
