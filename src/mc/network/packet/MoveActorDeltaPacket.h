#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/MoveActorDeltaData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MoveActorDeltaPacket : public ::Packet {
public:
    MoveActorDeltaData mMoveData; // this+0x30

    // prevent constructor by default
    MoveActorDeltaPacket& operator=(MoveActorDeltaPacket const&);
    MoveActorDeltaPacket(MoveActorDeltaPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MoveActorDeltaPacket@@UEAA@XZ
    virtual ~MoveActorDeltaPacket();

    // vIndex: 1, symbol: ?getId@MoveActorDeltaPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MoveActorDeltaPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MoveActorDeltaPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@MoveActorDeltaPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0MoveActorDeltaPacket@@QEAA@XZ
    MCAPI MoveActorDeltaPacket();

    // symbol: ??0MoveActorDeltaPacket@@QEAA@AEBVMoveActorDeltaData@@@Z
    MCAPI explicit MoveActorDeltaPacket(class MoveActorDeltaData const&);

    // NOLINTEND
};
