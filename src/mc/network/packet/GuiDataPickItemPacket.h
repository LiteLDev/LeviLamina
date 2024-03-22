#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class GuiDataPickItemPacket : public ::Packet {
public:
    std::string mItemName;       // this+0x30
    std::string mItemEffectName; // this+0x50
    int         mSlot;           // this+0x70

    // prevent constructor by default
    GuiDataPickItemPacket& operator=(GuiDataPickItemPacket const&);
    GuiDataPickItemPacket(GuiDataPickItemPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1GuiDataPickItemPacket@@UEAA@XZ
    virtual ~GuiDataPickItemPacket();

    // vIndex: 1, symbol: ?getId@GuiDataPickItemPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@GuiDataPickItemPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@GuiDataPickItemPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@GuiDataPickItemPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0GuiDataPickItemPacket@@QEAA@XZ
    MCAPI GuiDataPickItemPacket();

    // symbol: ??0GuiDataPickItemPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBH@Z
    MCAPI GuiDataPickItemPacket(std::string const& name, std::string const& effect, int const& slot);

    // NOLINTEND
};
