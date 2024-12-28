#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class StateCookie {
public:
    // prevent constructor by default
    StateCookie& operator=(StateCookie const&);
    StateCookie(StateCookie const&);
    StateCookie();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<uchar> Serialize();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::StateCookie> Deserialize(::rtc::ArrayView<uchar const>);
    // NOLINTEND
};

} // namespace dcsctp
