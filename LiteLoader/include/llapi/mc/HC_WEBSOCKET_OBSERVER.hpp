/**
 * @file  HC_WEBSOCKET_OBSERVER.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct HC_WEBSOCKET_OBSERVER {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HC_WEBSOCKET_OBSERVER
public:
    struct HC_WEBSOCKET_OBSERVER& operator=(struct HC_WEBSOCKET_OBSERVER const &) = delete;
    HC_WEBSOCKET_OBSERVER(struct HC_WEBSOCKET_OBSERVER const &) = delete;
    HC_WEBSOCKET_OBSERVER() = delete;
#endif

public:
    /**
     * @symbol ?Initialize\@HC_WEBSOCKET_OBSERVER\@\@SA?AV?$unique_ptr\@UHC_WEBSOCKET_OBSERVER\@\@U?$http_alloc_deleter\@UHC_WEBSOCKET_OBSERVER\@\@\@\@\@std\@\@V?$shared_ptr\@VWebSocket\@httpclient\@xbox\@\@\@3\@P6AXPEAU1\@PEBDPEAX\@ZP6AX1PEBEI3\@ZP6AX15I_N3\@ZP6AX1W4HCWebSocketCloseStatus\@\@3\@Z3\@Z
     */
    MCAPI static class std::unique_ptr<struct HC_WEBSOCKET_OBSERVER, struct http_alloc_deleter<struct HC_WEBSOCKET_OBSERVER>> Initialize(class std::shared_ptr<class xbox::httpclient::WebSocket>, void ( *)(struct HC_WEBSOCKET_OBSERVER *, char const *, void *), void ( *)(struct HC_WEBSOCKET_OBSERVER *, unsigned char const *, unsigned int, void *), void ( *)(struct HC_WEBSOCKET_OBSERVER *, unsigned char const *, unsigned int, bool, void *), void ( *)(struct HC_WEBSOCKET_OBSERVER *, enum class HCWebSocketCloseStatus, void *), void *);

//private:
    /**
     * @symbol ?BinaryMessageFragmentFunc\@HC_WEBSOCKET_OBSERVER\@\@CAXPEAU1\@PEBEI_NPEAX\@Z
     */
    MCAPI static void BinaryMessageFragmentFunc(struct HC_WEBSOCKET_OBSERVER *, unsigned char const *, unsigned int, bool, void *);
    /**
     * @symbol ?BinaryMessageFunc\@HC_WEBSOCKET_OBSERVER\@\@CAXPEAU1\@PEBEIPEAX\@Z
     */
    MCAPI static void BinaryMessageFunc(struct HC_WEBSOCKET_OBSERVER *, unsigned char const *, unsigned int, void *);
    /**
     * @symbol ?CloseFunc\@HC_WEBSOCKET_OBSERVER\@\@CAXPEAU1\@W4HCWebSocketCloseStatus\@\@PEAX\@Z
     */
    MCAPI static void CloseFunc(struct HC_WEBSOCKET_OBSERVER *, enum class HCWebSocketCloseStatus, void *);
    /**
     * @symbol ?MessageFunc\@HC_WEBSOCKET_OBSERVER\@\@CAXPEAU1\@PEBDPEAX\@Z
     */
    MCAPI static void MessageFunc(struct HC_WEBSOCKET_OBSERVER *, char const *, void *);

};