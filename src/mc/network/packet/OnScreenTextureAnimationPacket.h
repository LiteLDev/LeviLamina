#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class OnScreenTextureAnimationPacket : public ::Packet {
public:
    uint mEffectID; // this+0x30

    // prevent constructor by default
    OnScreenTextureAnimationPacket& operator=(OnScreenTextureAnimationPacket const&);
    OnScreenTextureAnimationPacket(OnScreenTextureAnimationPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OnScreenTextureAnimationPacket@@UEAA@XZ
    virtual ~OnScreenTextureAnimationPacket();

    // vIndex: 1, symbol: ?getId@OnScreenTextureAnimationPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@OnScreenTextureAnimationPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@OnScreenTextureAnimationPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@OnScreenTextureAnimationPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0OnScreenTextureAnimationPacket@@QEAA@XZ
    MCAPI OnScreenTextureAnimationPacket();

    // symbol: ??0OnScreenTextureAnimationPacket@@QEAA@I@Z
    MCAPI explicit OnScreenTextureAnimationPacket(uint effectID);

    // NOLINTEND
};
