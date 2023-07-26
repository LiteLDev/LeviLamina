#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/DispatcherProcess.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?send\@LibHttpClientImpl\@Http\@Bedrock\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@VResponse\@Http\@Bedrock\@\@\@Threading\@Bedrock\@\@\@std\@\@$$QEAVRequest\@23\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initialize\@LibHttpClientImpl\@Http\@Bedrock\@\@UEAAXXZ
     */
    virtual void initialize(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?shutdown\@LibHttpClientImpl\@Http\@Bedrock\@\@UEAAXXZ
     */
    virtual void shutdown(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_LIBHTTPCLIENTIMPL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LibHttpClientImpl(); // NOLINT
#endif
    /**
     * @symbol ??0LibHttpClientImpl\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI LibHttpClientImpl(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_checkRetryPolicy\@LibHttpClientImpl\@Http\@Bedrock\@\@AEAA?AV?$optional\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@std\@\@V?$not_null\@PEAUHC_CALL\@\@\@gsl\@\@AEBVResponse\@23\@\@Z
     */
    MCAPI class std::optional<class std::chrono::duration<__int64, struct std::ratio<1, 1>>>
    _checkRetryPolicy(class gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Response const&); // NOLINT
    /**
     * @symbol
     * ?_convertResponse\@LibHttpClientImpl\@Http\@Bedrock\@\@AEAA?AV?$shared_ptr\@V?$IAsyncResult\@VResponse\@Http\@Bedrock\@\@\@Threading\@Bedrock\@\@\@std\@\@V?$not_null\@PEAUHC_CALL\@\@\@gsl\@\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
        _convertResponse(class gsl::not_null<struct HC_CALL*>); // NOLINT
    /**
     * @symbol
     * ?_retry\@LibHttpClientImpl\@Http\@Bedrock\@\@AEAA?AV?$shared_ptr\@V?$IAsyncResult\@VResponse\@Http\@Bedrock\@\@\@Threading\@Bedrock\@\@\@std\@\@V?$not_null\@PEAUHC_CALL\@\@\@gsl\@\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@5\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
        _retry(class gsl::not_null<struct HC_CALL*>, class std::chrono::duration<__int64, struct std::ratio<1, 1>>); // NOLINT
    /**
     * @symbol
     * ?_tryGetResponseBody\@LibHttpClientImpl\@Http\@Bedrock\@\@AEAA?AV?$shared_ptr\@VIResponseBody\@Internal\@Http\@Bedrock\@\@\@std\@\@V?$not_null\@PEAUHC_CALL\@\@\@gsl\@\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Http::Internal::IResponseBody>
        _tryGetResponseBody(class gsl::not_null<struct HC_CALL*>); // NOLINT
    /**
     * @symbol ?_untrack\@LibHttpClientImpl\@Http\@Bedrock\@\@AEAAXV?$not_null\@PEAUHC_CALL\@\@\@gsl\@\@\@Z
     */
    MCAPI void _untrack(class gsl::not_null<struct HC_CALL*>); // NOLINT
    /**
     * @symbol
     * ?_convertResponseBody\@LibHttpClientImpl\@Http\@Bedrock\@\@CAJV?$not_null\@PEAUHC_CALL\@\@\@gsl\@\@AEAVResponse\@23\@\@Z
     */
    MCAPI static long
    _convertResponseBody(class gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Response&); // NOLINT
    /**
     * @symbol
     * ?_convertResponseHeaders\@LibHttpClientImpl\@Http\@Bedrock\@\@CAJV?$not_null\@PEAUHC_CALL\@\@\@gsl\@\@AEAVResponse\@23\@\@Z
     */
    MCAPI static long
    _convertResponseHeaders(class gsl::not_null<struct HC_CALL*>, class Bedrock::Http::Response&); // NOLINT
    /**
     * @symbol ?_createCallHandle\@LibHttpClientImpl\@Http\@Bedrock\@\@CAJPEAPEAUHC_CALL\@\@AEBVRequest\@23\@\@Z
     */
    MCAPI static long _createCallHandle(struct HC_CALL**, class Bedrock::Http::Request const&); // NOLINT
    /**
     * @symbol ?_requestBodyRead\@LibHttpClientImpl\@Http\@Bedrock\@\@CAJPEAUHC_CALL\@\@_K1PEAXPEAEPEA_K\@Z
     */
    MCAPI static long
    _requestBodyRead(struct HC_CALL*, unsigned __int64, unsigned __int64, void*, unsigned char*, unsigned __int64*); // NOLINT
    /**
     * @symbol ?_responseBodyWrite\@LibHttpClientImpl\@Http\@Bedrock\@\@CAJPEAUHC_CALL\@\@PEBE_KPEAX\@Z
     */
    MCAPI static long _responseBodyWrite(struct HC_CALL*, unsigned char const*, unsigned __int64, void*); // NOLINT

private:
    /**
     * @symbol
     * ?sWeakThis\@LibHttpClientImpl\@Http\@Bedrock\@\@0V?$weak_ptr\@VLibHttpClientImpl\@Http\@Bedrock\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class Bedrock::Http::LibHttpClientImpl> sWeakThis; // NOLINT
    /**
     * @symbol ?sWeakThisMutex\@LibHttpClientImpl\@Http\@Bedrock\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sWeakThisMutex; // NOLINT
};

}; // namespace Bedrock::Http
