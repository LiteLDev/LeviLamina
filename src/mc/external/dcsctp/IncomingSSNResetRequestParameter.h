#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class IncomingSSNResetRequestParameter {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::IncomingSSNResetRequestParameter> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
