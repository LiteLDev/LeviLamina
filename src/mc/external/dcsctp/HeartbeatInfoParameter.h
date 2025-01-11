#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class HeartbeatInfoParameter {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::HeartbeatInfoParameter> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
