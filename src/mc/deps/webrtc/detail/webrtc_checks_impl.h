#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/CheckArgType.h"

// auto generated forward declare list
// clang-format off
namespace rtc::webrtc_checks_impl { struct ToStringVal; }
// clang-format on

namespace rtc::webrtc_checks_impl {
// NOLINTBEGIN
// symbol: ?FatalLog@webrtc_checks_impl@rtc@@YAXPEBDH0PEBW4CheckArgType@12@ZZ
MCAPI void FatalLog(char const*, int, char const*, ::rtc::webrtc_checks_impl::CheckArgType const*, ...);

// symbol:
// ?ParseArg@webrtc_checks_impl@rtc@@YA_NPEAPEADPEAPEBW4CheckArgType@12@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool ParseArg(char**, ::rtc::webrtc_checks_impl::CheckArgType const**, std::string*);

// symbol: ?UnreachableCodeReached@webrtc_checks_impl@rtc@@YAXXZ
MCAPI void UnreachableCodeReached();

// symbol: ?WriteFatalLog@webrtc_checks_impl@rtc@@YAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI void WriteFatalLog(std::string_view);

// symbol: ?WriteFatalLog@webrtc_checks_impl@rtc@@YAXPEBDHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI void WriteFatalLog(char const*, int, std::string_view);
// NOLINTEND

}; // namespace rtc::webrtc_checks_impl
