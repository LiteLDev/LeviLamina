#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/CheckArgType.h"

namespace rtc::webrtc_checks_impl {
// functions
// NOLINTBEGIN
MCNAPI void FatalLog(char const*, int, char const*, ::rtc::webrtc_checks_impl::CheckArgType const*, ...);

MCNAPI bool ParseArg(char** args, ::rtc::webrtc_checks_impl::CheckArgType const** fmt, ::std::string* s);

MCNAPI void UnreachableCodeReached();

MCNAPI void WriteFatalLog(::std::string_view output);

MCNAPI void WriteFatalLog(char const* file, int line, ::std::string_view output);
// NOLINTEND

}
