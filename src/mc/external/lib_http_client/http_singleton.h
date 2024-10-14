#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/http_alloc_deleter.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { struct http_retry_after_api_state; }
struct HCInitArgs;
struct HC_PERFORM_ENV;
struct HttpPerformInfo;
struct WebSocketPerformInfo;
// clang-format on

namespace xbox::httpclient {

struct http_singleton {
public:
    // http_singleton inner types define
    enum class singleton_access_mode {};

public:
    // prevent constructor by default
    http_singleton& operator=(http_singleton const&);
    http_singleton(http_singleton const&);
    http_singleton();

public:
    // NOLINTBEGIN
    MCAPI void clear_retry_state(uint);

    MCAPI struct xbox::httpclient::http_retry_after_api_state get_retry_state(uint);

    MCAPI
    http_singleton(struct HttpPerformInfo const&, struct WebSocketPerformInfo const&, std::unique_ptr<struct HC_PERFORM_ENV, struct http_alloc_deleter<struct HC_PERFORM_ENV>>&&);

    MCAPI void set_retry_state(uint, struct xbox::httpclient::http_retry_after_api_state const&);

    MCAPI ~http_singleton();

    MCAPI static long create(struct HCInitArgs*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static long
    singleton_access(::xbox::httpclient::http_singleton::singleton_access_mode, struct HCInitArgs*, std::shared_ptr<struct xbox::httpclient::http_singleton>&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace xbox::httpclient
