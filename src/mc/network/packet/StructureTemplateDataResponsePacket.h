#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/level/levelgen/structure/StructureTemplateResponseType.h"

class StructureTemplateDataResponsePacket : public ::Packet {
public:
    // prevent constructor by default
    StructureTemplateDataResponsePacket& operator=(StructureTemplateDataResponsePacket const&);
    StructureTemplateDataResponsePacket(StructureTemplateDataResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StructureTemplateDataResponsePacket@@UEAA@XZ
    virtual ~StructureTemplateDataResponsePacket();

    // vIndex: 1, symbol: ?getId@StructureTemplateDataResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@StructureTemplateDataResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@StructureTemplateDataResponsePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@StructureTemplateDataResponsePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0StructureTemplateDataResponsePacket@@QEAA@XZ
    MCAPI StructureTemplateDataResponsePacket();

    // symbol:
    // ??0StructureTemplateDataResponsePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@2@W4StructureTemplateResponseType@@@Z
    MCAPI StructureTemplateDataResponsePacket(
        std::string const&                 structureName,
        std::unique_ptr<class CompoundTag> structureTag,
        enum StructureTemplateResponseType type
    );

    // symbol: ??4StructureTemplateDataResponsePacket@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class StructureTemplateDataResponsePacket& operator=(class StructureTemplateDataResponsePacket&&);

    // NOLINTEND
};
