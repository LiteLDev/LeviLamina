#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class DimensionDataPacket : public ::Packet {
public:
    DimensionDefinitionGroup mDimensionDefinitionGroup; // this+0x30

    // prevent constructor by default
    DimensionDataPacket& operator=(DimensionDataPacket const&);
    DimensionDataPacket(DimensionDataPacket const&);
    DimensionDataPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DimensionDataPacket@@UEAA@XZ
    virtual ~DimensionDataPacket();

    // vIndex: 1, symbol: ?getId@DimensionDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@DimensionDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@DimensionDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@DimensionDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0DimensionDataPacket@@QEAA@AEBVDimensionDefinitionGroup@@@Z
    MCAPI explicit DimensionDataPacket(class DimensionDefinitionGroup const&);

    // NOLINTEND
};
