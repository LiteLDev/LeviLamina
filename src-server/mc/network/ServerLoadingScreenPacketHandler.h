#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class NetworkIdentifier;
class ServerboundLoadingScreenPacket;
// clang-format on

namespace ServerLoadingScreenPacketHandler {
// functions
// NOLINTBEGIN
MCNAPI void handleLoadingScreenPacket(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet, ::EntityContext& entity, ::brstd::function_ref<void(::NetworkIdentifier const&, ::SubClientId, ::Connection::DisconnectFailReason)> const& disconnectClient);
// NOLINTEND

}
