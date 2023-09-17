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
struct HC_CALL;
// clang-format on

namespace Bedrock::Http {

class LibHttpClientImpl : public ::Bedrock::Http::DispatcherProcess {
public:
    // prevent constructor by default
    LibHttpClientImpl& operator=(LibHttpClientImpl const&) = delete;
    LibHttpClientImpl(LibHttpClientImpl const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?send@LibHttpClientImpl@Http@Bedrock@@UEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@$$QEAVRequest@23@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&&);

    // vIndex: 2, symbol: ?initialize@LibHttpClientImpl@Http@Bedrock@@UEAAXXZ
    virtual void initialize();

    // vIndex: 3, symbol: ?shutdown@LibHttpClientImpl@Http@Bedrock@@UEAAXXZ
    virtual void shutdown();

    // symbol: ??1LibHttpClientImpl@Http@Bedrock@@UEAA@XZ
    MCVAPI ~LibHttpClientImpl();

    // symbol: ??0LibHttpClientImpl@Http@Bedrock@@QEAA@XZ
    MCAPI LibHttpClientImpl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_checkRetryPolicy@LibHttpClientImpl@Http@Bedrock@@AEAA?AV?$optional@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@std@@V?$not_null@PEAUHC_CALL@@@gsl@@AEBVResponse@23@@Z
    MCAPI std::optional<std::chrono::seconds>
          _checkRetryPolicy(gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Response const&);

    // symbol:
    // ?_convertResponse@LibHttpClientImpl@Http@Bedrock@@AEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@V?$not_null@PEAUHC_CALL@@@gsl@@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
          _convertResponse(gsl::not_null<struct HC_CALL*>);

    // symbol:
    // ?_retry@LibHttpClientImpl@Http@Bedrock@@AEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@V?$not_null@PEAUHC_CALL@@@gsl@@V?$duration@_JU?$ratio@$00$00@std@@@chrono@5@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
          _retry(gsl::not_null<struct HC_CALL*>, std::chrono::seconds);

    // symbol:
    // ?_tryGetResponseBody@LibHttpClientImpl@Http@Bedrock@@AEAA?AV?$shared_ptr@VIResponseBody@Internal@Http@Bedrock@@@std@@V?$not_null@PEAUHC_CALL@@@gsl@@@Z
    MCAPI std::shared_ptr<class Bedrock::Http::Internal::IResponseBody>
          _tryGetResponseBody(gsl::not_null<struct HC_CALL*>);

    // symbol: ?_untrack@LibHttpClientImpl@Http@Bedrock@@AEAAXV?$not_null@PEAUHC_CALL@@@gsl@@@Z
    MCAPI void _untrack(gsl::not_null<struct HC_CALL*>);

    // symbol:
    // ?_convertResponseBody@LibHttpClientImpl@Http@Bedrock@@CAJV?$not_null@PEAUHC_CALL@@@gsl@@AEAVResponse@23@@Z
    MCAPI static long _convertResponseBody(gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Response&);

    // symbol:
    // ?_convertResponseHeaders@LibHttpClientImpl@Http@Bedrock@@CAJV?$not_null@PEAUHC_CALL@@@gsl@@AEAVResponse@23@@Z
    MCAPI static long _convertResponseHeaders(gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Response&);

    // symbol: ?_createCallHandle@LibHttpClientImpl@Http@Bedrock@@CAJPEAPEAUHC_CALL@@AEBVRequest@23@@Z
    MCAPI static long _createCallHandle(struct HC_CALL**, class Bedrock::Http::Request const&);

    // symbol: ?_requestBodyRead@LibHttpClientImpl@Http@Bedrock@@CAJPEAUHC_CALL@@_K1PEAXPEAEPEA_K@Z
    MCAPI static long _requestBodyRead(struct HC_CALL*, uint64, uint64, void*, uchar*, uint64*);

    // symbol: ?_responseBodyWrite@LibHttpClientImpl@Http@Bedrock@@CAJPEAUHC_CALL@@PEBE_KPEAX@Z
    MCAPI static long _responseBodyWrite(struct HC_CALL*, uchar const*, uint64, void*);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sWeakThis@LibHttpClientImpl@Http@Bedrock@@0V?$weak_ptr@VLibHttpClientImpl@Http@Bedrock@@@std@@A
    MCAPI static std::weak_ptr<class Bedrock::Http::LibHttpClientImpl> sWeakThis;

    // symbol: ?sWeakThisMutex@LibHttpClientImpl@Http@Bedrock@@0Vmutex@std@@A
    MCAPI static std::mutex sWeakThisMutex;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $sWeakThis() { return sWeakThis; }

    auto& $sWeakThisMutex() { return sWeakThisMutex; }

    // NOLINTEND
};

}; // namespace Bedrock::Http
