#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EmotePacket : public ::Packet {
public:
    ActorRuntimeID mRuntimeId;  // this+0x30
    std::string    mPieceId;    // this+0x38
    std::string    mXuid;       // this+0x58
    std::string    mPlatformId; // this+0x78
    uchar          mFlags;      // this+0x98

    // prevent constructor by default
    EmotePacket& operator=(EmotePacket const&);
    EmotePacket(EmotePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EmotePacket@@UEAA@XZ
    virtual ~EmotePacket();

    // vIndex: 1, symbol: ?getId@EmotePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@EmotePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@EmotePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol: ?_read@EmotePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

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
