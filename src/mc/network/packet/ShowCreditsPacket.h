#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ShowCreditsPacket : public ::Packet {
public:
    // ShowCreditsPacket inner types define
    enum class CreditsState {};

public:
    // prevent constructor by default
    ShowCreditsPacket& operator=(ShowCreditsPacket const&);
    ShowCreditsPacket(ShowCreditsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ShowCreditsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ShowCreditsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ShowCreditsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ShowCreditsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ShowCreditsPacket@@UEAA@XZ
    MCVAPI ~ShowCreditsPacket();

    // symbol: ??0ShowCreditsPacket@@QEAA@VActorRuntimeID@@W4CreditsState@0@@Z
    MCAPI ShowCreditsPacket(class ActorRuntimeID, ::ShowCreditsPacket::CreditsState);

    // symbol: ??0ShowCreditsPacket@@QEAA@XZ
    MCAPI ShowCreditsPacket();

    // NOLINTEND
};
