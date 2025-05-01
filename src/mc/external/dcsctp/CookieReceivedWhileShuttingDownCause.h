#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class CookieReceivedWhileShuttingDownCause {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::CookieReceivedWhileShuttingDownCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
