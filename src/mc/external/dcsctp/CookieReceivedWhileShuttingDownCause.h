#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class CookieReceivedWhileShuttingDownCause {
public:
    // prevent constructor by default
    CookieReceivedWhileShuttingDownCause& operator=(CookieReceivedWhileShuttingDownCause const&);
    CookieReceivedWhileShuttingDownCause(CookieReceivedWhileShuttingDownCause const&);
    CookieReceivedWhileShuttingDownCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::CookieReceivedWhileShuttingDownCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
