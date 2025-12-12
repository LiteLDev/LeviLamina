#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IOptionsReader;
class Player;
// clang-format on

class IServerWorldDebugRenderProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerWorldDebugRenderProxy() = default;

    virtual void renderActorsDebugServerState(::IOptionsReader const&, ::Dimension const&) = 0;

    virtual void renderSimulatedPlayerDebugServerState(::IOptionsReader const&, ::Player&) = 0;

    virtual void debugRenderDimension(::Dimension&) = 0;

    virtual void debugRendererStartTick() = 0;

    virtual void debugRendererEndTick() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
