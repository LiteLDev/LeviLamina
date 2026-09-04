#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include <string>
#include <unordered_map>

// auto generated forward declare list
// clang-format off
class PacketSender;
class UserEntityIdentifierComponent;
namespace Bedrock::DDUI { class DataStoreSyncServer; }
namespace Bedrock::DDUI { class DataStoreSyncClient; }
// clang-format on

namespace Bedrock::DDUI {
// functions
// NOLINTBEGIN
template <class T>
    requires std::is_same_v<T, cereal::DynamicValue>
MCAPI T const* getNestedMapValueConst(
    std::unordered_map<std::string, std::unordered_map<std::string, T>> const& map,
    std::string const&                                                         datastore,
    std::string const&                                                         property
);

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
