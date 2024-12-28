#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class NoUserDataCause {
public:
    // prevent constructor by default
    NoUserDataCause& operator=(NoUserDataCause const&);
    NoUserDataCause(NoUserDataCause const&);
    NoUserDataCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::NoUserDataCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
