#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace rtc {

class SocketAddress {
public:
    // NOLINTBEGIN
    // symbol: ?Clear@SocketAddress@rtc@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ?EqualIPs@SocketAddress@rtc@@QEBA_NAEBV12@@Z
    MCAPI bool EqualIPs(class rtc::SocketAddress const&) const;

    // symbol: ?EqualPorts@SocketAddress@rtc@@QEBA_NAEBV12@@Z
    MCAPI bool EqualPorts(class rtc::SocketAddress const&) const;

    // symbol: ?FromString@SocketAddress@rtc@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool FromString(std::string_view);

    // symbol:
    // ?HostAsSensitiveURIString@SocketAddress@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string HostAsSensitiveURIString() const;

    // symbol:
    // ?HostAsURIString@SocketAddress@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string HostAsURIString() const;

    // symbol: ?IsAnyIP@SocketAddress@rtc@@QEBA_NXZ
    MCAPI bool IsAnyIP() const;

    // symbol: ?IsLoopbackIP@SocketAddress@rtc@@QEBA_NXZ
    MCAPI bool IsLoopbackIP() const;

    // symbol: ?IsNil@SocketAddress@rtc@@QEBA_NXZ
    MCAPI bool IsNil() const;

    // symbol: ?IsPrivateIP@SocketAddress@rtc@@QEBA_NXZ
    MCAPI bool IsPrivateIP() const;

    // symbol: ?IsUnresolvedIP@SocketAddress@rtc@@QEBA_NXZ
    MCAPI bool IsUnresolvedIP() const;

    // symbol: ?PortAsString@SocketAddress@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string PortAsString() const;

    // symbol: ?SetIP@SocketAddress@rtc@@QEAAXAEBVIPAddress@2@@Z
    MCAPI void SetIP(class rtc::IPAddress const&);

    // symbol: ?SetIP@SocketAddress@rtc@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void SetIP(std::string_view);

    // symbol: ?SetPort@SocketAddress@rtc@@QEAAXH@Z
    MCAPI void SetPort(int);

    // symbol: ?SetResolvedIP@SocketAddress@rtc@@QEAAXAEBVIPAddress@2@@Z
    MCAPI void SetResolvedIP(class rtc::IPAddress const&);

    // symbol: ??0SocketAddress@rtc@@QEAA@XZ
    MCAPI SocketAddress();

    // symbol: ??0SocketAddress@rtc@@QEAA@AEBV01@@Z
    MCAPI SocketAddress(class rtc::SocketAddress const&);

    // symbol: ??0SocketAddress@rtc@@QEAA@AEBVIPAddress@1@H@Z
    MCAPI SocketAddress(class rtc::IPAddress const&, int);

    // symbol: ??0SocketAddress@rtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H@Z
    MCAPI SocketAddress(std::string_view, int);

    // symbol:
    // ?ToSensitiveNameAndAddressString@SocketAddress@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToSensitiveNameAndAddressString() const;

    // symbol:
    // ?ToSensitiveString@SocketAddress@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToSensitiveString() const;

    // symbol: ?ToSockAddrStorage@SocketAddress@rtc@@QEBA_KPEAUsockaddr_storage@@@Z
    MCAPI uint64 ToSockAddrStorage(struct sockaddr_storage*) const;

    // symbol: ?ToString@SocketAddress@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ?ip@SocketAddress@rtc@@QEBAIXZ
    MCAPI uint ip() const;

    // symbol: ?ipaddr@SocketAddress@rtc@@QEBAAEBVIPAddress@2@XZ
    MCAPI class rtc::IPAddress const& ipaddr() const;

    // symbol: ??MSocketAddress@rtc@@QEBA_NAEBV01@@Z
    MCAPI bool operator<(class rtc::SocketAddress const&) const;

    // symbol: ??4SocketAddress@rtc@@QEAAAEAV01@AEBV01@@Z
    MCAPI class rtc::SocketAddress& operator=(class rtc::SocketAddress const&);

    // symbol: ??8SocketAddress@rtc@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class rtc::SocketAddress const&) const;

    // symbol: ?port@SocketAddress@rtc@@QEBAGXZ
    MCAPI ushort port() const;

    // symbol: ??1SocketAddress@rtc@@QEAA@XZ
    MCAPI ~SocketAddress();

    // NOLINTEND
};

}; // namespace rtc
