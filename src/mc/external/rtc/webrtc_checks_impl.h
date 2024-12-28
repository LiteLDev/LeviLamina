#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/CheckArgType.h"

namespace rtc::webrtc_checks_impl {
// functions
// NOLINTBEGIN
MCAPI void FatalLog(char const*, int, char const*, ::rtc::webrtc_checks_impl::CheckArgType const*, ...);

MCAPI bool ParseArg(char**, ::rtc::webrtc_checks_impl::CheckArgType const**, ::std::string*);

MCAPI void UnreachableCodeReached();

MCAPI void WriteFatalLog(::std::string_view);

MCAPI void WriteFatalLog(char const*, int, ::std::string_view);
// NOLINTEND

} // namespace rtc::webrtc_checks_impl
