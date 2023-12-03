#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/AsyncStatus.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/IRequestBody.h"
#include "mc/deps/core/common/bedrock/RequestPriority.h"
#include "mc/deps/core/common/bedrock/ResponseBodyType.h"
#include "mc/network/HCTraceLevel.h"
#include "mc/network/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class BinaryRequestBody; }
namespace Bedrock::Http { class DispatcherProcess; }
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class HttpInterface; }
namespace Bedrock::Http { class LibHttpClientErrorCatergory; }
namespace Bedrock::Http { class LibHttpClientImpl; }
namespace Bedrock::Http { class LibHttpClientInstance; }
namespace Bedrock::Http { class LoggingInterface; }
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class RequestBuilder; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Http { class WebSocketInterface; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
namespace Bedrock::Threading { class Mutex; }
struct HC_CALL;
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {
// NOLINTBEGIN
// symbol: ?initializeLibHttpClient@Http@Bedrock@@YA?AV?$shared_ptr@VLibHttpClientInstance@Http@Bedrock@@@std@@XZ
MCAPI std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> initializeLibHttpClient();

// symbol: ?isInitialized@Http@Bedrock@@YA_NXZ
MCAPI bool isInitialized();
// NOLINTEND

}; // namespace Bedrock::Http
