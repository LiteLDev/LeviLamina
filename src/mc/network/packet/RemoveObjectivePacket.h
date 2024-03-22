#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RemoveObjectivePacket : public ::Packet {
public:
    std::string mObjectiveName; // this+0x30

    // prevent constructor by default
    RemoveObjectivePacket& operator=(RemoveObjectivePacket const&);
    RemoveObjectivePacket(RemoveObjectivePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RemoveObjectivePacket@@UEAA@XZ
    virtual ~RemoveObjectivePacket();

    // vIndex: 1, symbol: ?getId@RemoveObjectivePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RemoveObjectivePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@RemoveObjectivePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@RemoveObjectivePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0RemoveObjectivePacket@@QEAA@XZ
    MCAPI RemoveObjectivePacket();

    // symbol: ??0RemoveObjectivePacket@@QEAA@AEBVObjective@@@Z
    MCAPI explicit RemoveObjectivePacket(class Objective const& objective);

    // NOLINTEND
};
