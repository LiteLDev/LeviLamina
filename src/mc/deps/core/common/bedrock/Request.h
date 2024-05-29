#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/RequestPriority.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
// clang-format on

namespace Bedrock::Http {

class Request {
public:
    // NOLINTBEGIN
    // symbol: ??0Request@Http@Bedrock@@QEAA@XZ
    MCAPI Request();

    // symbol: ??0Request@Http@Bedrock@@QEAA@AEBV012@@Z
    MCAPI Request(class Bedrock::Http::Request const& rhs);

    // symbol:
    // ?getBody@Request@Http@Bedrock@@QEBA?AV?$not_null@V?$shared_ptr@VIRequestBody@Internal@Http@Bedrock@@@std@@@gsl@@XZ
    MCAPI gsl::not_null<std::shared_ptr<class Bedrock::Http::Internal::IRequestBody>> getBody() const;

    // symbol: ?getHeaders@Request@Http@Bedrock@@QEBAAEBVHeaderCollection@23@XZ
    MCAPI class Bedrock::Http::HeaderCollection const& getHeaders() const;

    // symbol: ?getMethod@Request@Http@Bedrock@@QEBA?AVMethod@23@XZ
    MCAPI class Bedrock::Http::Method getMethod() const;

    // symbol: ?getPriority@Request@Http@Bedrock@@QEBAAEBW4RequestPriority@23@XZ
    MCAPI ::Bedrock::Http::RequestPriority const& getPriority() const;

    // symbol:
    // ?getResponseBodyHandler@Request@Http@Bedrock@@QEBA?AV?$not_null@V?$shared_ptr@VIResponseBody@Internal@Http@Bedrock@@@std@@@gsl@@XZ
    MCAPI gsl::not_null<std::shared_ptr<class Bedrock::Http::Internal::IResponseBody>> getResponseBodyHandler() const;

    // symbol: ?getRetryPolicy@Request@Http@Bedrock@@QEBAAEBVRetryPolicy@23@XZ
    MCAPI class Bedrock::Http::RetryPolicy const& getRetryPolicy() const;

    // symbol: ?getTimeout@Request@Http@Bedrock@@QEBA?AV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@XZ
    MCAPI std::chrono::seconds getTimeout() const;

    // symbol: ?getUrl@Request@Http@Bedrock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getUrl() const;

    // symbol: ??4Request@Http@Bedrock@@QEAAAEAV012@AEBV012@@Z
    MCAPI class Bedrock::Http::Request& operator=(class Bedrock::Http::Request const&);

    // symbol:
    // ?send@Request@Http@Bedrock@@QEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@XZ
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>> send();

    // symbol:
    // ?setBody@Request@Http@Bedrock@@QEAAXV?$not_null@V?$shared_ptr@VIRequestBody@Internal@Http@Bedrock@@@std@@@gsl@@@Z
    MCAPI void setBody(gsl::not_null<std::shared_ptr<class Bedrock::Http::Internal::IRequestBody>> body);

    // symbol: ?setHeaders@Request@Http@Bedrock@@QEAAXAEBVHeaderCollection@23@@Z
    MCAPI void setHeaders(class Bedrock::Http::HeaderCollection const& headers);

    // symbol: ?setMethod@Request@Http@Bedrock@@QEAAXVMethod@23@@Z
    MCAPI void setMethod(class Bedrock::Http::Method method);

    // symbol: ??1Request@Http@Bedrock@@QEAA@XZ
    MCAPI ~Request();

    // NOLINTEND
};

}; // namespace Bedrock::Http
