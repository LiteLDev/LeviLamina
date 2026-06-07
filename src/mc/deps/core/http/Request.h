#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { struct Url; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
// clang-format on

namespace Bedrock::Http {

class Request {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcb7d93;
    ::ll::UntypedStorage<1, 2>  mUnk67e7ed;
    ::ll::UntypedStorage<8, 64> mUnk3aa28a;
    ::ll::UntypedStorage<8, 16> mUnkb7733e;
    ::ll::UntypedStorage<8, 16> mUnk5b573e;
    ::ll::UntypedStorage<4, 4>  mUnkf34d9b;
    ::ll::UntypedStorage<8, 8>  mUnka3dac0;
    ::ll::UntypedStorage<8, 64> mUnkbee43e;
    ::ll::UntypedStorage<1, 1>  mUnk7f9c7c;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Request();

    MCNAPI Request(::Bedrock::Http::Request const& rhs);

    MCNAPI ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IRequestBody>> getBody() const;

    MCNAPI ::Bedrock::Http::HeaderCollection const& getHeaders() const;

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::HeaderCollection& getHeaders();
#endif

    MCNAPI ::Bedrock::Http::Method getMethod() const;

    MCNAPI ::Bedrock::Http::RequestPriority const& getPriority() const;

    MCNAPI ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IResponseBody>> getResponseBodyHandler() const;

    MCNAPI ::Bedrock::Http::RetryPolicy const& getRetryPolicy() const;

    MCNAPI bool const getShouldSkipTelemetry() const;

    MCNAPI ::std::chrono::seconds getTimeout() const;

    MCNAPI ::Bedrock::Http::Url const& getUrl() const;

    MCNAPI ::Bedrock::Http::Request& operator=(::Bedrock::Http::Request const&);

    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Response> send();

    MCNAPI void setHeaders(::Bedrock::Http::HeaderCollection const& headers);

    MCNAPI void setMethod(::Bedrock::Http::Method method);

#ifdef LL_PLAT_C
    MCNAPI void setResponseBodyHandler(
        ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IResponseBody>> responseBodyHandler
    );
#endif

    MCNAPI void setShouldSkipTelemetry(bool shouldSkipTelemetry);

    MCNAPI ~Request();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Bedrock::Http::Request const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
