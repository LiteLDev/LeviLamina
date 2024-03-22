#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateClientInputLocksPacket : public ::Packet {
public:
    int  mInputLockComponentData; // this+0x30
    Vec3 mServerPos;              // this+0x34

    // prevent constructor by default
    UpdateClientInputLocksPacket& operator=(UpdateClientInputLocksPacket const&);
    UpdateClientInputLocksPacket(UpdateClientInputLocksPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UpdateClientInputLocksPacket@@UEAA@XZ
    virtual ~UpdateClientInputLocksPacket();

    // vIndex: 1, symbol: ?getId@UpdateClientInputLocksPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateClientInputLocksPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@UpdateClientInputLocksPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@UpdateClientInputLocksPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdateClientInputLocksPacket@@QEAA@XZ
    MCAPI UpdateClientInputLocksPacket();

    // symbol: ??0UpdateClientInputLocksPacket@@QEAA@AEBUClientInputLockComponent@@AEBVVec3@@@Z
    MCAPI UpdateClientInputLocksPacket(struct ClientInputLockComponent const&, class Vec3 const&);

    // NOLINTEND
};
