#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/DispatcherProcess.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherProcess; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http::Internal { class IResponseBody; }
namespace Bedrock::Threading { class Mutex; }
struct HC_CALL;
// clang-format on

namespace Bedrock::Http {

class LibHttpClientImpl : public ::Bedrock::Http::DispatcherProcess {
public:
    // prevent constructor by default
    LibHttpClientImpl& operator=(LibHttpClientImpl const&);
    LibHttpClientImpl(LibHttpClientImpl const&);
    LibHttpClientImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LibHttpClientImpl() = default;

    // vIndex: 1
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&& request);

    // vIndex: 2
    virtual void initialize();

    // vIndex: 3
    virtual void shutdown();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<std::chrono::seconds>
          _checkRetryPolicy(gsl::not_null<struct HC_CALL*> call, class Bedrock::Http::Response const&);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
          _convertResponse(gsl::not_null<struct HC_CALL*>);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
          _retry(gsl::not_null<struct HC_CALL*>, std::chrono::seconds delay);

    MCAPI std::shared_ptr<class Bedrock::Http::Internal::IResponseBody>
          _tryGetResponseBody(gsl::not_null<struct HC_CALL*> call);

    MCAPI void _untrack(gsl::not_null<struct HC_CALL*>);

    MCAPI static long _convertRequestBody(gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Request const& request);

    MCAPI static long _convertResponseBody(gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Response& response);

    MCAPI static long _convertResponseHeaders(gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Response& response);

    MCAPI static long _createCallHandle(struct HC_CALL**, class Bedrock::Http::Request const& request);

    MCAPI static long _requestBodyRead(
        struct HC_CALL* call,
        uint64          offset,
        uint64,
        void*   context,
        uchar*  destination,
        uint64* bytesWritten
    );

    MCAPI static long _responseBodyWrite(struct HC_CALL* call, uchar const* source, uint64, void* context);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::weak_ptr<class Bedrock::Http::LibHttpClientImpl> sWeakThis;

    MCAPI static class Bedrock::Threading::Mutex sWeakThisMutex;

    // NOLINTEND
};

}; // namespace Bedrock::Http
