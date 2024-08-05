#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/AsyncStatus.h"
#include "mc/deps/core/common/bedrock/DispatcherProcess.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherProcess; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class DispatchQueue : public ::Bedrock::Http::DispatcherProcess {
public:
    // DispatchQueue inner types declare
    // clang-format off
    class AsyncQueueResult;
    // clang-format on

    // DispatchQueue inner types define
    class AsyncQueueResult {
    public:
        // prevent constructor by default
        AsyncQueueResult& operator=(AsyncQueueResult const&);
        AsyncQueueResult(AsyncQueueResult const&);
        AsyncQueueResult();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~AsyncQueueResult() = default;

        // vIndex: 1
        virtual ::Bedrock::Threading::AsyncStatus getStatus() const;

        // vIndex: 2
        virtual std::error_code getError() const;

        // vIndex: 3
        virtual void cancel();

        // vIndex: 4
        virtual class Bedrock::Http::Response getResult() const;

        // vIndex: 5
        virtual void addOnComplete(
            std::function<void(class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response> const&)> callback
        );

        // vIndex: 6
        virtual void _cancel();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DispatchQueue& operator=(DispatchQueue const&);
    DispatchQueue(DispatchQueue const&);
    DispatchQueue();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DispatchQueue();

    // vIndex: 1
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&& request);

    MCAPI explicit DispatchQueue(std::shared_ptr<class Bedrock::Http::DispatcherProcess>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
          _addNewRequest(class Bedrock::Http::Request&& request);

    MCAPI void _cleanUpCompletedRequests();

    MCAPI void _handlePendingRequest();

    MCAPI void _onCompletion();

    // NOLINTEND
};

}; // namespace Bedrock::Http
