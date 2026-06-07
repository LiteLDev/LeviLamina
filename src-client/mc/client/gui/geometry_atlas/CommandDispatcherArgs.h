#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct RenderableUpdateCommand; }
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

namespace GeometryAtlas {

struct CommandDispatcherArgs {
public:
    // CommandDispatcherArgs inner types declare
    // clang-format off
    struct DispatchFunctions;
    // clang-format on

    // CommandDispatcherArgs inner types define
    struct DispatchFunctions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::GeometryAtlas::RenderableUpdateCommand&&)>>
            mDispatch;
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::dragon::atlas::AtlasTileHandle(uint const&) const>>
            mGetBackendID;
        // NOLINTEND
    };

    using DispatchFunctionPointer = ::std::weak_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                        mId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>> mDispatcher;
    // NOLINTEND
};

} // namespace GeometryAtlas
