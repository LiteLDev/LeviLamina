#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

class IResourcePackRepositoryRefresher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourcePackRepositoryRefresher() = default;

    virtual ::Bedrock::Threading::Async<void> initialize() = 0;

    virtual ::Bedrock::Threading::Async<void> refreshPacks() = 0;

    virtual ::Bedrock::Threading::Async<void> reloadUserPacks() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
