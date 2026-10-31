#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/Method.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/http/RetryPolicy.h"
#include "mc/deps/core/http/Url.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
// clang-format on

namespace Bedrock::Http {

class Request {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Bedrock::Http::Url>                                                        mUrl;
    ::ll::TypedStorage<1, 2, ::Bedrock::Http::Method>                                                      mMethod;
    ::ll::TypedStorage<8, 64, ::Bedrock::Http::HeaderCollection>                                           mHeaders;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IRequestBody>>> mBody;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IResponseBody>>>
                                                               mResponseBodyHandler;
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::RequestPriority> mPriority;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>           mTimeout;
    ::ll::TypedStorage<8, 64, ::Bedrock::Http::RetryPolicy>    mRetryPolicy;
    ::ll::TypedStorage<1, 1, bool>                             mShouldSkipTelemetry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Request();

    MCAPI Request(::Bedrock::Http::Request const& rhs);

    MCAPI ::Bedrock::Http::Request& operator=(::Bedrock::Http::Request const&);

    MCAPI ::Bedrock::Threading::Async<::Bedrock::Http::Response> send();

    MCAPI ~Request();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Bedrock::Http::Request const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
