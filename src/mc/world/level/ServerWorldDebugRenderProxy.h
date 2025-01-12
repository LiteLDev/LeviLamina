#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IServerWorldDebugRenderProxy.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Options;
class Player;
// clang-format on

class ServerWorldDebugRenderProxy : public ::IServerWorldDebugRenderProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void renderActorsDebugServerState(::Options const&, ::Dimension const&) /*override*/;

    // vIndex: 2
    virtual void renderSimulatedPlayerDebugServerState(::Options const&, ::Player&) /*override*/;

    // vIndex: 3
    virtual void debugRenderDimension(::Dimension&) /*override*/;

    // vIndex: 4
    virtual void debugRendererStartTick() /*override*/;

    // vIndex: 5
    virtual void debugRendererEndTick() /*override*/;

    // vIndex: 0
    virtual ~ServerWorldDebugRenderProxy() /*override*/ = default;
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
