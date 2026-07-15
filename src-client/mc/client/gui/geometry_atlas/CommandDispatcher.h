#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcherArgs.h"

namespace GeometryAtlas {

class CommandDispatcher {
public:
    // CommandDispatcher inner types define
    using DispatchFunction = ::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions;

    using DispatchFunctionPointer = ::std::weak_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const> mId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions> const>
        mDispatcher;
    // NOLINTEND
};

} // namespace GeometryAtlas
