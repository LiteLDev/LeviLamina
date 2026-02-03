#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"
#include "mc/deps/core/threading/ConditionalState.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/platform/threading/Mutex.h"

namespace Bedrock::Threading::Details {

class PendingConditional : public ::Bedrock::Threading::IAsyncResult<void> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                        mCondition;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                    mLock;
    ::ll::TypedStorage<4, 4, ::Bedrock::Threading::Details::ConditionalState> mState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::Bedrock::Threading::IAsyncResult<void> const&)>>>
        mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PendingConditional() /*override*/ = default;

    virtual ::Bedrock::Threading::AsyncStatus getStatus() const /*override*/;

    virtual ::std::error_code getError() const /*override*/;

    virtual void cancel() /*override*/;

    virtual void addOnComplete(::std::function<void(::Bedrock::Threading::IAsyncResult<void> const&)>) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void doCheck();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Threading::Details
