#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AnvilDamagePacket : public ::Packet {
public:
    int                  mDamage;   // this+0x2c
    NetworkBlockPosition mPosition; // this+0x30

    // prevent constructor by default
    AnvilDamagePacket& operator=(AnvilDamagePacket const&);
    AnvilDamagePacket(AnvilDamagePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AnvilDamagePacket@@UEAA@XZ
    virtual ~AnvilDamagePacket() = default;

    // vIndex: 1, symbol: ?getId@AnvilDamagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AnvilDamagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AnvilDamagePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@AnvilDamagePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AnvilDamagePacket@@QEAA@XZ
    MCAPI AnvilDamagePacket();

    // NOLINTEND
};
