#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace NetherNet {

class DnsCache {
public:
    // prevent constructor by default
    DnsCache& operator=(DnsCache const&);
    DnsCache(DnsCache const&);
    DnsCache();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Add@DnsCache@NetherNet@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@HAEBV?$vector@VIPAddress@rtc@@V?$allocator@VIPAddress@rtc@@@std@@@4@@Z
    MCAPI void Add(std::string_view, int, std::vector<class rtc::IPAddress> const&);

    // symbol:
    // ?Add@DnsCache@NetherNet@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@HAEBV?$vector@VIPAddress@rtc@@V?$allocator@VIPAddress@rtc@@@std@@@4@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@4@@Z
    MCAPI void
    Add(std::string_view, int, std::vector<class rtc::IPAddress> const&, std::chrono::steady_clock::time_point);

    // symbol:
    // ?TryGet@DnsCache@NetherNet@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@HPEAV?$vector@VIPAddress@rtc@@V?$allocator@VIPAddress@rtc@@@std@@@4@@Z
    MCAPI bool TryGet(std::string_view, int, std::vector<class rtc::IPAddress>*);

    // NOLINTEND
};

}; // namespace NetherNet
