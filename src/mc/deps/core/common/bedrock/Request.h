#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

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
    // symbol: ??0Request@Http@Bedrock@@QEAA@XZ
    MCAPI Request();

    // symbol: ??0Request@Http@Bedrock@@QEAA@AEBV012@@Z
    MCAPI Request(class Bedrock::Http::Request const& rhs);

    // symbol: ??4Request@Http@Bedrock@@QEAAAEAV012@AEBV012@@Z
    MCAPI class Bedrock::Http::Request& operator=(class Bedrock::Http::Request const&);

    // symbol:
    // ?send@Request@Http@Bedrock@@QEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@XZ
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>> send();

    // symbol: ?setHeaders@Request@Http@Bedrock@@QEAAXAEBVHeaderCollection@23@@Z
    MCAPI void setHeaders(class Bedrock::Http::HeaderCollection const& headers);

    // symbol: ?setMethod@Request@Http@Bedrock@@QEAAXVMethod@23@@Z
    MCAPI void setMethod(class Bedrock::Http::Method method);

    // symbol: ??1Request@Http@Bedrock@@QEAA@XZ
    MCAPI ~Request();

    // NOLINTEND
};

}; // namespace Bedrock::Http
