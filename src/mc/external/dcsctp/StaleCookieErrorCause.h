#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class StaleCookieErrorCause {
public:
    // prevent constructor by default
    StaleCookieErrorCause& operator=(StaleCookieErrorCause const&);
    StaleCookieErrorCause(StaleCookieErrorCause const&);
    StaleCookieErrorCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::StaleCookieErrorCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
