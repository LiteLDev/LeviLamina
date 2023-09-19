#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/ActorInfo.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AvailableActorIdentifiersPacket : public ::Packet {
public:
    std::vector<ActorInfo> mIdentifierList; // this+0x30

    // prevent constructor by default
    AvailableActorIdentifiersPacket& operator=(AvailableActorIdentifiersPacket const&);
    AvailableActorIdentifiersPacket(AvailableActorIdentifiersPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AvailableActorIdentifiersPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AvailableActorIdentifiersPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AvailableActorIdentifiersPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@AvailableActorIdentifiersPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);

    // vIndex: 7, symbol:
    // ?_read@AvailableActorIdentifiersPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1AvailableActorIdentifiersPacket@@UEAA@XZ
    MCVAPI ~AvailableActorIdentifiersPacket();

    // symbol: ??0AvailableActorIdentifiersPacket@@QEAA@AEBV?$vector@UActorInfo@@V?$allocator@UActorInfo@@@std@@@std@@@Z
    MCAPI explicit AvailableActorIdentifiersPacket(std::vector<struct ActorInfo> const&);

    // symbol: ??0AvailableActorIdentifiersPacket@@QEAA@XZ
    MCAPI AvailableActorIdentifiersPacket();

    // NOLINTEND
};
