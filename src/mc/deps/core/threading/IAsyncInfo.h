#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"

namespace Bedrock::Threading {

class IAsyncInfo {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncInfo() = default;

    virtual ::Bedrock::Threading::AsyncStatus getStatus() const = 0;

    virtual ::std::error_code getError() const = 0;

    virtual void cancel() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Threading
