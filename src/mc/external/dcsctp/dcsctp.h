#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/ErrorKind.h"
#include "mc/external/dcsctp/ReconfigurationResponseParameter.h"
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameters; }
// clang-format on

namespace dcsctp {
// functions
// NOLINTBEGIN
MCNAPI ::std::string ErrorCausesToString(::dcsctp::Parameters const& parameters);

MCNAPI uint GenerateCrc32C(::webrtc::ArrayView<uchar const, 18446744073709546905> data);

MCNAPI ::std::string_view ToString(::dcsctp::ErrorKind error);

MCNAPI ::std::string_view ToString(::dcsctp::ReconfigurationResponseParameter::Result result);
// NOLINTEND

} // namespace dcsctp
