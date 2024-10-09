#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IApplicationDataStores.h"
#include "mc/deps/application/PlatformBootstrap.h"
#include "mc/deps/core/container/list.h"
#include "mc/deps/core/data_store/DataStore.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/IRequestBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/deps/core/threading/AsyncErrc.h"
#include "mc/deps/core/threading/AsyncStatus.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/WorkerTaskStats.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/json_object/JSONType.h"
#include "mc/deps/core/utility/json_object/NodeBase.h"
#include "mc/deps/core/utility/json_object/ObjectNode.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/PriorityDeferredSubscriptionHub.h"
#include "mc/deps/platform_features/file_picker/FilePickerManager.h"
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/LogLevel.h"
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/diagnostics/bedrock_log/LogRule.h"
#include "mc/external/lib_http_client/HCTraceLevel.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/platform/CallStack.h"
#include "mc/platform/ErrorInfoBuilder.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { class DataStore; }
namespace Bedrock { class DirectoryPickerConfig; }
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock { class FilePickerManager; }
namespace Bedrock { class IApplicationDataStores; }
namespace Bedrock { class IIslandCore; }
namespace Bedrock { class PlatformBootstrap; }
namespace Bedrock { class StaticOptimizedString; }
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock { class WorkerPoolManager; }
namespace Bedrock { struct CallStack; }
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
namespace Bedrock::JSONObject { class Document; }
namespace Bedrock::JSONObject { class DocumentOptions; }
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class NodeBase; }
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class ParseResult; }
namespace Bedrock::JSONObject { class StringNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
namespace Bedrock::Memory { class IMemoryAllocator; }
namespace Bedrock::PlatformUtils { struct PlatformData; }
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class DeferredSubscriptionHubBase; }
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub { class SubscriptionBase; }
namespace Bedrock::PubSub { class SubscriptionContext; }
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
namespace Bedrock::PubSub::Detail { class PublisherBase; }
namespace Bedrock::PubSub::Detail { class PublisherDisconnector; }
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
namespace Bedrock::Threading { class AssignedThread; }
namespace Bedrock::Threading { class EnableQueueForThread; }
namespace Bedrock::Threading { class Mutex; }
namespace Bedrock::Threading { class OSThreadPriority; }
namespace Bedrock::Threading { class SharedRecursiveMutexBase; }
namespace Bedrock::Threading::AsyncResult { class ToXAsyncBlock; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Bedrock {
// NOLINTBEGIN
MCAPI int strtoint32(char const* str, char** endptr, int base);

MCAPI uint strtouint32(char const* str, char** endptr, int base);

MCAPI void throw_system_error(std::errc);
// NOLINTEND

}; // namespace Bedrock
