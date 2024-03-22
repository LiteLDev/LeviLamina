#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec2.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerInputPacket : public ::Packet {
public:
    Vec2 mMov;        // this+0x30
    bool mIsJumping;  // this+0x38
    bool mIsSneaking; // this+0x39

    // prevent constructor by default
    PlayerInputPacket& operator=(PlayerInputPacket const&);
    PlayerInputPacket(PlayerInputPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayerInputPacket@@UEAA@XZ
    virtual ~PlayerInputPacket() = default;

    // vIndex: 1, symbol: ?getId@PlayerInputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerInputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerInputPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PlayerInputPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlayerInputPacket@@QEAA@XZ
    MCAPI PlayerInputPacket();

    // NOLINTEND
};
