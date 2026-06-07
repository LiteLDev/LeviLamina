#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/AllocateAtlasPayload.h"
#include "mc/client/gui/geometry_atlas/AllocateBackendPayload.h"
#include "mc/client/gui/geometry_atlas/InsertTilePayload.h"
#include "mc/client/gui/geometry_atlas/RemoveTilePayload.h"
#include "mc/client/gui/geometry_atlas/UIItemPayload.h"

namespace GeometryAtlas {

struct RenderableUpdateCommand {
public:
    // RenderableUpdateCommand inner types define
    using Variant = ::std::variant<
        ::GeometryAtlas::AllocateAtlasPayload,
        ::GeometryAtlas::AllocateBackendPayload,
        ::GeometryAtlas::UIItemPayload,
        ::GeometryAtlas::InsertTilePayload,
        ::GeometryAtlas::RemoveTilePayload>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        56,
        ::std::variant<
            ::GeometryAtlas::AllocateAtlasPayload,
            ::GeometryAtlas::AllocateBackendPayload,
            ::GeometryAtlas::UIItemPayload,
            ::GeometryAtlas::InsertTilePayload,
            ::GeometryAtlas::RemoveTilePayload>>
                                   mData;
    ::ll::TypedStorage<4, 4, uint> mTarget;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RenderableUpdateCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace GeometryAtlas
