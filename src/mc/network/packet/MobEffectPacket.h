#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MobEffectPacket : public ::Packet {
public:
    // MobEffectPacket inner types define
    enum class Event : schar {
        Invalid = 0x0,
        Add     = 0x1,
        Update  = 0x2,
        Remove  = 0x3,
    };

public:
    ActorRuntimeID   mRuntimeId;           // this+0x30
    int              mEffectDurationTicks; // this+0x38
    enum class Event mEventId;             // this+0x3C
    int              mEffectId;            // this+0x40
    int              mEffectAmplifier;     // this+0x44
    bool             mShowParticles;       // this+0x48

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
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0MobEffectPacket@@QEAA@XZ
    MCAPI MobEffectPacket();

    // symbol: ??0MobEffectPacket@@QEAA@VActorRuntimeID@@W4Event@0@HHH_N@Z
    MCAPI MobEffectPacket(
        class ActorRuntimeID        runtimeId,
        enum MobEffectPacket::Event event,
        int                         effectId,
        int                         duration,
        int                         amplifier,
        bool                        showParticles
    );

    // NOLINTEND
};
