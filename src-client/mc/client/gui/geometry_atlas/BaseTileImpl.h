#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcher.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct CommandDispatcherArgs; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

namespace GeometryAtlas {

class BaseTileImpl : public ::GeometryAtlas::CommandDispatcher {
public:
    // prevent constructor by default
    BaseTileImpl();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BaseTileImpl(::GeometryAtlas::CommandDispatcherArgs&& args, ::GeometryAtlas::TileDefinition const& tileDefinition);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::GeometryAtlas::CommandDispatcherArgs&& args, ::GeometryAtlas::TileDefinition const& tileDefinition);
    // NOLINTEND
};

} // namespace GeometryAtlas
