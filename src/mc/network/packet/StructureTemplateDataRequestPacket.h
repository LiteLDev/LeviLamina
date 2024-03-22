#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"
#include "mc/world/level/levelgen/structure/StructureTemplateRequestOperation.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class StructureTemplateDataRequestPacket : public ::Packet {
public:
    std::string                       mStructureName;     // this+0x30
    NetworkBlockPosition              mStructureBlockPos; // this+0x50
    StructureSettings                 mStructureSettings; // this+0x60
    StructureTemplateRequestOperation mRequestOperation;  // this+0xC8


    // prevent constructor by default
    StructureTemplateDataRequestPacket& operator=(StructureTemplateDataRequestPacket const&);
    StructureTemplateDataRequestPacket(StructureTemplateDataRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructureTemplateDataRequestPacket@@UEAA@XZ
    virtual ~StructureTemplateDataRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@StructureTemplateDataRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@StructureTemplateDataRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@StructureTemplateDataRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@StructureTemplateDataRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0StructureTemplateDataRequestPacket@@QEAA@XZ
    MCAPI StructureTemplateDataRequestPacket();

    // NOLINTEND
};
