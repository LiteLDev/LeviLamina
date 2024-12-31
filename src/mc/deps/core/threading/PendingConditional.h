#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"
#include "mc/deps/core/threading/IAsyncResult.h"

namespace Bedrock::Threading::Details {

class PendingConditional : public ::Bedrock::Threading::IAsyncResult<void> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf798ba;
    ::ll::UntypedStorage<8, 80> mUnk82b1a0;
    ::ll::UntypedStorage<4, 4>  mUnk1e31ee;
    ::ll::UntypedStorage<8, 24> mUnkcf3535;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingConditional& operator=(PendingConditional const&);
    PendingConditional(PendingConditional const&);
    PendingConditional();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PendingConditional() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::AsyncStatus getStatus() const /*override*/;

    // vIndex: 2
    virtual ::std::error_code getError() const /*override*/;

    // vIndex: 3
    virtual void cancel() /*override*/;

    // vIndex: 5
    virtual void addOnComplete(::std::function<void(::Bedrock::Threading::IAsyncResult<void> const&)>) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Threading::Details
