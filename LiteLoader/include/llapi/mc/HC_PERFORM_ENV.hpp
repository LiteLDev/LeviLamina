/**
 * @file  HC_PERFORM_ENV.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure HC_PERFORM_ENV.
 *
 */
struct HC_PERFORM_ENV {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HC_PERFORM_ENV
public:
    struct HC_PERFORM_ENV& operator=(struct HC_PERFORM_ENV const &) = delete;
    HC_PERFORM_ENV(struct HC_PERFORM_ENV const &) = delete;
    HC_PERFORM_ENV() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HC_PERFORM_ENV
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HC_PERFORM_ENV();
#endif
    /**
     * @symbol ?HttpCallPerformAsyncShim\@HC_PERFORM_ENV\@\@QEAAJPEAUHC_CALL\@\@PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long HttpCallPerformAsyncShim(struct HC_CALL *, struct XAsyncBlock *);
    /**
     * @symbol ?WebSocketConnectAsyncShim\@HC_PERFORM_ENV\@\@QEAAJ$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@0PEAUHC_WEBSOCKET_OBSERVER\@\@PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long WebSocketConnectAsyncShim(class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> &&, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> &&, struct HC_WEBSOCKET_OBSERVER *, struct XAsyncBlock *);
    /**
     * @symbol ?GetPlatformDefaultHttpHandlers\@HC_PERFORM_ENV\@\@SA?AUHttpPerformInfo\@\@XZ
     */
    MCAPI static struct HttpPerformInfo GetPlatformDefaultHttpHandlers();
    /**
     * @symbol ?GetPlatformDefaultWebSocketHandlers\@HC_PERFORM_ENV\@\@SA?AUWebSocketPerformInfo\@\@XZ
     */
    MCAPI static struct WebSocketPerformInfo GetPlatformDefaultWebSocketHandlers();
    /**
     * @symbol ?Initialize\@HC_PERFORM_ENV\@\@SA?AV?$Result\@V?$unique_ptr\@UHC_PERFORM_ENV\@\@U?$http_alloc_deleter\@UHC_PERFORM_ENV\@\@\@\@\@std\@\@\@\@PEAUHCInitArgs\@\@\@Z
     */
    MCAPI static class Result<class std::unique_ptr<struct HC_PERFORM_ENV, struct http_alloc_deleter<struct HC_PERFORM_ENV>>> Initialize(struct HCInitArgs *);

//private:
    /**
     * @symbol ?HttpPerformAsyncShimProvider\@HC_PERFORM_ENV\@\@CAJW4XAsyncOp\@\@PEBUXAsyncProviderData\@\@\@Z
     */
    MCAPI static long HttpPerformAsyncShimProvider(enum class XAsyncOp, struct XAsyncProviderData const *);
    /**
     * @symbol ?HttpPerformComplete\@HC_PERFORM_ENV\@\@CAXPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI static void HttpPerformComplete(struct XAsyncBlock *);
    /**
     * @symbol ?ProviderCleanup\@HC_PERFORM_ENV\@\@CAXPEAX_N\@Z
     */
    MCAPI static void ProviderCleanup(void *, bool);
    /**
     * @symbol ?WebSocketClosed\@HC_PERFORM_ENV\@\@CAXPEAUHC_WEBSOCKET_OBSERVER\@\@W4HCWebSocketCloseStatus\@\@PEAX\@Z
     */
    MCAPI static void WebSocketClosed(struct HC_WEBSOCKET_OBSERVER *, enum class HCWebSocketCloseStatus, void *);
    /**
     * @symbol ?WebSocketConnectAsyncShimProvider\@HC_PERFORM_ENV\@\@CAJW4XAsyncOp\@\@PEBUXAsyncProviderData\@\@\@Z
     */
    MCAPI static long WebSocketConnectAsyncShimProvider(enum class XAsyncOp, struct XAsyncProviderData const *);
    /**
     * @symbol ?WebSocketConnectComplete\@HC_PERFORM_ENV\@\@CAXPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI static void WebSocketConnectComplete(struct XAsyncBlock *);

};