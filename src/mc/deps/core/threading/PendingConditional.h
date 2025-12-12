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
    virtual ~PendingConditional() /*override*/ = default;

    virtual ::Bedrock::Threading::AsyncStatus getStatus() const /*override*/;

    virtual ::std::error_code getError() const /*override*/;

    virtual void cancel() /*override*/;

    virtual void addOnComplete(::std::function<void(::Bedrock::Threading::IAsyncResult<void> const&)>) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void doCheck();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Threading::Details
