#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/ErrorKind.h"
#include "mc/external/dcsctp/ReconfigurationResponseParameter.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameters; }
// clang-format on

namespace dcsctp {
// functions
// NOLINTBEGIN
MCAPI ::std::string ErrorCausesToString(::dcsctp::Parameters const&);

MCAPI uint GenerateCrc32C(::rtc::ArrayView<uchar const>);

MCAPI ::std::string_view ToString(::dcsctp::ErrorKind);

MCAPI ::std::string_view ToString(::dcsctp::ReconfigurationResponseParameter::Result);
// NOLINTEND

} // namespace dcsctp
