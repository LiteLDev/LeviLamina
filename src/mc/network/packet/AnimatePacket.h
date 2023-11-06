#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AnimatePacket : public ::Packet {
public:
    // AnimatePacket inner types define
    enum class Action {};

public:
    // prevent constructor by default
    AnimatePacket& operator=(AnimatePacket const&);
    AnimatePacket(AnimatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AnimatePacket@@UEAA@XZ
    virtual ~AnimatePacket();

    // vIndex: 1, symbol: ?getId@AnimatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@AnimatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AnimatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol: ?_read@AnimatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0AnimatePacket@@QEAA@XZ
    MCAPI AnimatePacket();

    // symbol: ??0AnimatePacket@@QEAA@W4Action@0@AEAVActor@@@Z
    MCAPI AnimatePacket(::AnimatePacket::Action, class Actor&);

    // symbol: ??0AnimatePacket@@QEAA@W4Action@0@VActorRuntimeID@@@Z
    MCAPI AnimatePacket(::AnimatePacket::Action, class ActorRuntimeID);

    // symbol: ??0AnimatePacket@@QEAA@W4Action@0@VActorRuntimeID@@M@Z
    MCAPI AnimatePacket(::AnimatePacket::Action, class ActorRuntimeID, float);

    // NOLINTEND
};
