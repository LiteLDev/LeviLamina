#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

class ClientboundMapItemDataPacket : public ::Packet {
public:
    // ClientboundMapItemDataPacket inner types define
    enum class Type {};

public:
    // prevent constructor by default
    ClientboundMapItemDataPacket& operator=(ClientboundMapItemDataPacket const&);
    ClientboundMapItemDataPacket(ClientboundMapItemDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientboundMapItemDataPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ClientboundMapItemDataPacket();

    MCAPI ClientboundMapItemDataPacket(gsl::not_null<class MapItemSavedData*> newMapItem, class Level& level);

    MCAPI ClientboundMapItemDataPacket(
        struct ActorUniqueID mapId,
        schar                scale,
        std::vector<std::pair<struct MapItemTrackedActor::UniqueId, std::shared_ptr<class MapDecoration>>> const&
                                decorations,
        class buffer_span<uint> mapColors,
        int                     startX,
        int                     startY,
        int                     width,
        int                     height,
        DimensionType           dimension,
        bool                    isLocked,
        class BlockPos const&   mapOrigin
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(gsl::not_null<class MapItemSavedData*> newMapItem, class Level& level);

    MCAPI void* ctor$(
        struct ActorUniqueID mapId,
        schar                scale,
        std::vector<std::pair<struct MapItemTrackedActor::UniqueId, std::shared_ptr<class MapDecoration>>> const&
                                decorations,
        class buffer_span<uint> mapColors,
        int                     startX,
        int                     startY,
        int                     width,
        int                     height,
        DimensionType           dimension,
        bool                    isLocked,
        class BlockPos const&   mapOrigin
    );

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
