#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Result.h"
#include "mc/network/http_alloc_deleter.h"

struct HC_CALL {

public:
    // prevent constructor by default
    HC_CALL& operator=(HC_CALL const&) = delete;
    HC_CALL(HC_CALL const&)            = delete;
    HC_CALL()                          = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HC_CALL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HC_CALL();
#endif
    /**
     * @symbol ?PerformAsync\@HC_CALL\@\@QEAAJPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long PerformAsync(struct XAsyncBlock*);
    /**
     * @symbol
     * ?Initialize\@HC_CALL\@\@SA?AV?$Result\@V?$unique_ptr\@UHC_CALL\@\@U?$http_alloc_deleter\@UHC_CALL\@\@\@\@\@std\@\@\@\@XZ
     */
    MCAPI static class Result<std::unique_ptr<struct HC_CALL, struct http_alloc_deleter<struct HC_CALL>>> Initialize();
    /**
     * @symbol ?ReadRequestBody\@HC_CALL\@\@SAJPEAU1\@_K1PEAXPEAEPEA_K\@Z
     */
    MCAPI static long ReadRequestBody(struct HC_CALL*, uint64_t, uint64_t, void*, unsigned char*, uint64_t*);
    /**
     * @symbol ?ResponseBodyWrite\@HC_CALL\@\@SAJPEAU1\@PEBE_KPEAX\@Z
     */
    MCAPI static long ResponseBodyWrite(struct HC_CALL*, unsigned char const*, uint64_t, void*);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ??0HC_CALL\@\@IEAA\@_K\@Z
     */
    MCAPI HC_CALL(uint64_t);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?GetRetryAfterHeaderTime\@HC_CALL\@\@AEAA?AV?$Result\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@\@XZ
     */
    MCAPI class Result<std::chrono::seconds> GetRetryAfterHeaderTime();
    /**
     * @symbol ?ShouldFailFast\@HC_CALL\@\@AEAA?AV?$Result\@_N\@\@AEAI\@Z
     */
    MCAPI class Result<bool> ShouldFailFast(unsigned int&);
    /**
     * @symbol ?ShouldRetry\@HC_CALL\@\@AEAA_NAEAI\@Z
     */
    MCAPI bool ShouldRetry(unsigned int&);
    /**
     * @symbol ?PerfomAsyncProvider\@HC_CALL\@\@CAJW4XAsyncOp\@\@PEBUXAsyncProviderData\@\@\@Z
     */
    MCAPI static long PerfomAsyncProvider(enum class XAsyncOp, struct XAsyncProviderData const*);
    /**
     * @symbol ?PerformSingleRequest\@HC_CALL\@\@CAXPEAX_N\@Z
     */
    MCAPI static void PerformSingleRequest(void*, bool);
    /**
     * @symbol ?PerformSingleRequestAsyncProvider\@HC_CALL\@\@CAJW4XAsyncOp\@\@PEBUXAsyncProviderData\@\@\@Z
     */
    MCAPI static long PerformSingleRequestAsyncProvider(enum class XAsyncOp, struct XAsyncProviderData const*);
    /**
     * @symbol ?PerformSingleRequestComplete\@HC_CALL\@\@CAXPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI static void PerformSingleRequestComplete(struct XAsyncBlock*);
    // NOLINTEND
};
