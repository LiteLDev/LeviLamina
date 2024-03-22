#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CommandOutput.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CommandOutputPacket : public ::Packet {
public:
    CommandOriginData mOriginData; // this+0x30
    CommandOutput     mOutput;     // this+0x70

    // prevent constructor by default
    CommandOutputPacket& operator=(CommandOutputPacket const&);
    CommandOutputPacket(CommandOutputPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CommandOutputPacket@@UEAA@XZ
    virtual ~CommandOutputPacket();

    // vIndex: 1, symbol: ?getId@CommandOutputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CommandOutputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CommandOutputPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@CommandOutputPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CommandOutputPacket@@QEAA@XZ
    MCAPI CommandOutputPacket();

    // symbol: ??0CommandOutputPacket@@QEAA@AEBVCommandOrigin@@AEBVCommandOutput@@@Z
    MCAPI CommandOutputPacket(class CommandOrigin const& origin, class CommandOutput const& output);

    // NOLINTEND
};
