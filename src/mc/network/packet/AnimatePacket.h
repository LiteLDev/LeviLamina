#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/ActorRuntimeID.h"

class AnimatePacket : public ::Packet {
public:
    // AnimatePacket inner types define
    enum class Action : int {
        NoAction         = 0x0,
        Swing            = 0x1,
        WakeUp           = 0x3,
        CriticalHit      = 0x4,
        MagicCriticalHit = 0x5,
        RowRight         = 0x80,
        RowLeft          = 0x81,
    };

    ActorRuntimeID        mRuntimeId; // this+0x30
    AnimatePacket::Action mAction;    // this+0x38
    float                 mData;      // this+0x3C

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AnimatePacket@@UEAA@XZ
    virtual ~AnimatePacket();

    // vIndex: 1, symbol: ?getId@AnimatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@AnimatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AnimatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol: ?_read@AnimatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AnimatePacket@@QEAA@XZ
    MCAPI AnimatePacket();

    // symbol: ??0AnimatePacket@@QEAA@W4Action@0@AEAVActor@@@Z
    MCAPI AnimatePacket(::AnimatePacket::Action action, class Actor& e);

    // symbol: ??0AnimatePacket@@QEAA@W4Action@0@VActorRuntimeID@@@Z
    MCAPI AnimatePacket(::AnimatePacket::Action action, class ActorRuntimeID runtimeId);

    // symbol: ??0AnimatePacket@@QEAA@W4Action@0@VActorRuntimeID@@M@Z
    MCAPI AnimatePacket(::AnimatePacket::Action action, class ActorRuntimeID runtimeId, float data);

    // NOLINTEND
};
