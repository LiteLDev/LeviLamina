#include "mc/network/NetworkIdentifier.h"
#include "mc/deps/raknet/RakPeer.h"

#include "ll/api/service/GlobalService.h"

std::string NetworkIdentifier::getIPAndPort() const {
    if (!ll::Global<RakNet::RakPeer>) { return ""; }
    std::string rv = ll::Global<RakNet::RakPeer>->GetSystemAddressFromGuid(mGuid).ToString(':');
    return rv.substr(0, rv.find('|'));
}
