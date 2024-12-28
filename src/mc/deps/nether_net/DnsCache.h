#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace webrtc { class flat_map; }
// clang-format on

namespace NetherNet {

class DnsCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkaa518e;
    // NOLINTEND

public:
    // prevent constructor by default
    DnsCache& operator=(DnsCache const&);
    DnsCache(DnsCache const&);
    DnsCache();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Add(::std::string_view hostname, int family, ::std::vector<::rtc::IPAddress> const& result);

    MCAPI void
    Add(::std::string_view                      hostname,
        int                                     family,
        ::std::vector<::rtc::IPAddress> const&  result,
        ::std::chrono::steady_clock::time_point expiration);

    MCAPI bool TryGet(::std::string_view hostname, int family, ::std::vector<::rtc::IPAddress>* outResult);
    // NOLINTEND
};

} // namespace NetherNet
