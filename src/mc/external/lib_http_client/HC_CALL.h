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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2bc423;
    ::ll::UntypedStorage<4, 4>  mUnkf4298a;
    ::ll::UntypedStorage<8, 32> mUnk53140d;
    ::ll::UntypedStorage<8, 32> mUnkf29332;
    ::ll::UntypedStorage<8, 24> mUnkad0e72;
    ::ll::UntypedStorage<8, 32> mUnkb100c4;
    ::ll::UntypedStorage<8, 16> mUnk2913ef;
    ::ll::UntypedStorage<8, 8>  mUnkef1540;
    ::ll::UntypedStorage<8, 8>  mUnk3f004b;
    ::ll::UntypedStorage<8, 8>  mUnkf6b90a;
    ::ll::UntypedStorage<1, 1>  mUnkc3cc5e;
    ::ll::UntypedStorage<8, 8>  mUnk23f554;
    ::ll::UntypedStorage<1, 1>  mUnkfea43d;
    ::ll::UntypedStorage<4, 4>  mUnk4f7136;
    ::ll::UntypedStorage<4, 4>  mUnk21abaa;
    ::ll::UntypedStorage<4, 4>  mUnkbed0a8;
    ::ll::UntypedStorage<4, 4>  mUnkedd66f;
    ::ll::UntypedStorage<8, 32> mUnk9be00f;
    ::ll::UntypedStorage<4, 4>  mUnk2f02d2;
    ::ll::UntypedStorage<8, 32> mUnk6dc567;
    ::ll::UntypedStorage<8, 24> mUnkd61c58;
    ::ll::UntypedStorage<8, 16> mUnkb6b181;
    ::ll::UntypedStorage<8, 8>  mUnk7c1b0f;
    ::ll::UntypedStorage<8, 8>  mUnkd48f47;
    ::ll::UntypedStorage<8, 8>  mUnk60184e;
    ::ll::UntypedStorage<8, 8>  mUnk1bd5b5;
    ::ll::UntypedStorage<1, 1>  mUnkaff5f2;
    ::ll::UntypedStorage<1, 1>  mUnkbacc1f;
    ::ll::UntypedStorage<1, 1>  mUnk38835b;
    ::ll::UntypedStorage<4, 4>  mUnkc9bb28;
    ::ll::UntypedStorage<4, 4>  mUnkef06fa;
    ::ll::UntypedStorage<4, 4>  mUnkbeca7b;
    ::ll::UntypedStorage<8, 8>  mUnke7da0d;
    ::ll::UntypedStorage<4, 4>  mUnk911abe;
    ::ll::UntypedStorage<8, 8>  mUnk8ce464;
    // NOLINTEND

public:
    // prevent constructor by default
    HC_CALL& operator=(HC_CALL const&);
    HC_CALL(HC_CALL const&);
    HC_CALL();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HC_CALL();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::xbox::httpclient::Result<::std::chrono::seconds> GetRetryAfterHeaderTime();

    MCNAPI HC_CALL(uint64 _id, ::xbox::httpclient::IHttpProvider& provider);

    MCNAPI long PerformAsync(::XAsyncBlock* async);

    MCNAPI ::xbox::httpclient::Result<bool> ShouldFailFast(uint& performDelay);

    MCNAPI bool ShouldRetry(uint& performDelay);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void CompressRequestBody(void* c, bool canceled);

    MCNAPI static long PerfomAsyncProvider(::XAsyncOp op, ::XAsyncProviderData const* data);

    MCNAPI static void PerformSingleRequest(void* c, bool canceled);

    MCNAPI static long PerformSingleRequestAsyncProvider(::XAsyncOp op, ::XAsyncProviderData const* data);

    MCNAPI static void PerformSingleRequestComplete(::XAsyncBlock* async);

    MCNAPI static long ReadRequestBody(
        ::HC_CALL* call,
        uint64     offset,
        uint64     bytesAvailable,
        void*,
        uchar*  destination,
        uint64* bytesWritten
    );

    MCNAPI static long ResponseBodyWrite(::HC_CALL* call, uchar const* source, uint64 bytesAvailable, void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 _id, ::xbox::httpclient::IHttpProvider& provider);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
