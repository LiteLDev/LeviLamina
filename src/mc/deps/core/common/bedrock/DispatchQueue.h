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
namespace Bedrock::Threading { enum class AsyncStatus; }
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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_DISPATCHQUEUE_ASYNCQUEUERESULT
    public:
        AsyncQueueResult& operator=(AsyncQueueResult const&) = delete;
        AsyncQueueResult(AsyncQueueResult const&)            = delete;
        AsyncQueueResult()                                   = delete;
#endif

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 7
         * @symbol ?_cancel\@AsyncQueueResult\@DispatchQueue\@Http\@Bedrock\@\@UEAAXXZ
         */
        virtual void _cancel();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_DISPATCHQUEUE
public:
    DispatchQueue& operator=(DispatchQueue const&) = delete;
    DispatchQueue(DispatchQueue const&)            = delete;
    DispatchQueue()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?send\@DispatchQueue\@Http\@Bedrock\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@VResponse\@Http\@Bedrock\@\@\@Threading\@Bedrock\@\@\@std\@\@$$QEAVRequest\@23\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_DISPATCHQUEUE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DispatchQueue();
#endif
    /**
     * @symbol ??0DispatchQueue\@Http\@Bedrock\@\@QEAA\@V?$shared_ptr\@VDispatcherProcess\@Http\@Bedrock\@\@\@std\@\@\@Z
     */
    MCAPI DispatchQueue(class std::shared_ptr<class Bedrock::Http::DispatcherProcess>);

    // private:
    /**
     * @symbol
     * ?_addNewRequest\@DispatchQueue\@Http\@Bedrock\@\@AEAA?AV?$shared_ptr\@V?$IAsyncResult\@VResponse\@Http\@Bedrock\@\@\@Threading\@Bedrock\@\@\@std\@\@$$QEAVRequest\@23\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    _addNewRequest(class Bedrock::Http::Request&&);
    /**
     * @symbol ?_cleanUpCompletedRequests\@DispatchQueue\@Http\@Bedrock\@\@AEAAXXZ
     */
    MCAPI void _cleanUpCompletedRequests();
    /**
     * @symbol ?_handlePendingRequest\@DispatchQueue\@Http\@Bedrock\@\@AEAAXXZ
     */
    MCAPI void _handlePendingRequest();
    /**
     * @symbol ?_onCompletion\@DispatchQueue\@Http\@Bedrock\@\@AEAAXXZ
     */
    MCAPI void _onCompletion();

private:
};

}; // namespace Bedrock::Http
