#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class IPAddress {
public:
    // prevent constructor by default
    IPAddress& operator=(IPAddress const&);
    IPAddress(IPAddress const&);
    IPAddress();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IPAddress@rtc@@UEAA@XZ
    virtual ~IPAddress();

    // symbol: ?IsNil@IPAddress@rtc@@QEBA_NXZ
    MCAPI bool IsNil() const;

    // symbol: ?ToSensitiveString@IPAddress@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToSensitiveString() const;

    // symbol: ?ToString@IPAddress@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ?ipv4_address@IPAddress@rtc@@QEBA?AUin_addr@@XZ
    MCAPI struct in_addr ipv4_address() const;

    // symbol: ?ipv6_address@IPAddress@rtc@@QEBA?AUin6_addr@@XZ
    MCAPI struct in6_addr ipv6_address() const;

    // symbol: ??9IPAddress@rtc@@QEBA_NAEBV01@@Z
    MCAPI bool operator!=(class rtc::IPAddress const&) const;

    // symbol: ??MIPAddress@rtc@@QEBA_NAEBV01@@Z
    MCAPI bool operator<(class rtc::IPAddress const&) const;

    // symbol: ??8IPAddress@rtc@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class rtc::IPAddress const&) const;

    // symbol: ?overhead@IPAddress@rtc@@QEBAHXZ
    MCAPI int overhead() const;

    // symbol: ?v4AddressAsHostOrderInteger@IPAddress@rtc@@QEBAIXZ
    MCAPI uint v4AddressAsHostOrderInteger() const;

    // NOLINTEND
};

}; // namespace rtc
