#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/world/actor/player/SerializedSkin.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerSkinPacket : public ::Packet {
public:
    mce::UUID      mUUID;                 // this+0x30
    SerializedSkin mSkin;                 // this+0x40
    std::string    mLocalizedNewSkinName; // this+0x2A8
    std::string    mLocalizedOldSkinName; // this+0x2C8

    // prevent constructor by default
    PlayerSkinPacket& operator=(PlayerSkinPacket const&);
    PlayerSkinPacket(PlayerSkinPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerSkinPacket@@UEAA@XZ
    virtual ~PlayerSkinPacket();

    // vIndex: 1, symbol: ?getId@PlayerSkinPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerSkinPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerSkinPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?read@PlayerSkinPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8, symbol:
    // ?_read@PlayerSkinPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlayerSkinPacket@@QEAA@XZ
    MCAPI PlayerSkinPacket();

    // NOLINTEND
};
