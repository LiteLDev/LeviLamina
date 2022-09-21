/**
 * @file  MC/wspp_websocket_impl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -114615976
     * @symbol ?close@wspp_websocket_impl@@QEAAJW4HCWebSocketCloseStatus@@@Z
     */
    MCAPI long close(enum HCWebSocketCloseStatus);
    /**
     * @hash   -10996809
     * @symbol ?connect@wspp_websocket_impl@@QEAAJPEAUXAsyncBlock@@@Z
     */
    MCAPI long connect(struct XAsyncBlock *);
    /**
     * @hash   1667404935
     * @symbol ?send@wspp_websocket_impl@@QEAAJPEAUXAsyncBlock@@PEBD@Z
     */
    MCAPI long send(struct XAsyncBlock *, char const *);
    /**
     * @hash   433044322
     * @symbol ?sendBinary@wspp_websocket_impl@@QEAAJPEAUXAsyncBlock@@PEBEI@Z
     */
    MCAPI long sendBinary(struct XAsyncBlock *, unsigned char const *, unsigned int);
    /**
     * @hash   1555580465
     * @symbol ??0wspp_websocket_impl@@QEAA@PEAUHC_WEBSOCKET@@PEBD1@Z
     */
    MCAPI wspp_websocket_impl(struct HC_WEBSOCKET *, char const *, char const *);

//private:
    /**
     * @hash   -98262813
     * @symbol ?send_msg@wspp_websocket_impl@@AEAAJXZ
     */
    MCAPI long send_msg();
    /**
     * @hash   1609275332
     * @symbol ?send_msg_do_work@wspp_websocket_impl@@AEAAJAEAUwebsocket_outgoing_message@@@Z
     */
    MCAPI long send_msg_do_work(struct websocket_outgoing_message &);
    /**
     * @hash   -1659761350
     * @symbol ?send_ping@wspp_websocket_impl@@AEAAXXZ
     */
    MCAPI void send_ping();

};