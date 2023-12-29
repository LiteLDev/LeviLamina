#include "mc/network/NetworkIdentifier.h"
#include "mc/deps/raknet/RakPeer.h"

#include "ll/api/service/Bedrock.h"

std::string NetworkIdentifier::getIPAndPort() const {
    if (!ll::service::getRakPeer()) {
        return "";
    }
    return ll::service::getRakPeer()->GetSystemAddressFromGuid(mGuid).ToString(':');
}
