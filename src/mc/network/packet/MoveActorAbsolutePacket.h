#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/MoveActorAbsoluteData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MoveActorAbsolutePacket : public ::Packet {
public:
    MoveActorAbsoluteData mMoveData; // this+0x30

    // prevent constructor by default
    MoveActorAbsolutePacket& operator=(MoveActorAbsolutePacket const&);
    MoveActorAbsolutePacket(MoveActorAbsolutePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MoveActorAbsolutePacket@@UEAA@XZ
    virtual ~MoveActorAbsolutePacket();

    // vIndex: 1, symbol: ?getId@MoveActorAbsolutePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MoveActorAbsolutePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@MoveActorAbsolutePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@MoveActorAbsolutePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0MoveActorAbsolutePacket@@QEAA@XZ
    MCAPI MoveActorAbsolutePacket();

    // symbol: ??0MoveActorAbsolutePacket@@QEAA@AEBVMoveActorAbsoluteData@@@Z
    MCAPI explicit MoveActorAbsolutePacket(class MoveActorAbsoluteData const& data);

    // NOLINTEND
};
