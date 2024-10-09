#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/WinHttpConnection.h"
#include "mc/external/lib_http_client/http_alloc_deleter.h"
#include "mc/external/lib_http_client/http_singleton.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/lib_http_client/proxy_protocol.h"
#include "mc/external/lib_http_client/proxy_type.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { class Uri; }
namespace xbox::httpclient { class WebSocket; }
namespace xbox::httpclient { class WinHttpConnection; }
namespace xbox::httpclient { class WinHttpProvider; }
namespace xbox::httpclient { struct HeaderCompare; }
namespace xbox::httpclient { struct WinHttpCallbackContext; }
namespace xbox::httpclient { struct WinHttpWebSocketExports; }
namespace xbox::httpclient { struct XPlatSecurityInformation; }
namespace xbox::httpclient { struct http_retry_after_api_state; }
namespace xbox::httpclient { struct http_singleton; }
struct HCInitArgs;
struct HC_CALL;
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct HttpPerformInfo;
struct WebSocketPerformInfo;
struct XAsyncBlock;
struct XAsyncProviderData;
struct XTaskQueueObject;
// clang-format on

namespace xbox::httpclient {
// NOLINTBEGIN
MCAPI void BasicAsciiLowercase(http_string&);

MCAPI bool IsPathCharacter(char);

MCAPI long RunAsync(std::function<void()>&&, struct XTaskQueueObject*, uint64);

MCAPI bool StringToUint4(char const*, char const*, uint64&, int);

MCAPI long
WebSocketppConnectAsync(char const*, char const*, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*, void*, struct HC_PERFORM_ENV*);

MCAPI long WebSocketppDisconnect(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

MCAPI long
WebSocketppSendBinaryMessageAsync(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, struct XAsyncBlock*, void*);

MCAPI long WebSocketppSendMessageAsync(struct HC_WEBSOCKET_OBSERVER*, char const*, struct XAsyncBlock*, void*);

MCAPI http_wstring flatten_http_headers(std::map<
                                        http_string,
                                        http_string,
                                        struct xbox::httpclient::HeaderCompare,
                                        class http_stl_allocator<std::pair<http_string const, http_string>>> const&);

MCAPI std::shared_ptr<struct xbox::httpclient::http_singleton> get_http_singleton();

MCAPI ::xbox::httpclient::proxy_type
get_ie_proxy_info(::xbox::httpclient::proxy_protocol, class xbox::httpclient::Uri&);

MCAPI void trim_whitespace(http_wstring&);

MCAPI bool verify_cert_chain_platform_specific(asio::ssl::verify_context&, http_string const&);
// NOLINTEND

}; // namespace xbox::httpclient
