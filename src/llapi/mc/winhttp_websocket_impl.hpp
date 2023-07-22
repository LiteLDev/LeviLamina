/**
 * @file  winhttp_websocket_impl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure winhttp_websocket_impl.
 *
 */
struct winhttp_websocket_impl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WINHTTP_WEBSOCKET_IMPL
public:
    struct winhttp_websocket_impl& operator=(struct winhttp_websocket_impl const &) = delete;
    winhttp_websocket_impl(struct winhttp_websocket_impl const &) = delete;
    winhttp_websocket_impl() = delete;
#endif

public:
    /**
     * @symbol  ?connect_websocket\@winhttp_websocket_impl\@\@QEAAJPEAUHC_WEBSOCKET\@\@PEAUXAsyncBlock\@\@V?$shared_ptr\@UWinHttpState\@httpclient\@xbox\@\@\@std\@\@\@Z
     */
    MCAPI long connect_websocket(struct HC_WEBSOCKET *, struct XAsyncBlock *, class std::shared_ptr<struct xbox::httpclient::WinHttpState>);
    /**
     * @symbol  ?send_websocket_binary_message_async\@winhttp_websocket_impl\@\@QEAAJPEAUXAsyncBlock\@\@PEBEI\@Z
     */
    MCAPI long send_websocket_binary_message_async(struct XAsyncBlock *, unsigned char const *, unsigned int);
    /**
     * @symbol  ?send_websocket_message_async\@winhttp_websocket_impl\@\@QEAAJPEAUXAsyncBlock\@\@PEBD\@Z
     */
    MCAPI long send_websocket_message_async(struct XAsyncBlock *, char const *);

//private:
    /**
     * @symbol  ?enqueue_message\@winhttp_websocket_impl\@\@AEAAJV?$shared_ptr\@Usend_msg_context\@winhttp_websocket_impl\@\@\@std\@\@\@Z
     */
    MCAPI long enqueue_message(class std::shared_ptr<struct winhttp_websocket_impl::send_msg_context>);
    /**
     * @symbol  ?send_complete\@winhttp_websocket_impl\@\@AEAAXJ\@Z
     */
    MCAPI void send_complete(long);
    /**
     * @symbol  ?send_message\@winhttp_websocket_impl\@\@AEAAXV?$shared_ptr\@Usend_msg_context\@winhttp_websocket_impl\@\@\@std\@\@\@Z
     */
    MCAPI void send_message(class std::shared_ptr<struct winhttp_websocket_impl::send_msg_context>);

};