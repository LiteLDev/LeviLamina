#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Result.h"
#include "mc/network/XAsyncOp.h"
#include "mc/network/http_alloc_deleter.h"

struct HC_CALL {
public:
    // prevent constructor by default
    HC_CALL& operator=(HC_CALL const&);
    HC_CALL(HC_CALL const&);
    HC_CALL();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HC_CALL();

    MCAPI long PerformAsync(struct XAsyncBlock*);

    MCAPI static class Result<std::unique_ptr<struct HC_CALL, struct http_alloc_deleter<struct HC_CALL>>> Initialize();

    MCAPI static long ReadRequestBody(struct HC_CALL*, uint64, uint64, void*, uchar*, uint64*);

    MCAPI static long ResponseBodyWrite(struct HC_CALL*, uchar const*, uint64, void*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI explicit HC_CALL(uint64);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Result<std::chrono::seconds> GetRetryAfterHeaderTime();

    MCAPI class Result<bool> ShouldFailFast(uint&);

    MCAPI bool ShouldRetry(uint&);

    MCAPI static long PerfomAsyncProvider(::XAsyncOp, struct XAsyncProviderData const*);

    MCAPI static void PerformSingleRequest(void*, bool);

    MCAPI static long PerformSingleRequestAsyncProvider(::XAsyncOp, struct XAsyncProviderData const*);

    MCAPI static void PerformSingleRequestComplete(struct XAsyncBlock*);

    // NOLINTEND
};
