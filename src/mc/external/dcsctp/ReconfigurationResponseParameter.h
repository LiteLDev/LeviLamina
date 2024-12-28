#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ReconfigurationResponseParameter {
public:
    // ReconfigurationResponseParameter inner types define
    enum class Result : uint {};

public:
    // prevent constructor by default
    ReconfigurationResponseParameter& operator=(ReconfigurationResponseParameter const&);
    ReconfigurationResponseParameter(ReconfigurationResponseParameter const&);
    ReconfigurationResponseParameter();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ReconfigurationResponseParameter> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
