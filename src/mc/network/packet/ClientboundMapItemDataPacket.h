#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

class ClientboundMapItemDataPacket : public ::Packet {
public:
    // ClientboundMapItemDataPacket inner types define
    enum class Type : int {
        Invalid          = 0,
        TextureUpdate    = 1 << 1,
        DecorationUpdate = 1 << 2,
        Creation         = 1 << 3,
    };

    std::vector<ActorUniqueID>                  mMapIds;      // this+0x30
    schar                                       mScale;       // this+0x48
    std::vector<std::shared_ptr<MapDecoration>> mDecorations; // this+0x50
    std::vector<MapItemTrackedActor::UniqueId>  mUniqueIds;   // this+0x68
    int                                         mStartX;      // this+0x80
    int                                         mStartY;      // this+0x84
    class BlockPos                              mMapOrigin;   // this+0x88
    uchar                                       mDimension;   // this+0x94
    int                                         mWidth;       // this+0x98
    int                                         mHeight;      // this+0x9C
    Type                                        mType;        // this+0xA0
    std::vector<uint>                           mMapPixels;   // this+0xA8
    bool                                        mLocked;      // this+0xC0

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

    MCAPI
    ClientboundMapItemDataPacket(struct ActorUniqueID mapId, schar scale, std::vector<std::pair<struct MapItemTrackedActor::UniqueId, std::shared_ptr<class MapDecoration>>> const& decorations, class buffer_span<uint> mapColors, int startX, int startY, int width, int height, DimensionType dimension, bool isLocked, class BlockPos const&);

    // NOLINTEND
};
