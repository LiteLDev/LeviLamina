#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct Method; }
// clang-format on

namespace Bedrock::Http {

class Request {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk55580c;
    ::ll::UntypedStorage<1, 2>  mUnk67e7ed;
    ::ll::UntypedStorage<8, 64> mUnk3aa28a;
    ::ll::UntypedStorage<8, 16> mUnkb7733e;
    ::ll::UntypedStorage<8, 16> mUnk5b573e;
    ::ll::UntypedStorage<4, 4>  mUnkf34d9b;
    ::ll::UntypedStorage<8, 8>  mUnka3dac0;
    ::ll::UntypedStorage<8, 64> mUnkbee43e;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Request();

    MCAPI Request(::Bedrock::Http::Request const&);

    MCAPI ::Bedrock::Http::Request& operator=(::Bedrock::Http::Request const&);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>> send();

    MCAPI void setHeaders(::Bedrock::Http::HeaderCollection const& headers);

    MCAPI void setMethod(::Bedrock::Http::Method method);

    MCAPI ~Request();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Bedrock::Http::Request const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
