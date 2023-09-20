#include "llapi/mc/NetworkIdentifier.hpp"
#include "llapi/mc/RakNet.hpp"

string NetworkIdentifier::getIP() {
    string rv = Global<RakNet::RakPeer>->getAdr(*this).ToString(':');
    return rv.substr(0, rv.find('|'));
}