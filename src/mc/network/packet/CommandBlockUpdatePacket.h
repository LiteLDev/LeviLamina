#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CommandBlockUpdatePacket : public ::Packet {
public:
    // prevent constructor by default
    CommandBlockUpdatePacket& operator=(CommandBlockUpdatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CommandBlockUpdatePacket@@UEAA@XZ
    virtual ~CommandBlockUpdatePacket();

    // vIndex: 1, symbol: ?getId@CommandBlockUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CommandBlockUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CommandBlockUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@CommandBlockUpdatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CommandBlockUpdatePacket@@QEAA@XZ
    MCAPI CommandBlockUpdatePacket();

    // symbol: ??0CommandBlockUpdatePacket@@QEAA@AEBV0@@Z
    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const&);

    // NOLINTEND
};
