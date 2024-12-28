#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class HeartbeatInfoParameter {
public:
    // prevent constructor by default
    HeartbeatInfoParameter& operator=(HeartbeatInfoParameter const&);
    HeartbeatInfoParameter(HeartbeatInfoParameter const&);
    HeartbeatInfoParameter();

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
