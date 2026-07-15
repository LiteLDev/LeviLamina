#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/webrtc_checks_impl/CheckArgType.h"

namespace webrtc::webrtc_checks_impl {
// functions
// NOLINTBEGIN
MCNAPI void FatalLog(char const*, int, char const*, ::webrtc::webrtc_checks_impl::CheckArgType const*, ...);

MCNAPI bool ParseArg(char** args, ::webrtc::webrtc_checks_impl::CheckArgType const** fmt, ::std::string* s);

MCNAPI void UnreachableCodeReached();

MCNAPI void WriteFatalLog(::std::string_view output);

MCNAPI void WriteFatalLog(char const*, int, ::std::string_view output);
// NOLINTEND

} // namespace webrtc::webrtc_checks_impl
