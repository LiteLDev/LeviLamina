#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/http_alloc_deleter.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
struct XAsyncProviderData;
// clang-format on

struct HC_CALL {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Result<::std::chrono::seconds> GetRetryAfterHeaderTime();

    MCAPI explicit HC_CALL(uint64);

    MCAPI long PerformAsync(::XAsyncBlock*);

    MCAPI ::Result<bool> ShouldFailFast(uint&);

    MCAPI bool ShouldRetry(uint&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Result<::std::unique_ptr<::HC_CALL, ::http_alloc_deleter<::HC_CALL>>> Initialize();

    MCAPI static long PerfomAsyncProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCAPI static void PerformSingleRequest(void*, bool);

    MCAPI static long PerformSingleRequestAsyncProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCAPI static void PerformSingleRequestComplete(::XAsyncBlock*);

    MCAPI static long ReadRequestBody(::HC_CALL*, uint64, uint64, void*, uchar*, uint64*);

    MCAPI static long ResponseBodyWrite(::HC_CALL*, uchar const*, uint64, void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
