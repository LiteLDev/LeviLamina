#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ReconfigurationResponseParameter {
public:
    // ReconfigurationResponseParameter inner types define
    enum class Result : uint {};

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::ReconfigurationResponseParameter> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
