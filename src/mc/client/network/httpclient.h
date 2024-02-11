#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/WinHttpConnection.h"
#include "mc/client/network/http_singleton.h"
#include "mc/client/network/proxy_protocol.h"
#include "mc/client/network/proxy_type.h"
#include "mc/common/wrapper/Result.h"
#include "mc/network/HCWebSocketCloseStatus.h"
#include "mc/network/XAsyncOp.h"
#include "mc/network/http_alloc_deleter.h"
#include "mc/network/http_stl_allocator.h"

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
// symbol:
// ?BasicAsciiLowercase@httpclient@xbox@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@@Z
MCAPI void BasicAsciiLowercase(http_string&);

// symbol: ?IsPathCharacter@httpclient@xbox@@YA_ND@Z
MCAPI bool IsPathCharacter(char);

// symbol: ?RunAsync@httpclient@xbox@@YAJ$$QEAV?$function@$$A6AXXZ@std@@PEAUXTaskQueueObject@@_K@Z
MCAPI long RunAsync(std::function<void()>&&, struct XTaskQueueObject*, uint64);

// symbol: ?StringToUint4@httpclient@xbox@@YA_NPEBD0AEA_KH@Z
MCAPI bool StringToUint4(char const*, char const*, uint64&, int);

// symbol:
// ?WebSocketppConnectAsync@httpclient@xbox@@YAJPEBD0PEAUHC_WEBSOCKET_OBSERVER@@PEAUXAsyncBlock@@PEAXPEAUHC_PERFORM_ENV@@@Z
MCAPI long
WebSocketppConnectAsync(char const*, char const*, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*, void*, struct HC_PERFORM_ENV*);

// symbol: ?WebSocketppDisconnect@httpclient@xbox@@YAJPEAUHC_WEBSOCKET_OBSERVER@@W4HCWebSocketCloseStatus@@PEAX@Z
MCAPI long WebSocketppDisconnect(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

// symbol:
// ?WebSocketppSendBinaryMessageAsync@httpclient@xbox@@YAJPEAUHC_WEBSOCKET_OBSERVER@@PEBEIPEAUXAsyncBlock@@PEAX@Z
MCAPI long
WebSocketppSendBinaryMessageAsync(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, struct XAsyncBlock*, void*);

// symbol: ?WebSocketppSendMessageAsync@httpclient@xbox@@YAJPEAUHC_WEBSOCKET_OBSERVER@@PEBDPEAUXAsyncBlock@@PEAX@Z
MCAPI long WebSocketppSendMessageAsync(struct HC_WEBSOCKET_OBSERVER*, char const*, struct XAsyncBlock*, void*);

// symbol:
// ?flatten_http_headers@httpclient@xbox@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$http_stl_allocator@_W@@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@V12@UHeaderCompare@httpclient@xbox@@V?$http_stl_allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@V12@@std@@@@@4@@Z
MCAPI http_wstring flatten_http_headers(std::map<
                                        http_string,
                                        http_string,
                                        struct xbox::httpclient::HeaderCompare,
                                        class http_stl_allocator<std::pair<http_string const, http_string>>> const&);

// symbol: ?get_http_singleton@httpclient@xbox@@YA?AV?$shared_ptr@Uhttp_singleton@httpclient@xbox@@@std@@XZ
MCAPI std::shared_ptr<struct xbox::httpclient::http_singleton> get_http_singleton();

// symbol: ?get_ie_proxy_info@httpclient@xbox@@YA?AW4proxy_type@12@W4proxy_protocol@12@AEAVUri@12@@Z
MCAPI ::xbox::httpclient::proxy_type
get_ie_proxy_info(::xbox::httpclient::proxy_protocol, class xbox::httpclient::Uri&);

// symbol:
// ?trim_whitespace@httpclient@xbox@@YAXAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$http_stl_allocator@_W@@@std@@@Z
MCAPI void trim_whitespace(http_wstring&);

// symbol:
// ?verify_cert_chain_platform_specific@httpclient@xbox@@YA_NAEAVverify_context@ssl@asio@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@@Z
MCAPI bool verify_cert_chain_platform_specific(asio::ssl::verify_context&, http_string const&);
// NOLINTEND

}; // namespace xbox::httpclient
