#include "mc/network/NetworkIdentifier.h"
#include "liteloader/api/GlobalServiceAPI.h"
#include "mc/deps/raknet/RakPeer.h"

std::string NetworkIdentifier::getIPAndPort() const {
    std::string rv = Global<RakNet::RakPeer>->GetSystemAddressFromGuid(mGuid).ToString(true, ':');
    return rv.substr(0, rv.find('|'));
}