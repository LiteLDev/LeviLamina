#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/Response.h"
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncResultBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
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
        ::ll::UntypedStorage<8, 16> mUnk80bc96;
        // NOLINTEND

    public:
        // prevent constructor by default
        AsyncQueueResult& operator=(AsyncQueueResult const&);
        AsyncQueueResult(AsyncQueueResult const&);
        AsyncQueueResult();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void _cancel() /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct Compare {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnked6186;
    ::ll::UntypedStorage<4, 4>   mUnkd0e8a3;
    ::ll::UntypedStorage<8, 336> mUnk88bbd3;
    ::ll::UntypedStorage<8, 24>  mUnk458717;
    ::ll::UntypedStorage<8, 32>  mUnk122c3e;
    // NOLINTEND

public:
    // prevent constructor by default
    DispatchQueue& operator=(DispatchQueue const&);
    DispatchQueue(DispatchQueue const&);
    DispatchQueue();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DispatchQueue() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> send(::Bedrock::Http::Request&&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
