#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class InteractPacket : public ::Packet {
public:
    // InteractPacket inner types define
    enum class Action : uchar {
        Invalid        = 0x0,
        StopRiding     = 0x3,
        InteractUpdate = 0x4,
        NpcOpen        = 0x5,
        OpenInventory  = 0x6,
    };

public:
    InteractPacket::Action mAction;   // this+0x30
    ActorRuntimeID         mTargetId; // this+0x38
    Vec3                   mPos;      // this+0x40

    // prevent constructor by default
    InteractPacket& operator=(InteractPacket const&);
    InteractPacket(InteractPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1InteractPacket@@UEAA@XZ
    virtual ~InteractPacket();

    // vIndex: 1, symbol: ?getId@InteractPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@InteractPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@InteractPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@InteractPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0InteractPacket@@QEAA@XZ
    MCAPI InteractPacket();

    // symbol: ??0InteractPacket@@QEAA@W4Action@0@VActorRuntimeID@@AEBVVec3@@@Z
    MCAPI InteractPacket(::InteractPacket::Action action, class ActorRuntimeID targetId, class Vec3 const& pos);

    // NOLINTEND
};
