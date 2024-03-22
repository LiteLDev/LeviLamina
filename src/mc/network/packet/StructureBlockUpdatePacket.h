#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class StructureBlockUpdatePacket : public ::Packet {
public:
    NetworkBlockPosition mBlockPos;      // this+0x30
    StructureEditorData  mData;          // this+0x40
    bool                 mTrigger;       // this+0xF0
    bool                 mIsWaterlogged; // this+0xF1

    // prevent constructor by default
    StructureBlockUpdatePacket& operator=(StructureBlockUpdatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructureBlockUpdatePacket@@UEAA@XZ
    virtual ~StructureBlockUpdatePacket() = default;

    // vIndex: 1, symbol: ?getId@StructureBlockUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@StructureBlockUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@StructureBlockUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@StructureBlockUpdatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0StructureBlockUpdatePacket@@QEAA@XZ
    MCAPI StructureBlockUpdatePacket();

    // symbol: ??0StructureBlockUpdatePacket@@QEAA@AEBV0@@Z
    MCAPI StructureBlockUpdatePacket(class StructureBlockUpdatePacket const&);

    // NOLINTEND
};
