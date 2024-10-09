#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"
#include "mc/deps/core/threading/AsyncStatus.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/external/lib_http_client/HCTraceLevel.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

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
MCAPI std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> initializeLibHttpClient();

MCAPI bool isInitialized();
// NOLINTEND

}; // namespace Bedrock::Http
