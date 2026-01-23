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
    MapInfoRequestPacketPayload& operator=(MapInfoRequestPacketPayload const&);
    MapInfoRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapInfoRequestPacketPayload(::MapInfoRequestPacketPayload const&);

    MCAPI MapInfoRequestPacketPayload(::ActorUniqueID mapId, ::MapItemSavedData& map);

    MCAPI ::MapInfoRequestPacketPayload& operator=(::MapInfoRequestPacketPayload&&);

    MCAPI ~MapInfoRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::MapInfoRequestPacketPayload const&);

    MCAPI void* $ctor(::ActorUniqueID mapId, ::MapItemSavedData& map);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
