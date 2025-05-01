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
MCNAPI ::std::string ErrorCausesToString(::dcsctp::Parameters const&);

MCNAPI uint GenerateCrc32C(::rtc::ArrayView<uchar const>);

MCNAPI ::std::string_view ToString(::dcsctp::ErrorKind);

MCNAPI ::std::string_view ToString(::dcsctp::ReconfigurationResponseParameter::Result);
// NOLINTEND

} // namespace dcsctp
