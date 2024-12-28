#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/lib_http_client/proxy_protocol.h"
#include "mc/external/lib_http_client/proxy_type.h"

// auto generated forward declare list
// clang-format off
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
struct XTaskQueueObject;
namespace xbox::httpclient { class Uri; }
namespace xbox::httpclient { struct HeaderCompare; }
namespace xbox::httpclient { struct http_singleton; }
// clang-format on

namespace xbox::httpclient {
// functions
// NOLINTBEGIN
MCAPI void BasicAsciiLowercase(::http_string&);

MCAPI bool IsPathCharacter(char);

MCAPI long RunAsync(::std::function<void()>&&, ::XTaskQueueObject*, uint64);

MCAPI bool StringToUint4(char const*, char const*, uint64&, int);

MCAPI long
WebSocketppConnectAsync(char const*, char const*, ::HC_WEBSOCKET_OBSERVER*, ::XAsyncBlock*, void*, ::HC_PERFORM_ENV*);

MCAPI long WebSocketppDisconnect(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

MCAPI long WebSocketppSendBinaryMessageAsync(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, ::XAsyncBlock*, void*);

MCAPI long WebSocketppSendMessageAsync(::HC_WEBSOCKET_OBSERVER*, char const*, ::XAsyncBlock*, void*);

MCAPI ::http_wstring
flatten_http_headers(::std::map<
                     ::http_string,
                     ::http_string,
                     ::xbox::httpclient::HeaderCompare,
                     ::http_stl_allocator<::std::pair<::http_string const, ::http_string>>> const&);

MCAPI ::std::shared_ptr<::xbox::httpclient::http_singleton> get_http_singleton();

MCAPI ::xbox::httpclient::proxy_type get_ie_proxy_info(::xbox::httpclient::proxy_protocol, ::xbox::httpclient::Uri&);

MCAPI void trim_whitespace(::http_wstring&);

MCAPI bool verify_cert_chain_platform_specific(::asio::ssl::verify_context&, ::http_string const&);
// NOLINTEND

} // namespace xbox::httpclient
