#include "mc/network/NetworkIdentifier.h"
#include "mc/deps/raknet/RakPeer.h"

#include "liteloader/api/service/GlobalService.h"

std::string NetworkIdentifier::getIPAndPort() const {
    std::string rv = ll::Global<RakNet::RakPeer>->GetSystemAddressFromGuid(mGuid).ToString(':');
    return rv.substr(0, rv.find('|'));
}
