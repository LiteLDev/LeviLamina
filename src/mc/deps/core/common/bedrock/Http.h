#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/AsyncStatus.h"
#include "mc/deps/core/common/bedrock/ClientErrorCode.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/IRequestBody.h"
#include "mc/deps/core/common/bedrock/RequestPriority.h"
#include "mc/deps/core/common/bedrock/ResponseBodyType.h"
#include "mc/network/HCTraceLevel.h"
#include "mc/network/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class BufferedResponseBody; }
namespace Bedrock::Http { class DispatcherProcess; }
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class LibHttpClientErrorCatergory; }
namespace Bedrock::Http { class LibHttpClientImpl; }
namespace Bedrock::Http { class LibHttpClientInstance; }
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class RequestBuilder; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
namespace Json { class Value; }
struct HC_CALL;
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {
// NOLINTBEGIN
/**
 * @symbol
 * ?getStringDataAsSpan\@Http\@Bedrock\@\@YA?AV?$span\@$$CBE$0?0\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI class gsl::span<unsigned char const> getStringDataAsSpan(std::string const&);
/**
 * @symbol
 * ?initializeLibHttpClient\@Http\@Bedrock\@\@YA?AV?$shared_ptr\@VLibHttpClientInstance\@Http\@Bedrock\@\@\@std\@\@XZ
 */
MCAPI std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> initializeLibHttpClient();
/**
 * @symbol
 * ?interpretDataAsUtf8String\@Http\@Bedrock\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$span\@$$CBE$0?0\@gsl\@\@\@Z
 */
MCAPI std::string interpretDataAsUtf8String(class gsl::span<unsigned char const>);
/**
 * @symbol ?isInitialized\@Http\@Bedrock\@\@YA_NXZ
 */
MCAPI bool isInitialized();
/**
 * @symbol ?make_error_code\@Http\@Bedrock\@\@YA?AVerror_code\@std\@\@W4ClientErrorCode\@12\@\@Z
 */
MCAPI std::error_code make_error_code(enum class Bedrock::Http::ClientErrorCode);
// NOLINTEND

}; // namespace Bedrock::Http
