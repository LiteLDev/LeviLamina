#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class StateCookie {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<uchar> Serialize();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::StateCookie> Deserialize(::rtc::ArrayView<uchar const>);
    // NOLINTEND
};

} // namespace dcsctp
