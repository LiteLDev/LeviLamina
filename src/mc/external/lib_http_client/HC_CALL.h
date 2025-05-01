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
    MCNAPI ::Result<::std::chrono::seconds> GetRetryAfterHeaderTime();

    MCNAPI explicit HC_CALL(uint64);

    MCNAPI long PerformAsync(::XAsyncBlock*);

    MCNAPI ::Result<bool> ShouldFailFast(uint&);

    MCNAPI bool ShouldRetry(uint&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Result<::std::unique_ptr<::HC_CALL, ::http_alloc_deleter<::HC_CALL>>> Initialize();

    MCNAPI static long PerfomAsyncProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static void PerformSingleRequest(void*, bool);

    MCNAPI static long PerformSingleRequestAsyncProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static void PerformSingleRequestComplete(::XAsyncBlock*);

    MCNAPI static long ReadRequestBody(::HC_CALL*, uint64, uint64, void*, uchar*, uint64*);

    MCNAPI static long ResponseBodyWrite(::HC_CALL*, uchar const*, uint64, void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
