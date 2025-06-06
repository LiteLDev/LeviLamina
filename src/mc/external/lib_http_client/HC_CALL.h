#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/Result.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
struct XAsyncProviderData;
namespace xbox::httpclient { class IHttpProvider; }
// clang-format on

struct HC_CALL {
public:
    // prevent constructor by default
    HC_CALL();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::xbox::httpclient::Result<::std::chrono::seconds> GetRetryAfterHeaderTime();

    MCNAPI HC_CALL(uint64, ::xbox::httpclient::IHttpProvider&);

    MCNAPI long PerformAsync(::XAsyncBlock*);

    MCNAPI ::xbox::httpclient::Result<bool> ShouldFailFast(uint&);

    MCNAPI bool ShouldRetry(uint&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void CompressRequestBody(void*, bool);

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
    MCNAPI void* $ctor(uint64, ::xbox::httpclient::IHttpProvider&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
