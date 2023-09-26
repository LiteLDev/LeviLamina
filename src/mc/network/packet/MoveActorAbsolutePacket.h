#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MoveActorAbsolutePacket : public ::Packet {
public:
    // prevent constructor by default
    MoveActorAbsolutePacket& operator=(MoveActorAbsolutePacket const&);
    MoveActorAbsolutePacket(MoveActorAbsolutePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@MoveActorAbsolutePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MoveActorAbsolutePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MoveActorAbsolutePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@MoveActorAbsolutePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1MoveActorAbsolutePacket@@UEAA@XZ
    MCVAPI ~MoveActorAbsolutePacket();

    // symbol: ??0MoveActorAbsolutePacket@@QEAA@AEBVMoveActorAbsoluteData@@@Z
    MCAPI explicit MoveActorAbsolutePacket(class MoveActorAbsoluteData const&);

    // symbol: ??0MoveActorAbsolutePacket@@QEAA@XZ
    MCAPI MoveActorAbsolutePacket();

    // NOLINTEND
};
