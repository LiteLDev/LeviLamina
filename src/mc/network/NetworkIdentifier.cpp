#include "mc/network/NetworkIdentifier.h"
#include "mc/deps/raknet/RakNet.h"
#include "mc/deps/raknet/RakPeer.h"

#include "ll/api/service/Bedrock.h"

std::string NetworkIdentifier::getIPAndPort() const {
    return ll::service::getRakPeer()
        .and_then([&](auto& peer) -> std::optional<std::string> {
            auto address = peer.GetSystemAddressFromGuid(mGuid);
            if (address != RakNet::UNASSIGNED_SYSTEM_ADDRESS) {
                return address;
            }
            return std::nullopt;
        })
        .value_or("127.0.0.1:65535");
}
