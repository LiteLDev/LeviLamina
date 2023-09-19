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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@RemoveObjectivePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RemoveObjectivePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@RemoveObjectivePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@RemoveObjectivePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1RemoveObjectivePacket@@UEAA@XZ
    MCVAPI ~RemoveObjectivePacket();

    // symbol: ??0RemoveObjectivePacket@@QEAA@AEBVObjective@@@Z
    MCAPI explicit RemoveObjectivePacket(class Objective const&);

    // symbol: ??0RemoveObjectivePacket@@QEAA@XZ
    MCAPI RemoveObjectivePacket();

    // NOLINTEND
};
