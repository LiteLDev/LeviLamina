#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Dimension;
class ReadOnlyBinaryStream;
// clang-format on

class SubChunkPacket : public ::Packet {
public:
    // SubChunkPacket inner types declare
    // clang-format off
    struct HeightmapData;
    struct SubChunkPacketData;
    struct SubChunkPosOffset;
    // clang-format on

    // SubChunkPacket inner types define
    enum class HeightMapDataType : uchar {
        NoData     = 0,
        HasData    = 1,
        AllTooHigh = 2,
        AllTooLow  = 3,
    };

    enum class SubChunkRequestResult : uchar {
        Undefined             = 0,
        Success               = 1,
        LevelChunkDoesntExist = 2,
        WrongDimension        = 3,
        PlayerDoesntExist     = 4,
        IndexOutOfBounds      = 5,
        SuccessAllAir         = 6,
    };

    struct HeightmapData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SubChunkPacket::HeightMapDataType>         mHeightMapType;
        ::ll::TypedStorage<1, 256, ::std::array<::std::array<schar, 16>, 16>> mSubchunkHeightMap;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static schar const& HEIGHT_COLUMN_ABOVE_SUBCHUNK();

        MCAPI static schar const& HEIGHT_COLUMN_BELOW_SUBCHUNK();
        // NOLINTEND
    };

    struct SubChunkPosOffset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, char> mX;
        ::ll::TypedStorage<1, 1, char> mY;
        ::ll::TypedStorage<1, 1, char> mZ;
        // NOLINTEND
    };

    struct SubChunkPacketData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 3, ::SubChunkPacket::SubChunkPosOffset const> mSubChunkPosOffset;
        ::ll::TypedStorage<8, 32, ::std::string>                            mSerializedSubChunk;
        ::ll::TypedStorage<1, 1, ::SubChunkPacket::SubChunkRequestResult>   mResult;
        ::ll::TypedStorage<1, 257, ::SubChunkPacket::HeightmapData>         mHeightMapData;
        ::ll::TypedStorage<8, 8, uint64>                                    mBlobId;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SubChunkPacketData(
            ::SubChunkPacket::SubChunkPosOffset const& pos,
            ::SubChunkPacket::SubChunkRequestResult    requestResult
        );

        MCNAPI ~SubChunkPacketData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::SubChunkPacket::SubChunkPosOffset const& pos, ::SubChunkPacket::SubChunkRequestResult requestResult);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                 mCacheEnabled;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                      mDimensionType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPacket::SubChunkPacketData>> mSubChunkData;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                       mCenterPos;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkPacket& operator=(SubChunkPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubChunkPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SubChunkPacket(::SubChunkPacket const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubChunkPacket const&);
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
