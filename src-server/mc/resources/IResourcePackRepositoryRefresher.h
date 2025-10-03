#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

class IResourcePackRepositoryRefresher {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IResourcePackRepositoryRefresher() = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::Async<void> initialize() = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<void> refreshPacks() = 0;

    // vIndex: 3
    virtual ::Bedrock::Threading::Async<void> reloadUserPacks() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
