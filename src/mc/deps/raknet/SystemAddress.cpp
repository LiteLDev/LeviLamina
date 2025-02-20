#include "mc/deps/raknet/SystemAddress.h"

#include "winsock2.h"

#include "ws2ipdef.h"

namespace RakNet {

bool SystemAddress::operator==(SystemAddress const& right) const {
    auto& laddr4 = address.mUnkff0e2b.as<sockaddr_in>();
    auto& laddr6 = address.mUnk3a39ae.as<sockaddr_in6>();
    auto& raddr4 = right.address.mUnkff0e2b.as<sockaddr_in>();
    auto& raddr6 = right.address.mUnk3a39ae.as<sockaddr_in6>();
    return laddr4.sin_port == raddr4.sin_port
        && ((laddr4.sin_family == AF_INET && laddr4.sin_addr.s_addr == raddr4.sin_addr.s_addr)
            || (laddr4.sin_family == AF_INET6
                && memcmp(laddr6.sin6_addr.s6_addr, raddr6.sin6_addr.s6_addr, sizeof(laddr6.sin6_addr.s6_addr)) == 0));
}
} // namespace RakNet
