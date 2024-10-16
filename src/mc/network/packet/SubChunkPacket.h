#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SubChunkPacket : public ::Packet {
public:
    // SubChunkPacket inner types declare
    // clang-format off
    class HeightmapData;
    struct SubChunkPacketData;
    struct SubChunkPosOffset;
    // clang-format on

    // SubChunkPacket inner types define
    enum class HeightMapDataType : schar {
        NoData     = 0x0,
        HasData    = 0x1,
        AllTooHigh = 0x2,
        AllTooLow  = 0x3,
    };

    enum class SubChunkRequestResult : schar {
        Undefined             = 0x0,
        Success               = 0x1,
        LevelChunkDoesntExist = 0x2,
        WrongDimension        = 0x3,
        PlayerDoesntExist     = 0x4,
        IndexOutOfBounds      = 0x5,
        SuccessAllAir         = 0x6,
    };

    class HeightmapData {
    public:
        HeightMapDataType                         mHeightMapType;
        std::array<std::array<schar, 16UL>, 16UL> mSubchunkHeightMap;

        // prevent constructor by default
        HeightmapData& operator=(HeightmapData const&);
        HeightmapData(HeightmapData const&);
        HeightmapData();

    public:
        // NOLINTBEGIN
        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static schar const& HEIGHT_COLUMN_ABOVE_SUBCHUNK();

        MCAPI static schar const& HEIGHT_COLUMN_BELOW_SUBCHUNK();

        // NOLINTEND
    };

    struct SubChunkPosOffset {
    public:
        schar mX;
        schar mY;
        schar mZ;

        // prevent constructor by default
        SubChunkPosOffset& operator=(SubChunkPosOffset const&);
        SubChunkPosOffset(SubChunkPosOffset const&);
        SubChunkPosOffset();
    };

    struct SubChunkPacketData {
    public:
        const SubChunkPosOffset mSubChunkPosOffset;
        std::string             mSerializedSubChunk;
        SubChunkRequestResult   mResult;
        HeightmapData           mHeightMapData;
        uint64                  mBlobId;

        // prevent constructor by default
        SubChunkPacketData& operator=(SubChunkPacketData const&);
        SubChunkPacketData(SubChunkPacketData const&);
        SubChunkPacketData();

    public:
        // NOLINTBEGIN
        MCAPI SubChunkPacketData(struct SubChunkPacket::SubChunkPacketData&&);

        MCAPI ~SubChunkPacketData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct SubChunkPacket::SubChunkPacketData&&);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    bool                            mCacheEnabled;  // this+0x30
    DimensionType                   mDimensionType; // this+0x34
    std::vector<SubChunkPacketData> mSubChunkData;  // this+0x38
    SubChunkPos                     mCenterPos;     // this+0x50

    // prevent constructor by default
    SubChunkPacket& operator=(SubChunkPacket const&);
    SubChunkPacket(SubChunkPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubChunkPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SubChunkPacket();

    MCAPI SubChunkPacket(DimensionType const& dimension, class SubChunkPos const& centerPos, bool cacheEnabled);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(DimensionType const& dimension, class SubChunkPos const& centerPos, bool cacheEnabled);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
