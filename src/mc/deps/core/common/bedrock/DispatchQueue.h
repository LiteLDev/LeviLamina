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
        // vIndex: 0, symbol: __gen_??1AsyncQueueResult@DispatchQueue@Http@Bedrock@@UEAA@XZ
        virtual ~AsyncQueueResult() = default;

        // vIndex: 1, symbol:
        // ?getStatus@?$AsyncResultBase@VResponse@Http@Bedrock@@@Threading@Bedrock@@UEBA?AW4AsyncStatus@23@XZ
        virtual ::Bedrock::Threading::AsyncStatus getStatus() const;

        // vIndex: 2, symbol:
        // ?getError@?$AsyncResultBase@VResponse@Http@Bedrock@@@Threading@Bedrock@@UEBA?AVerror_code@std@@XZ
        virtual std::error_code getError() const;

        // vIndex: 3, symbol:
        // ?getResult@?$AsyncResultBase@VResponse@Http@Bedrock@@@Threading@Bedrock@@UEBA?AVResponse@Http@3@XZ
        virtual class Bedrock::Http::Response getResult() const;

        // vIndex: 4, symbol: ?cancel@?$AsyncResultBase@VResponse@Http@Bedrock@@@Threading@Bedrock@@UEAAXXZ
        virtual void cancel();

        // vIndex: 5, symbol:
        // ?addOnComplete@?$AsyncResultBase@VResponse@Http@Bedrock@@@Threading@Bedrock@@UEAAXV?$function@$$A6AXAEBV?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@Z@std@@@Z
        virtual void addOnComplete(
            std::function<void(class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response> const&)> callback
        );

        // vIndex: 6, symbol: ?_cancel@AsyncQueueResult@DispatchQueue@Http@Bedrock@@UEAAXXZ
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
    // vIndex: 0, symbol: ??1DispatchQueue@Http@Bedrock@@UEAA@XZ
    virtual ~DispatchQueue();

    // vIndex: 1, symbol:
    // ?send@DispatchQueue@Http@Bedrock@@UEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@$$QEAVRequest@23@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&& request);

    // symbol: ??0DispatchQueue@Http@Bedrock@@QEAA@V?$shared_ptr@VDispatcherProcess@Http@Bedrock@@@std@@@Z
    MCAPI explicit DispatchQueue(std::shared_ptr<class Bedrock::Http::DispatcherProcess>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addNewRequest@DispatchQueue@Http@Bedrock@@AEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@$$QEAVRequest@23@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
          _addNewRequest(class Bedrock::Http::Request&& request);

    // symbol: ?_cleanUpCompletedRequests@DispatchQueue@Http@Bedrock@@AEAAXXZ
    MCAPI void _cleanUpCompletedRequests();

    // symbol: ?_handlePendingRequest@DispatchQueue@Http@Bedrock@@AEAAXXZ
    MCAPI void _handlePendingRequest();

    // symbol: ?_onCompletion@DispatchQueue@Http@Bedrock@@AEAAXXZ
    MCAPI void _onCompletion();

    // NOLINTEND
};

}; // namespace Bedrock::Http
