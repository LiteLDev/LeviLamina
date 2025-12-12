#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/islands/IslandTransition.h"

namespace Bedrock {

class IIslandManagerLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IIslandManagerLogger() = default;

    virtual void transitionSignaled(::Bedrock::IslandTransition) = 0;

    virtual void transitionCompleted() = 0;

    virtual void islandUpdate(ushort, ::std::chrono::nanoseconds) = 0;

    virtual void islandTransition(ushort, ::Bedrock::IslandTransition, bool, ::std::chrono::nanoseconds) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
