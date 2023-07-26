#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { enum class RequestPriority; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
// clang-format on

namespace Bedrock::Http {

class Request {

public:
    /**
     * @symbol ??0Request\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI Request(); // NOLINT
    /**
     * @symbol ??0Request\@Http\@Bedrock\@\@QEAA\@AEBV012\@\@Z
     */
    MCAPI Request(class Bedrock::Http::Request const&); // NOLINT
    /**
     * @symbol
     * ?getBody\@Request\@Http\@Bedrock\@\@QEBA?AV?$not_null\@V?$shared_ptr\@VIRequestBody\@Internal\@Http\@Bedrock\@\@\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<class Bedrock::Http::Internal::IRequestBody>>
    getBody() const; // NOLINT
    /**
     * @symbol ?getHeaders\@Request\@Http\@Bedrock\@\@QEBAAEBVHeaderCollection\@23\@XZ
     */
    MCAPI class Bedrock::Http::HeaderCollection const& getHeaders() const; // NOLINT
    /**
     * @symbol ?getMethod\@Request\@Http\@Bedrock\@\@QEBA?AVMethod\@23\@XZ
     */
    MCAPI class Bedrock::Http::Method getMethod() const; // NOLINT
    /**
     * @symbol ?getPriority\@Request\@Http\@Bedrock\@\@QEBAAEBW4RequestPriority\@23\@XZ
     */
    MCAPI enum class Bedrock::Http::RequestPriority const& getPriority() const; // NOLINT
    /**
     * @symbol
     * ?getResponseBodyHandler\@Request\@Http\@Bedrock\@\@QEBA?AV?$not_null\@V?$shared_ptr\@VIResponseBody\@Internal\@Http\@Bedrock\@\@\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<class Bedrock::Http::Internal::IResponseBody>>
    getResponseBodyHandler() const; // NOLINT
    /**
     * @symbol ?getRetryPolicy\@Request\@Http\@Bedrock\@\@QEBAAEBVRetryPolicy\@23\@XZ
     */
    MCAPI class Bedrock::Http::RetryPolicy const& getRetryPolicy() const; // NOLINT
    /**
     * @symbol ?getTimeout\@Request\@Http\@Bedrock\@\@QEBA?AV?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::duration<__int64, struct std::ratio<1, 1>> getTimeout() const; // NOLINT
    /**
     * @symbol
     * ?getUrl\@Request\@Http\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getUrl() const; // NOLINT
    /**
     * @symbol ??4Request\@Http\@Bedrock\@\@QEAAAEAV012\@AEBV012\@\@Z
     */
    MCAPI class Bedrock::Http::Request& operator=(class Bedrock::Http::Request const&); // NOLINT
    /**
     * @symbol
     * ?send\@Request\@Http\@Bedrock\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@VResponse\@Http\@Bedrock\@\@\@Threading\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>> send(); // NOLINT
    /**
     * @symbol
     * ?setBody\@Request\@Http\@Bedrock\@\@QEAAXV?$not_null\@V?$shared_ptr\@VIRequestBody\@Internal\@Http\@Bedrock\@\@\@std\@\@\@gsl\@\@\@Z
     */
    MCAPI void
        setBody(class gsl::not_null<class std::shared_ptr<class Bedrock::Http::Internal::IRequestBody>>); // NOLINT
    /**
     * @symbol ?setHeaders\@Request\@Http\@Bedrock\@\@QEAAXAEBVHeaderCollection\@23\@\@Z
     */
    MCAPI void setHeaders(class Bedrock::Http::HeaderCollection const&); // NOLINT
    /**
     * @symbol ?setMethod\@Request\@Http\@Bedrock\@\@QEAAXVMethod\@23\@\@Z
     */
    MCAPI void setMethod(class Bedrock::Http::Method); // NOLINT
    /**
     * @symbol ??1Request\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~Request(); // NOLINT
};

}; // namespace Bedrock::Http
