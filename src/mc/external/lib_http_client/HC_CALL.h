#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XAsyncOp.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
struct XAsyncProviderData;
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
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<4, 4> mUnk21abaa;
    ::ll::UntypedStorage<8, 8> mUnkf03548;
#endif
    ::ll::UntypedStorage<4, 4>  mUnkbed0a8;
    ::ll::UntypedStorage<4, 4>  mUnkedd66f;
    ::ll::UntypedStorage<8, 32> mUnk9be00f;
    ::ll::UntypedStorage<4, 4>  mUnk2f02d2;
    ::ll::UntypedStorage<8, 32> mUnk6dc567;
    ::ll::UntypedStorage<8, 24> mUnkd61c58;
    ::ll::UntypedStorage<8, 16> mUnkb6b181;
    ::ll::UntypedStorage<8, 8>  mUnk7c1b0f;
    ::ll::UntypedStorage<8, 8>  mUnkd48f47;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 8> mUnk60184e;
    ::ll::UntypedStorage<8, 8> mUnk1bd5b5;
    ::ll::UntypedStorage<1, 1> mUnkaff5f2;
#endif
    ::ll::UntypedStorage<1, 1> mUnkbacc1f;
    ::ll::UntypedStorage<1, 1> mUnk38835b;
    ::ll::UntypedStorage<4, 4> mUnkc9bb28;
    ::ll::UntypedStorage<4, 4> mUnkef06fa;
    ::ll::UntypedStorage<4, 4> mUnkbeca7b;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 8> mUnke3ad4e;
    ::ll::UntypedStorage<8, 8> mUnk9a2b24;
    ::ll::UntypedStorage<8, 8> mUnkc104d9;
    ::ll::UntypedStorage<8, 8> mUnkb569c1;
    ::ll::UntypedStorage<8, 8> mUnk72670a;
    ::ll::UntypedStorage<8, 8> mUnk11b46c;
    ::ll::UntypedStorage<8, 8> mUnkf7e60c;
    ::ll::UntypedStorage<8, 8> mUnkfeb886;
    ::ll::UntypedStorage<8, 8> mUnke7efc8;
    ::ll::UntypedStorage<8, 8> mUnke91507;
    ::ll::UntypedStorage<8, 8> mUnke13752;
    ::ll::UntypedStorage<8, 8> mUnk611083;
#endif
    ::ll::UntypedStorage<8, 8> mUnke7da0d;
    ::ll::UntypedStorage<4, 4> mUnk911abe;
    ::ll::UntypedStorage<8, 8> mUnk8ce464;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HC_CALL();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long PerformAsync(::XAsyncBlock* async);

    MCNAPI bool ShouldRetry(uint& performDelay);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_S static void CompressRequestBody(void* c, bool canceled);

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
