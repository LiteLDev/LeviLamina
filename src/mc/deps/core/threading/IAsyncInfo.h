#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"

namespace Bedrock::Threading {

class IAsyncInfo {
public:
    // prevent constructor by default
    IAsyncInfo& operator=(IAsyncInfo const&);
    IAsyncInfo(IAsyncInfo const&);
    IAsyncInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IAsyncInfo();

    // vIndex: 1
    virtual ::Bedrock::Threading::AsyncStatus getStatus() const = 0;

    // vIndex: 2
    virtual ::std::error_code getError() const = 0;

    // vIndex: 3
    virtual void cancel() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Threading
