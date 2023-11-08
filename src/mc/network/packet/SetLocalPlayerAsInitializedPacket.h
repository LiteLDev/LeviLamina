#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetLocalPlayerAsInitializedPacket : public ::Packet {
public:
    ActorRuntimeID mPlayerID; // this+0x30

    // prevent constructor by default
    SetLocalPlayerAsInitializedPacket& operator=(SetLocalPlayerAsInitializedPacket const&);
    SetLocalPlayerAsInitializedPacket(SetLocalPlayerAsInitializedPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetLocalPlayerAsInitializedPacket@@UEAA@XZ
    virtual ~SetLocalPlayerAsInitializedPacket() = default;

    // vIndex: 1, symbol: ?getId@SetLocalPlayerAsInitializedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetLocalPlayerAsInitializedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetLocalPlayerAsInitializedPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SetLocalPlayerAsInitializedPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0SetLocalPlayerAsInitializedPacket@@QEAA@XZ
    MCAPI SetLocalPlayerAsInitializedPacket();

    // NOLINTEND
};
