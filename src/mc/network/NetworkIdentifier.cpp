#include "mc/network/NetworkIdentifier.h"
#include "mc/deps/raknet/RakNet.h"
#include "mc/deps/raknet/RakPeer.h"

#include "ll/api/service/Bedrock.h"

std::string NetworkIdentifier::getIPAndPort() const {
    if (ll::service::getRakPeer()) {
        auto address = ll::service::getRakPeer()->GetSystemAddressFromGuid(mGuid);
        if (address != RakNet::UNASSIGNED_SYSTEM_ADDRESS) {
            return address;
        }
    }
    return "127.0.0.1:65535";
}
