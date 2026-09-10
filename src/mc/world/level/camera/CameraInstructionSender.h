#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraShakeType.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PacketSender;
struct CameraInstruction;
// clang-format on

namespace CameraInstructionSender {
// functions
// NOLINTBEGIN
MCNAPI void
sendInstruction(::PacketSender& packetSender, ::EntityContext& entity, ::CameraInstruction const& instruction);

MCNAPI void sendShakeInstruction(
    ::PacketSender&   packetSender,
    ::EntityContext&  entity,
    ::CameraShakeType shakeType,
    float             intensity,
    float             duration
);

MCNAPI void sendStopShakingInstruction(::PacketSender& packetSender, ::EntityContext& entity);
// NOLINTEND

} // namespace CameraInstructionSender
