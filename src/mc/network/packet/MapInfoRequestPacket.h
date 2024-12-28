#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class MapItemSavedData;
class ReadOnlyBinaryStream;
struct ActorUniqueID;
// clang-format on

class MapInfoRequestPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                           mMapId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint, ushort>>> mClientPixels;
    // NOLINTEND

public:
    // prevent constructor by default
    MapInfoRequestPacket& operator=(MapInfoRequestPacket const&);
    MapInfoRequestPacket(MapInfoRequestPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~MapInfoRequestPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapInfoRequestPacket();

    MCAPI explicit MapInfoRequestPacket(::ActorUniqueID mapId);

    MCAPI MapInfoRequestPacket(::ActorUniqueID mapId, ::MapItemSavedData& map);

    MCAPI ::ActorUniqueID getMapId() const;

    MCAPI bool replaceServerPixels(::MapItemSavedData& map) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorUniqueID mapId);

    MCAPI void* $ctor(::ActorUniqueID mapId, ::MapItemSavedData& map);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
