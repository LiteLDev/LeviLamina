#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/islands/IslandTransition.h"

namespace Bedrock {

class IIslandManagerLogger {
public:
    // prevent constructor by default
    IIslandManagerLogger& operator=(IIslandManagerLogger const&);
    IIslandManagerLogger(IIslandManagerLogger const&);
    IIslandManagerLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IIslandManagerLogger();

    // vIndex: 1
    virtual void transitionSignaled(::Bedrock::IslandTransition) = 0;

    // vIndex: 2
    virtual void transitionCompleted() = 0;

    // vIndex: 3
    virtual void islandUpdate(ushort, ::std::chrono::nanoseconds) = 0;

    // vIndex: 4
    virtual void islandTransition(ushort, ::Bedrock::IslandTransition, bool, ::std::chrono::nanoseconds) = 0;
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

} // namespace Bedrock
