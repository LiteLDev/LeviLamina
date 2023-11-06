#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EntityServerPacket : public ::Packet {
public:
    // prevent constructor by default
    EntityServerPacket& operator=(EntityServerPacket const&);
    EntityServerPacket(EntityServerPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EntityServerPacket@@UEAA@XZ
    virtual ~EntityServerPacket();

    // vIndex: 3, symbol: ?write@EntityServerPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@EntityServerPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0EntityServerPacket@@QEAA@XZ
    MCAPI EntityServerPacket();

    // symbol: ??0EntityServerPacket@@QEAA@AEBVEntityContext@@@Z
    MCAPI explicit EntityServerPacket(class EntityContext const&);

    // NOLINTEND
};
