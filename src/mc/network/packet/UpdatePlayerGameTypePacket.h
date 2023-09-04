#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/GameType.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdatePlayerGameTypePacket : public ::Packet {
public:
    GameType      mPlayerGameType; // this+0x30
    ActorUniqueID mTargetPlayer;   // this+0x38

    // prevent constructor by default
    UpdatePlayerGameTypePacket& operator=(UpdatePlayerGameTypePacket const&) = delete;
    UpdatePlayerGameTypePacket(UpdatePlayerGameTypePacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@UpdatePlayerGameTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdatePlayerGameTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdatePlayerGameTypePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@UpdatePlayerGameTypePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1UpdatePlayerGameTypePacket@@UEAA@XZ
    MCVAPI ~UpdatePlayerGameTypePacket();

    // symbol: ??0UpdatePlayerGameTypePacket@@QEAA@XZ
    MCAPI UpdatePlayerGameTypePacket();

    // symbol: ??0UpdatePlayerGameTypePacket@@QEAA@W4GameType@@AEBUActorUniqueID@@@Z
    MCAPI UpdatePlayerGameTypePacket(::GameType, struct ActorUniqueID const&);

    // NOLINTEND
};
