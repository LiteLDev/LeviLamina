#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { class Uri; }
namespace xbox::httpclient { enum class proxy_protocol; }
namespace xbox::httpclient { enum class proxy_type; }
namespace xbox::httpclient { struct HeaderCompare; }
namespace xbox::httpclient { struct http_singleton; }
template<typename T0> class http_stl_allocator;
// clang-format on

namespace xbox::httpclient {
// NOLINTBEGIN
/**
 * @symbol
 * ?BasicAsciiLowercase\@httpclient\@xbox\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@\@Z
 */
MCAPI void BasicAsciiLowercase(std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>&);
/**
 * @symbol ?IsPathCharacter\@httpclient\@xbox\@\@YA_ND\@Z
 */
MCAPI bool IsPathCharacter(char);
/**
 * @symbol ?RunAsync\@httpclient\@xbox\@\@YAJ$$QEAV?$function\@$$A6AXXZ\@std\@\@PEAUXTaskQueueObject\@\@_K\@Z
 */
MCAPI long RunAsync(std::function<void(void)>&&, struct XTaskQueueObject*, uint64_t);
/**
 * @symbol ?StringToUint4\@httpclient\@xbox\@\@YA_NPEBD0AEA_KH\@Z
 */
MCAPI bool StringToUint4(char const*, char const*, uint64_t&, int);
/**
 * @symbol
 * ?WebSocketppConnectAsync\@httpclient\@xbox\@\@YAJPEBD0PEAUHC_WEBSOCKET_OBSERVER\@\@PEAUXAsyncBlock\@\@PEAXPEAUHC_PERFORM_ENV\@\@\@Z
 */
MCAPI long
WebSocketppConnectAsync(char const*, char const*, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*, void*, struct HC_PERFORM_ENV*);
/**
 * @symbol
 * ?WebSocketppDisconnect\@httpclient\@xbox\@\@YAJPEAUHC_WEBSOCKET_OBSERVER\@\@W4HCWebSocketCloseStatus\@\@PEAX\@Z
 */
MCAPI long WebSocketppDisconnect(struct HC_WEBSOCKET_OBSERVER*, enum class HCWebSocketCloseStatus, void*);
/**
 * @symbol
 * ?WebSocketppSendBinaryMessageAsync\@httpclient\@xbox\@\@YAJPEAUHC_WEBSOCKET_OBSERVER\@\@PEBEIPEAUXAsyncBlock\@\@PEAX\@Z
 */
MCAPI long
WebSocketppSendBinaryMessageAsync(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, struct XAsyncBlock*, void*);
/**
 * @symbol
 * ?WebSocketppSendMessageAsync\@httpclient\@xbox\@\@YAJPEAUHC_WEBSOCKET_OBSERVER\@\@PEBDPEAUXAsyncBlock\@\@PEAX\@Z
 */
MCAPI long WebSocketppSendMessageAsync(struct HC_WEBSOCKET_OBSERVER*, char const*, struct XAsyncBlock*, void*);
/**
 * @symbol
 * ?flatten_http_headers\@httpclient\@xbox\@\@YA?AV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$http_stl_allocator\@_W\@\@\@std\@\@AEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@V12\@UHeaderCompare\@httpclient\@xbox\@\@V?$http_stl_allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@V12\@\@std\@\@\@\@\@4\@\@Z
 */
MCAPI std::basic_string<wchar_t, std::char_traits<wchar_t>, class http_stl_allocator<wchar_t>>
      flatten_http_headers(std::map<
                     std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>,
                     std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>,
                     struct xbox::httpclient::HeaderCompare,
                     class http_stl_allocator<std::pair<
                         std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>> const,
                         std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>>>> const&);
/**
 * @symbol ?get_http_singleton\@httpclient\@xbox\@\@YA?AV?$shared_ptr\@Uhttp_singleton\@httpclient\@xbox\@\@\@std\@\@XZ
 */
MCAPI std::shared_ptr<struct xbox::httpclient::http_singleton> get_http_singleton();
/**
 * @symbol ?get_ie_proxy_info\@httpclient\@xbox\@\@YA?AW4proxy_type\@12\@W4proxy_protocol\@12\@AEAVUri\@12\@\@Z
 */
MCAPI enum class xbox::httpclient::proxy_type
get_ie_proxy_info(enum class xbox::httpclient::proxy_protocol, class xbox::httpclient::Uri&);
/**
 * @symbol
 * ?trim_whitespace\@httpclient\@xbox\@\@YAXAEAV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$http_stl_allocator\@_W\@\@\@std\@\@\@Z
 */
MCAPI void trim_whitespace(std::basic_string<wchar_t, std::char_traits<wchar_t>, class http_stl_allocator<wchar_t>>&);
/**
 * @symbol
 * ?verify_cert_chain_platform_specific\@httpclient\@xbox\@\@YA_NAEAVverify_context\@ssl\@asio\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@\@Z
 */
MCAPI bool
verify_cert_chain_platform_specific(class asio::ssl::verify_context&, std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>> const&);
// NOLINTEND

}; // namespace xbox::httpclient
