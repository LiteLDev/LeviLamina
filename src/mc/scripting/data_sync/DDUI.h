#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class UserEntityIdentifierComponent;
namespace Bedrock::DDUI { class DataStoreSyncClient; }
namespace Bedrock::DDUI { class DataStoreSyncServer; }
// clang-format on

namespace Bedrock::DDUI {
// functions
// NOLINTBEGIN
MCNAPI void sendDataStorePacketsToClient(
    ::Bedrock::DDUI::DataStoreSyncServer&  dataSync,
    ::PacketSender&                        packetSender,
    ::UserEntityIdentifierComponent const* id
);

MCNAPI_C void
sendDataStorePacketsToServer(::Bedrock::DDUI::DataStoreSyncClient& dataSync, ::PacketSender& packetSender);
// NOLINTEND

} // namespace Bedrock::DDUI
