#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Result.h"
#include "mc/network/http_alloc_deleter.h"
#include "mc/network/http_stl_allocator.h"

struct HC_PERFORM_ENV {

public:
    // prevent constructor by default
    HC_PERFORM_ENV& operator=(HC_PERFORM_ENV const&) = delete;
    HC_PERFORM_ENV(HC_PERFORM_ENV const&)            = delete;
    HC_PERFORM_ENV()                                 = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HC_PERFORM_ENV
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HC_PERFORM_ENV(); // NOLINT
#endif
    /**
     * @symbol ?HttpCallPerformAsyncShim\@HC_PERFORM_ENV\@\@QEAAJPEAUHC_CALL\@\@PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long HttpCallPerformAsyncShim(struct HC_CALL*, struct XAsyncBlock*); // NOLINT
    /**
     * @symbol
     * ?WebSocketConnectAsyncShim\@HC_PERFORM_ENV\@\@QEAAJ$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@0PEAUHC_WEBSOCKET_OBSERVER\@\@PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long
    WebSocketConnectAsyncShim(class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>&&, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>&&, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*); // NOLINT
    /**
     * @symbol ?GetPlatformDefaultHttpHandlers\@HC_PERFORM_ENV\@\@SA?AUHttpPerformInfo\@\@XZ
     */
    MCAPI static struct HttpPerformInfo GetPlatformDefaultHttpHandlers(); // NOLINT
    /**
     * @symbol ?GetPlatformDefaultWebSocketHandlers\@HC_PERFORM_ENV\@\@SA?AUWebSocketPerformInfo\@\@XZ
     */
    MCAPI static struct WebSocketPerformInfo GetPlatformDefaultWebSocketHandlers(); // NOLINT
    /**
     * @symbol
     * ?Initialize\@HC_PERFORM_ENV\@\@SA?AV?$Result\@V?$unique_ptr\@UHC_PERFORM_ENV\@\@U?$http_alloc_deleter\@UHC_PERFORM_ENV\@\@\@\@\@std\@\@\@\@PEAUHCInitArgs\@\@\@Z
     */
    MCAPI static class Result<
        class std::unique_ptr<struct HC_PERFORM_ENV, struct http_alloc_deleter<struct HC_PERFORM_ENV>>>
    Initialize(struct HCInitArgs*); // NOLINT

    // private:
    /**
     * @symbol ?HttpPerformAsyncShimProvider\@HC_PERFORM_ENV\@\@CAJW4XAsyncOp\@\@PEBUXAsyncProviderData\@\@\@Z
     */
    MCAPI static long HttpPerformAsyncShimProvider(enum class XAsyncOp, struct XAsyncProviderData const*); // NOLINT
    /**
     * @symbol ?HttpPerformComplete\@HC_PERFORM_ENV\@\@CAXPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI static void HttpPerformComplete(struct XAsyncBlock*); // NOLINT
    /**
     * @symbol ?ProviderCleanup\@HC_PERFORM_ENV\@\@CAXPEAX_N\@Z
     */
    MCAPI static void ProviderCleanup(void*, bool); // NOLINT
    /**
     * @symbol ?WebSocketClosed\@HC_PERFORM_ENV\@\@CAXPEAUHC_WEBSOCKET_OBSERVER\@\@W4HCWebSocketCloseStatus\@\@PEAX\@Z
     */
    MCAPI static void
    WebSocketClosed(struct HC_WEBSOCKET_OBSERVER*, enum class HCWebSocketCloseStatus, void*); // NOLINT
    /**
     * @symbol ?WebSocketConnectAsyncShimProvider\@HC_PERFORM_ENV\@\@CAJW4XAsyncOp\@\@PEBUXAsyncProviderData\@\@\@Z
     */
    MCAPI static long
    WebSocketConnectAsyncShimProvider(enum class XAsyncOp, struct XAsyncProviderData const*); // NOLINT
    /**
     * @symbol ?WebSocketConnectComplete\@HC_PERFORM_ENV\@\@CAXPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI static void WebSocketConnectComplete(struct XAsyncBlock*); // NOLINT
};
