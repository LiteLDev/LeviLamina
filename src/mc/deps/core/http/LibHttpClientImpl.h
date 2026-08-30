#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http::Internal { class IResponseBody; }
namespace Bedrock::Threading { class Mutex; }
struct HC_CALL;
// clang-format on

namespace Bedrock::Http {

class LibHttpClientImpl : public ::Bedrock::Http::DispatcherProcess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkcb3229;
    ::ll::UntypedStorage<8, 64>  mUnk419653;
    ::ll::UntypedStorage<8, 80>  mUnk2cebe7;
    ::ll::UntypedStorage<8, 336> mUnk2fe4b9;
    ::ll::UntypedStorage<8, 8>   mUnkf64a92;
    // NOLINTEND

public:
    // prevent constructor by default
    LibHttpClientImpl& operator=(LibHttpClientImpl const&);
    LibHttpClientImpl(LibHttpClientImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibHttpClientImpl() /*override*/;

    virtual void initialize() /*override*/;

    virtual void shutdown() /*override*/;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response>
    send(::Bedrock::Http::Request&& request) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibHttpClientImpl();

    MCNAPI ::std::shared_ptr<::Bedrock::Http::Internal::IResponseBody>
    _tryGetResponseBody(::gsl::not_null<::HC_CALL*> call);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static HRESULT
    _requestBodyRead(::HC_CALL* call, uint64, uint64 bytesAvailable, void*, uchar* destination, uint64* bytesWritten);

    MCNAPI static HRESULT _responseBodyWrite(::HC_CALL* call, uchar const* source, uint64 bytesAvailable, void*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::Mutex& sWeakThisMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $shutdown();

    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Response> $send(::Bedrock::Http::Request&& request);


    // NOLINTEND
};

} // namespace Bedrock::Http
