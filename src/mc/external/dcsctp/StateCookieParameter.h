#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class StateCookieParameter {
public:
    // prevent constructor by default
    StateCookieParameter& operator=(StateCookieParameter const&);
    StateCookieParameter(StateCookieParameter const&);
    StateCookieParameter();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::StateCookieParameter> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
