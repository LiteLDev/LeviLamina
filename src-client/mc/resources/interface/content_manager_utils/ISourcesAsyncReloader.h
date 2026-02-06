#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

namespace ContentManagerUtils {

class ISourcesAsyncReloader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISourcesAsyncReloader() = default;

    virtual ::Bedrock::Threading::Async<void> reloadSourcesAsync(bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ContentManagerUtils
