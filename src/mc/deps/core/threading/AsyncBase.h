#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class AsyncBase : public ::std::enable_shared_from_this<::Bedrock::Threading::AsyncBase> {
public:
    // AsyncBase inner types declare
    // clang-format off
    struct DiagnosticInfo;
    // clang-format on

    // AsyncBase inner types define
    struct DiagnosticInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> mPendingCount;
        ::ll::TypedStorage<8, 8, uint64> mTotalCount;
        ::ll::TypedStorage<1, 1, bool>   mHasPendingCount;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncBase() = default;

    virtual ::Bedrock::Threading::AsyncBase::DiagnosticInfo getAsyncDiagnosticInfo() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::Threading::AsyncBase::DiagnosticInfo $getAsyncDiagnosticInfo() const;


    // NOLINTEND
};

} // namespace Bedrock::Threading
