#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/lib_http_client/proxy_protocol.h"
#include "mc/external/lib_http_client/proxy_type.h"

// auto generated forward declare list
// clang-format off
struct HCInitArgs;
namespace xbox::httpclient { class Uri; }
namespace xbox::httpclient { struct HeaderCompare; }
namespace xbox::httpclient { struct PlatformComponents; }
namespace xbox::httpclient { struct http_singleton; }
// clang-format on

namespace xbox::httpclient {
// functions
// NOLINTBEGIN
MCNAPI void BasicAsciiLowercase(::http_string&);

MCNAPI uint64 GetThreadId();

MCNAPI bool IsPathCharacter(char);

MCNAPI long PlatformInitialize(::xbox::httpclient::PlatformComponents&, ::HCInitArgs*);

MCNAPI bool StringToUint4(char const*, char const*, uint64&, int);

MCNAPI void TraceToDebugger(char const*, ::HCTraceLevel, char const*);

MCNAPI ::http_wstring flatten_http_headers(
    ::std::map<
        ::http_string,
        ::http_string,
        ::xbox::httpclient::HeaderCompare,
        ::http_stl_allocator<::std::pair<::http_string const, ::http_string>>> const&
);

MCNAPI ::std::shared_ptr<::xbox::httpclient::http_singleton> get_http_singleton();

MCNAPI ::xbox::httpclient::proxy_type get_ie_proxy_info(::xbox::httpclient::proxy_protocol, ::xbox::httpclient::Uri&);

MCNAPI void trim_whitespace(::http_wstring&);
// NOLINTEND

} // namespace xbox::httpclient
