#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
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

    MCNAPI Request(::Bedrock::Http::Request const&);

    MCNAPI ::Bedrock::Http::Request& operator=(::Bedrock::Http::Request const&);

    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Response> send();

    MCNAPI_C void setResponseBodyHandler(
        ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IResponseBody>> responseBodyHandler
    );

    MCNAPI ~Request();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Bedrock::Http::Request const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
