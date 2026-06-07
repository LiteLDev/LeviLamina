#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcherArgs.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct AllocateAtlasPayload; }
namespace GeometryAtlas { struct AllocateBackendPayload; }
namespace GeometryAtlas { struct InsertTilePayload; }
namespace GeometryAtlas { struct RemoveTilePayload; }
namespace GeometryAtlas { struct UIItemPayload; }
// clang-format on

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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tryDispatch(
        ::std::variant<
            ::GeometryAtlas::AllocateAtlasPayload,
            ::GeometryAtlas::AllocateBackendPayload,
            ::GeometryAtlas::UIItemPayload,
            ::GeometryAtlas::InsertTilePayload,
            ::GeometryAtlas::RemoveTilePayload>&& command
    );
    // NOLINTEND
};

} // namespace GeometryAtlas
