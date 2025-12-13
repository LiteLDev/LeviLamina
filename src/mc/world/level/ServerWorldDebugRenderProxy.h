#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IServerWorldDebugRenderProxy.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IOptionsReader;
class Player;
// clang-format on

class ServerWorldDebugRenderProxy : public ::IServerWorldDebugRenderProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void renderActorsDebugServerState(::IOptionsReader const&, ::Dimension const&) /*override*/;

    virtual void renderSimulatedPlayerDebugServerState(::IOptionsReader const&, ::Player&) /*override*/;

    virtual void debugRenderDimension(::Dimension&) /*override*/;

    virtual void debugRendererStartTick() /*override*/;

    virtual void debugRendererEndTick() /*override*/;

    virtual ~ServerWorldDebugRenderProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
