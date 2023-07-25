#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/http_alloc_deleter.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { struct http_retry_after_api_state; }
// clang-format on

namespace xbox::httpclient {

struct http_singleton {
public:
    // http_singleton inner types declare
    // clang-format off

    // clang-format on

    // http_singleton inner types define
    enum class singleton_access_mode {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_HTTP_SINGLETON
public:
    http_singleton& operator=(http_singleton const&) = delete;
    http_singleton(http_singleton const&)            = delete;
    http_singleton()                                 = delete;
#endif

public:
    /**
     * @symbol ?clear_retry_state\@http_singleton\@httpclient\@xbox\@\@QEAAXI\@Z
     */
    MCAPI void clear_retry_state(unsigned int);
    /**
     * @symbol ?get_retry_state\@http_singleton\@httpclient\@xbox\@\@QEAA?AUhttp_retry_after_api_state\@23\@I\@Z
     */
    MCAPI struct xbox::httpclient::http_retry_after_api_state get_retry_state(unsigned int);
    /**
     * @symbol
     * ??0http_singleton\@httpclient\@xbox\@\@QEAA\@AEBUHttpPerformInfo\@\@AEBUWebSocketPerformInfo\@\@$$QEAV?$unique_ptr\@UHC_PERFORM_ENV\@\@U?$http_alloc_deleter\@UHC_PERFORM_ENV\@\@\@\@\@std\@\@\@Z
     */
    MCAPI
    http_singleton(struct HttpPerformInfo const&, struct WebSocketPerformInfo const&, class std::unique_ptr<struct HC_PERFORM_ENV, struct http_alloc_deleter<struct HC_PERFORM_ENV>>&&);
    /**
     * @symbol ?set_retry_state\@http_singleton\@httpclient\@xbox\@\@QEAAXIAEBUhttp_retry_after_api_state\@23\@\@Z
     */
    MCAPI void set_retry_state(unsigned int, struct xbox::httpclient::http_retry_after_api_state const&);
    /**
     * @symbol ??1http_singleton\@httpclient\@xbox\@\@QEAA\@XZ
     */
    MCAPI ~http_singleton();
    /**
     * @symbol ?create\@http_singleton\@httpclient\@xbox\@\@SAJPEAUHCInitArgs\@\@\@Z
     */
    MCAPI static long create(struct HCInitArgs*);

    // private:
    /**
     * @symbol
     * ?singleton_access\@http_singleton\@httpclient\@xbox\@\@CAJW4singleton_access_mode\@123\@PEAUHCInitArgs\@\@AEAV?$shared_ptr\@Uhttp_singleton\@httpclient\@xbox\@\@\@std\@\@\@Z
     */
    MCAPI static long
    singleton_access(enum class xbox::httpclient::http_singleton::singleton_access_mode, struct HCInitArgs*, class std::shared_ptr<struct xbox::httpclient::http_singleton>&);
};

}; // namespace xbox::httpclient
