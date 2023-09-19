#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EmotePacket : public ::Packet {
public:
    // prevent constructor by default
    EmotePacket& operator=(EmotePacket const&);
    EmotePacket(EmotePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@EmotePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@EmotePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@EmotePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol: ?_read@EmotePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1EmotePacket@@UEAA@XZ
    MCVAPI ~EmotePacket();

    // symbol: ??0EmotePacket@@QEAA@XZ
    MCAPI EmotePacket();

    // symbol: ?isServerSide@EmotePacket@@QEBA_NXZ
    MCAPI bool isServerSide() const;

    // symbol: ?setEmoteChatMute@EmotePacket@@QEAAXXZ
    MCAPI void setEmoteChatMute();

    // symbol: ?setServerSide@EmotePacket@@QEAAXXZ
    MCAPI void setServerSide();

    // NOLINTEND
};
