#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class MapItemSavedData;
// clang-format on

struct MapInfoRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                           mMapId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint, ushort>>> mClientPixels;
    // NOLINTEND

public:
    // prevent constructor by default
    MapInfoRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapInfoRequestPacketPayload(::ActorUniqueID mapId, ::MapItemSavedData& map);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorUniqueID mapId, ::MapItemSavedData& map);
    // NOLINTEND
};
