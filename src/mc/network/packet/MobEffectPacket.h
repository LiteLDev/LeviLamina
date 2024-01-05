#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MobEffectPacket : public ::Packet {
public:
    // MobEffectPacket inner types define
    enum class Event {};

public:
    // prevent constructor by default
    MobEffectPacket& operator=(MobEffectPacket const&);
    MobEffectPacket(MobEffectPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MobEffectPacket@@UEAA@XZ
    virtual ~MobEffectPacket();

    // vIndex: 1, symbol: ?getId@MobEffectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MobEffectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MobEffectPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@MobEffectPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0MobEffectPacket@@QEAA@XZ
    MCAPI MobEffectPacket();

    // symbol: ??0MobEffectPacket@@QEAA@VActorRuntimeID@@W4Event@0@HHH_N@Z
    MCAPI MobEffectPacket(
        class ActorRuntimeID     runtimeId,
        ::MobEffectPacket::Event event,
        int                      effectId,
        int                      duration,
        int                      amplifier,
        bool                     showParticles
    );

    // NOLINTEND
};
