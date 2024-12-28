#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class SupportedExtensionsParameter {
public:
    // prevent constructor by default
    SupportedExtensionsParameter& operator=(SupportedExtensionsParameter const&);
    SupportedExtensionsParameter(SupportedExtensionsParameter const&);
    SupportedExtensionsParameter();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::SupportedExtensionsParameter> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
