#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class UserEntityIdentifierComponent;
namespace Bedrock::DDUI { class DataStoreSyncServer; }
namespace cereal { class DynamicValue; }
namespace Bedrock::DDUI { class DataStoreSyncClient; }
// clang-format on

namespace Bedrock::DDUI {
// functions
// NOLINTBEGIN
MCAPI bool isEqual(::std::variant<double, bool, ::std::string> const& primitive, ::cereal::DynamicValue const& obj);

MCAPI void sendDataStorePacketsToClient(
    ::Bedrock::DDUI::DataStoreSyncServer&  dataSync,
    ::PacketSender&                        packetSender,
    ::UserEntityIdentifierComponent const* id
);

#ifdef LL_PLAT_C
MCAPI void sendDataStorePacketsToServer(::Bedrock::DDUI::DataStoreSyncClient& dataSync, ::PacketSender& packetSender);
#endif
// NOLINTEND

} // namespace Bedrock::DDUI
