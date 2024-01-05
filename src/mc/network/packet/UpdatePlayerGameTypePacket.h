#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdatePlayerGameTypePacket : public ::Packet {
public:
    // prevent constructor by default
    UpdatePlayerGameTypePacket& operator=(UpdatePlayerGameTypePacket const&);
    UpdatePlayerGameTypePacket(UpdatePlayerGameTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UpdatePlayerGameTypePacket@@UEAA@XZ
    virtual ~UpdatePlayerGameTypePacket();

    // vIndex: 1, symbol: ?getId@UpdatePlayerGameTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdatePlayerGameTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdatePlayerGameTypePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@UpdatePlayerGameTypePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdatePlayerGameTypePacket@@QEAA@XZ
    MCAPI UpdatePlayerGameTypePacket();

    // symbol: ??0UpdatePlayerGameTypePacket@@QEAA@W4GameType@@AEBUActorUniqueID@@@Z
    MCAPI UpdatePlayerGameTypePacket(::GameType playerGameType, struct ActorUniqueID const&);

    // NOLINTEND
};
