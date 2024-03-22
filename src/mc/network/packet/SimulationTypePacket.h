#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/SimulationType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SimulationTypePacket : public ::Packet {
public:
    SimulationType mSimType; // this+0x30

    // prevent constructor by default
    SimulationTypePacket& operator=(SimulationTypePacket const&);
    SimulationTypePacket(SimulationTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SimulationTypePacket@@UEAA@XZ
    virtual ~SimulationTypePacket() = default;

    // vIndex: 1, symbol: ?getId@SimulationTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SimulationTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SimulationTypePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SimulationTypePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SimulationTypePacket@@QEAA@XZ
    MCAPI SimulationTypePacket();

    // NOLINTEND
};
