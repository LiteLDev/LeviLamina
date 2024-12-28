#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
namespace Bedrock::Threading { class Mutex; }
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
    // NOLINTEND

public:
    // prevent constructor by default
    LibHttpClientImpl& operator=(LibHttpClientImpl const&);
    LibHttpClientImpl(LibHttpClientImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LibHttpClientImpl() /*override*/;

    // vIndex: 2
    virtual void initialize() /*override*/;

    // vIndex: 3
    virtual void shutdown() /*override*/;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>>
    send(::Bedrock::Http::Request&& request) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibHttpClientImpl();

    MCAPI ::std::optional<::std::chrono::seconds>
    _checkRetryPolicy(::gsl::not_null<::HC_CALL*> call, ::Bedrock::Http::Response const& httpResponse);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>>
    _convertResponse(::gsl::not_null<::HC_CALL*> callHandle);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>>
    _retry(::gsl::not_null<::HC_CALL*> callHandle, ::std::chrono::seconds delay);

    MCAPI ::std::shared_ptr<::Bedrock::Http::Internal::IRequestBody> _tryGetRequestBody(::gsl::not_null<::HC_CALL*> call
    );

    MCAPI ::std::shared_ptr<::Bedrock::Http::Internal::IResponseBody>
    _tryGetResponseBody(::gsl::not_null<::HC_CALL*> call);

    MCAPI void _untrack(::gsl::not_null<::HC_CALL*> callHandle);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static long
    _convertRequestBody(::gsl::not_null<::HC_CALL*> callHandle, ::Bedrock::Http::Request const& request);

    MCAPI static long _convertResponseBody(::gsl::not_null<::HC_CALL*> callHandle, ::Bedrock::Http::Response& response);

    MCAPI static long
    _convertResponseHeaders(::gsl::not_null<::HC_CALL*> callHandle, ::Bedrock::Http::Response& response);

    MCAPI static long _createCallHandle(::HC_CALL** outHandle, ::Bedrock::Http::Request const& request);

    MCAPI static long _requestBodyRead(
        ::HC_CALL* call,
        uint64     offset,
        uint64     bytesAvailable,
        void*      context,
        uchar*     destination,
        uint64*    bytesWritten
    );

    MCAPI static long _responseBodyWrite(::HC_CALL* call, uchar const* source, uint64 bytesAvailable, void* context);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::weak_ptr<::Bedrock::Http::LibHttpClientImpl>& sWeakThis();

    MCAPI static ::Bedrock::Threading::Mutex& sWeakThisMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initialize();

    MCAPI void $shutdown();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>>
    $send(::Bedrock::Http::Request&& request);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
