#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class SubChunkPacket : public ::Packet {
public:
    // SubChunkPacket inner types declare
    // clang-format off
    class HeightmapData;
    struct SubChunkPosOffset;
    struct SubChunkPacketData;
    // clang-format on

    // SubChunkPacket inner types define
    enum class HeightMapDataType {};

    enum class SubChunkRequestResult {};

    class HeightmapData {
    public:
        // prevent constructor by default
        HeightmapData& operator=(HeightmapData const&);
        HeightmapData(HeightmapData const&);
        HeightmapData();

    public:
        // NOLINTBEGIN
        // symbol: ?HEIGHT_COLUMN_ABOVE_SUBCHUNK@HeightmapData@SubChunkPacket@@2CB
        MCAPI static schar const HEIGHT_COLUMN_ABOVE_SUBCHUNK;

        // symbol: ?HEIGHT_COLUMN_BELOW_SUBCHUNK@HeightmapData@SubChunkPacket@@2CB
        MCAPI static schar const HEIGHT_COLUMN_BELOW_SUBCHUNK;

        // NOLINTEND
    };

    struct SubChunkPosOffset {
    public:
        // prevent constructor by default
        SubChunkPosOffset& operator=(SubChunkPosOffset const&);
        SubChunkPosOffset(SubChunkPosOffset const&);
        SubChunkPosOffset();
    };

    struct SubChunkPacketData {
    public:
        // prevent constructor by default
        SubChunkPacketData& operator=(SubChunkPacketData const&);
        SubChunkPacketData(SubChunkPacketData const&);
        SubChunkPacketData();

    public:
        // NOLINTBEGIN
        // symbol: ??0SubChunkPacketData@SubChunkPacket@@QEAA@AEBUSubChunkPosOffset@1@W4SubChunkRequestResult@1@@Z
        MCAPI
        SubChunkPacketData(struct SubChunkPacket::SubChunkPosOffset const&, ::SubChunkPacket::SubChunkRequestResult);

        // symbol: ??0SubChunkPacketData@SubChunkPacket@@QEAA@$$QEAU01@@Z
        MCAPI SubChunkPacketData(struct SubChunkPacket::SubChunkPacketData&&);

        // symbol: ??1SubChunkPacketData@SubChunkPacket@@QEAA@XZ
        MCAPI ~SubChunkPacketData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SubChunkPacket& operator=(SubChunkPacket const&);
    SubChunkPacket(SubChunkPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SubChunkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SubChunkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SubChunkPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SubChunkPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1SubChunkPacket@@UEAA@XZ
    MCVAPI ~SubChunkPacket();

    // symbol: ??0SubChunkPacket@@QEAA@XZ
    MCAPI SubChunkPacket();

    // symbol: ??0SubChunkPacket@@QEAA@AEBV?$AutomaticID@VDimension@@H@@AEBVSubChunkPos@@_N@Z
    MCAPI SubChunkPacket(class AutomaticID<class Dimension, int> const&, class SubChunkPos const&, bool);

    // NOLINTEND
};
