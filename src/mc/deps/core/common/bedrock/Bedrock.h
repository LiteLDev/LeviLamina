#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/brstd/copyable_function.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/AsyncErrc.h"
#include "mc/deps/core/common/bedrock/AsyncStatus.h"
#include "mc/deps/core/common/bedrock/CallStack.h"
#include "mc/deps/core/common/bedrock/DataStore.h"
#include "mc/deps/core/common/bedrock/ErrorInfoBuilder.h"
#include "mc/deps/core/common/bedrock/FilePickerManager.h"
#include "mc/deps/core/common/bedrock/IApplicationDataStores.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/IRequestBody.h"
#include "mc/deps/core/common/bedrock/LogLevel.h"
#include "mc/deps/core/common/bedrock/NodeBase.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/ObjectNode.h"
#include "mc/deps/core/common/bedrock/PlatformBootstrap.h"
#include "mc/deps/core/common/bedrock/RequestPriority.h"
#include "mc/deps/core/common/bedrock/ResponseBodyType.h"
#include "mc/deps/core/common/bedrock/StaticOptimizedString.h"
#include "mc/deps/core/common/bedrock/WorkerTaskStats.h"
#include "mc/deps/core/common/bedrock/list.h"
#include "mc/deps/core/common/bedrock/pubsub/ConnectPosition.h"
#include "mc/deps/core/common/bedrock/pubsub/DeferredSubscriptionHub.h"
#include "mc/deps/core/common/bedrock/pubsub/PriorityDeferredSubscriptionHub.h"
#include "mc/deps/core/common/debug/LogCategory.h"
#include "mc/deps/core/common/debug/LogRule.h"
#include "mc/enums/LogAreaID.h"
#include "mc/network/HCTraceLevel.h"
#include "mc/network/HCWebSocketCloseStatus.h"

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
namespace Bedrock::Http { class RetryPolicy; }
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
// symbol: ?strtoint32@Bedrock@@YAHPEBDPEAPEADH@Z
MCAPI int strtoint32(char const* str, char**, int base);

// symbol: ?strtouint32@Bedrock@@YAIPEBDPEAPEADH@Z
MCAPI uint strtouint32(char const* str, char**, int base);

// symbol: ?throw_system_error@Bedrock@@YAXW4errc@std@@@Z
MCAPI void throw_system_error(std::errc);
// NOLINTEND

}; // namespace Bedrock
