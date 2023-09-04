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
    CommandOutputPacket& operator=(CommandOutputPacket const&) = delete;
    CommandOutputPacket(CommandOutputPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@CommandOutputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CommandOutputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CommandOutputPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@CommandOutputPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1CommandOutputPacket@@UEAA@XZ
    MCVAPI ~CommandOutputPacket();

    // symbol: ??0CommandOutputPacket@@QEAA@AEBVCommandOrigin@@AEBVCommandOutput@@@Z
    MCAPI CommandOutputPacket(class CommandOrigin const&, class CommandOutput const&);

    // symbol: ??0CommandOutputPacket@@QEAA@XZ
    MCAPI CommandOutputPacket();

    // NOLINTEND
};
