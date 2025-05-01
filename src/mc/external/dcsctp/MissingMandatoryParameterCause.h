#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class MissingMandatoryParameterCause {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::MissingMandatoryParameterCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
