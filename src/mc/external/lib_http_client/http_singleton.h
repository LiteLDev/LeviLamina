#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/http_alloc_deleter.h"

// auto generated forward declare list
// clang-format off
struct HCInitArgs;
struct HC_PERFORM_ENV;
struct HttpPerformInfo;
struct WebSocketPerformInfo;
namespace xbox::httpclient { struct http_retry_after_api_state; }
// clang-format on

namespace xbox::httpclient {

struct http_singleton {
public:
    // http_singleton inner types define
    enum class singleton_access_mode : uint {};

public:
    // prevent constructor by default
    http_singleton();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear_retry_state(uint);

    MCNAPI ::xbox::httpclient::http_retry_after_api_state get_retry_state(uint);

    MCNAPI http_singleton(
        ::HttpPerformInfo const&,
        ::WebSocketPerformInfo const&,
        ::std::unique_ptr<::HC_PERFORM_ENV, ::http_alloc_deleter<::HC_PERFORM_ENV>>&&
    );

    MCNAPI void set_retry_state(uint, ::xbox::httpclient::http_retry_after_api_state const&);

    MCNAPI ~http_singleton();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static long create(::HCInitArgs*);

    MCNAPI static long singleton_access(
        ::xbox::httpclient::http_singleton::singleton_access_mode,
        ::HCInitArgs*,
        ::std::shared_ptr<::xbox::httpclient::http_singleton>&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HttpPerformInfo const&,
        ::WebSocketPerformInfo const&,
        ::std::unique_ptr<::HC_PERFORM_ENV, ::http_alloc_deleter<::HC_PERFORM_ENV>>&&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
