#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/http_alloc_deleter.h"

// auto generated forward declare list
// clang-format off
struct HCInitArgs;
namespace xbox::httpclient { class NetworkState; }
namespace xbox::httpclient { struct http_retry_after_api_state; }
// clang-format on

namespace xbox::httpclient {

struct http_singleton {
public:
    // http_singleton inner types define
    enum class singleton_access_mode : int {
        Create = 0,
        Get = 1,
        Cleanup = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk99aedd;
    ::ll::UntypedStorage<8, 80> mUnk1e4f75;
    ::ll::UntypedStorage<8, 64> mUnkfd60d7;
    ::ll::UntypedStorage<8, 80> mUnk8b1c38;
    ::ll::UntypedStorage<4, 4> mUnk8fd0a7;
    ::ll::UntypedStorage<8, 64> mUnk4378ea;
    ::ll::UntypedStorage<8, 64> mUnkca8811;
    ::ll::UntypedStorage<8, 16> mUnke0168d;
    ::ll::UntypedStorage<8, 8> mUnk202ec4;
    ::ll::UntypedStorage<1, 1> mUnk8d6ad1;
    ::ll::UntypedStorage<4, 4> mUnka3455e;
    ::ll::UntypedStorage<4, 4> mUnkd27c8e;
    ::ll::UntypedStorage<4, 4> mUnkc3d5fe;
    ::ll::UntypedStorage<8, 80> mUnk65e833;
    ::ll::UntypedStorage<8, 24> mUnk3b082e;
    ::ll::UntypedStorage<8, 80> mUnk70c242;
    ::ll::UntypedStorage<8, 64> mUnk6bec9b;
    ::ll::UntypedStorage<8, 16> mUnk2b3aea;
    // NOLINTEND

public:
    // prevent constructor by default
    http_singleton& operator=(http_singleton const&);
    http_singleton(http_singleton const&);
    http_singleton();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear_retry_state(uint retryAfterCacheId);

    MCNAPI ::xbox::httpclient::http_retry_after_api_state get_retry_state(uint retryAfterCacheId);

    MCNAPI explicit http_singleton(::std::unique_ptr<::xbox::httpclient::NetworkState, ::http_alloc_deleter<::xbox::httpclient::NetworkState>> networkState);

    MCNAPI void set_retry_state(uint retryAfterCacheId, ::xbox::httpclient::http_retry_after_api_state const& state);

    MCNAPI ~http_singleton();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static long create(::HCInitArgs* args);

    MCNAPI static long singleton_access(::xbox::httpclient::http_singleton::singleton_access_mode mode, ::HCInitArgs* createArgs, ::std::shared_ptr<::xbox::httpclient::http_singleton>& singleton);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::xbox::httpclient::NetworkState, ::http_alloc_deleter<::xbox::httpclient::NetworkState>> networkState);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
