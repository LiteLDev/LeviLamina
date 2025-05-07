#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class DispatchQueue : public ::Bedrock::Http::DispatcherProcess {
public:
    // DispatchQueue inner types declare
    // clang-format off
    class AsyncQueueResult;
    struct Compare;
    // clang-format on

    // DispatchQueue inner types define
    class AsyncQueueResult : public ::Bedrock::Threading::AsyncResultBase<::Bedrock::Http::Response> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkc7d5ff;
        ::ll::UntypedStorage<8, 16> mUnk16d853;
        // NOLINTEND

    public:
        // prevent constructor by default
        AsyncQueueResult& operator=(AsyncQueueResult const&);
        AsyncQueueResult(AsyncQueueResult const&);

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 6
        virtual void _cancel() /*override*/;

        // vIndex: 0
        virtual ~AsyncQueueResult() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AsyncQueueResult();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $_cancel();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct Compare {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnked6186;
    ::ll::UntypedStorage<4, 4>   mUnkd0e8a3;
    ::ll::UntypedStorage<8, 336> mUnk88bbd3;
    ::ll::UntypedStorage<8, 24>  mUnk2d9653;
    ::ll::UntypedStorage<8, 32>  mUnkb12c33;
    // NOLINTEND

public:
    // prevent constructor by default
    DispatchQueue& operator=(DispatchQueue const&);
    DispatchQueue(DispatchQueue const&);
    DispatchQueue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DispatchQueue() /*override*/;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>>
    send(::Bedrock::Http::Request&& request) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DispatchQueue(::std::shared_ptr<::Bedrock::Http::DispatcherProcess> childProcess);

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>>
    _addNewRequest(::Bedrock::Http::Request&& request);

    MCNAPI void _cleanUpCompletedRequests();

    MCNAPI void _handlePendingRequest();

    MCNAPI void _onCompletion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Bedrock::Http::DispatcherProcess> childProcess);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>>
    $send(::Bedrock::Http::Request&& request);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
