/**
 * @file  wspp_websocket_impl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure wspp_websocket_impl.
 *
 */
struct wspp_websocket_impl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WSPP_WEBSOCKET_IMPL
public:
    struct wspp_websocket_impl& operator=(struct wspp_websocket_impl const &) = delete;
    wspp_websocket_impl(struct wspp_websocket_impl const &) = delete;
    wspp_websocket_impl() = delete;
#endif

public:
    /**
     * @symbol  ?close\@wspp_websocket_impl\@\@QEAAJW4HCWebSocketCloseStatus\@\@\@Z
     */
    MCAPI long close(enum class HCWebSocketCloseStatus);
    /**
     * @symbol  ?connect\@wspp_websocket_impl\@\@QEAAJPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long connect(struct XAsyncBlock *);
    /**
     * @symbol  ?send\@wspp_websocket_impl\@\@QEAAJPEAUXAsyncBlock\@\@PEBD\@Z
     */
    MCAPI long send(struct XAsyncBlock *, char const *);
    /**
     * @symbol  ?sendBinary\@wspp_websocket_impl\@\@QEAAJPEAUXAsyncBlock\@\@PEBEI\@Z
     */
    MCAPI long sendBinary(struct XAsyncBlock *, unsigned char const *, unsigned int);
    /**
     * @symbol  ??0wspp_websocket_impl\@\@QEAA\@PEAUHC_WEBSOCKET\@\@PEBD1\@Z
     */
    MCAPI wspp_websocket_impl(struct HC_WEBSOCKET *, char const *, char const *);

//private:
    /**
     * @symbol  ?send_msg\@wspp_websocket_impl\@\@AEAAJXZ
     */
    MCAPI long send_msg();
    /**
     * @symbol  ?send_msg_do_work\@wspp_websocket_impl\@\@AEAAJAEAUwebsocket_outgoing_message\@\@\@Z
     */
    MCAPI long send_msg_do_work(struct websocket_outgoing_message &);
    /**
     * @symbol  ?send_ping\@wspp_websocket_impl\@\@AEAAXXZ
     */
    MCAPI void send_ping();

};