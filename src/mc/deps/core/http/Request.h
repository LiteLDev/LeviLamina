#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class Request {
public:
    // NOLINTBEGIN
    MCAPI Request();

    MCAPI Request(class Bedrock::Http::Request const& rhs);

    MCAPI class Bedrock::Http::Request& operator=(class Bedrock::Http::Request const&);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>> send();

    MCAPI void setHeaders(class Bedrock::Http::HeaderCollection const& headers);

    MCAPI void setMethod(class Bedrock::Http::Method method);

    MCAPI ~Request();

    // NOLINTEND
};

}; // namespace Bedrock::Http
