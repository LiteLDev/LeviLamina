#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Dimension;
class Level;
class MapDecoration;
class MapItemSavedData;
class ReadOnlyBinaryStream;
struct ActorUniqueID;
// clang-format on

class ClientboundMapItemDataPacket : public ::Packet {
public:
    // ClientboundMapItemDataPacket inner types define
    enum class Type : int {
        // bitfield representation
        Invalid          = 0,
        TextureUpdate    = 1 << 1,
        DecorationUpdate = 1 << 2,
        Creation         = 1 << 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                    mMapIds;
    ::ll::TypedStorage<1, 1, char>                                               mScale;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::MapDecoration>>> mDecorations;
    ::ll::TypedStorage<8, 24, ::std::vector<::MapItemTrackedActor::UniqueId>>    mUniqueIds;
    ::ll::TypedStorage<4, 4, int>                                                mStartX;
    ::ll::TypedStorage<4, 4, int>                                                mStartY;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mMapOrigin;
    ::ll::TypedStorage<1, 1, uchar>                                              mDimension;
    ::ll::TypedStorage<4, 4, int>                                                mWidth;
    ::ll::TypedStorage<4, 4, int>                                                mHeight;
    ::ll::TypedStorage<4, 4, ::ClientboundMapItemDataPacket::Type>               mType;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                               mMapPixels;
    ::ll::TypedStorage<1, 1, bool>                                               mLocked;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~ClientboundMapItemDataPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientboundMapItemDataPacket();

    MCNAPI ClientboundMapItemDataPacket(::gsl::not_null<::MapItemSavedData*> newMapItem, ::Level& level);

    MCNAPI ClientboundMapItemDataPacket(
        ::ActorUniqueID mapId,
        schar           scale,
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>> const&
                            decorations,
        ::buffer_span<uint> mapColors,
        int                 startX,
        int                 startY,
        int                 width,
        int                 height,
        ::DimensionType     dimension,
        bool                isLocked,
        ::BlockPos const&   mapOrigin
    );

    MCNAPI bool isOfType(::ClientboundMapItemDataPacket::Type type) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::gsl::not_null<::MapItemSavedData*> newMapItem, ::Level& level);

    MCNAPI void* $ctor(
        ::ActorUniqueID mapId,
        schar           scale,
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>> const&
                            decorations,
        ::buffer_span<uint> mapColors,
        int                 startX,
        int                 startY,
        int                 width,
        int                 height,
        ::DimensionType     dimension,
        bool                isLocked,
        ::BlockPos const&   mapOrigin
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $write(::BinaryStream& stream) const;

    MCNAPI ::MinecraftPacketIds $getId() const;

    MCNAPI ::std::string $getName() const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
