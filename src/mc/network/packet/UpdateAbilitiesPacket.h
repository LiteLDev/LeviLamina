#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/SerializedAbilitiesData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateAbilitiesPacket : public ::Packet {
public:
    SerializedAbilitiesData mData; // this+0x30

    // prevent constructor by default
    UpdateAbilitiesPacket& operator=(UpdateAbilitiesPacket const&);
    UpdateAbilitiesPacket(UpdateAbilitiesPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@UpdateAbilitiesPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateAbilitiesPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdateAbilitiesPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@UpdateAbilitiesPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1UpdateAbilitiesPacket@@UEAA@XZ
    MCVAPI ~UpdateAbilitiesPacket();

    // symbol: ??0UpdateAbilitiesPacket@@QEAA@XZ
    MCAPI UpdateAbilitiesPacket();

    // symbol: ??0UpdateAbilitiesPacket@@QEAA@UActorUniqueID@@AEBVLayeredAbilities@@@Z
    MCAPI UpdateAbilitiesPacket(struct ActorUniqueID, class LayeredAbilities const&);

    // NOLINTEND
};
