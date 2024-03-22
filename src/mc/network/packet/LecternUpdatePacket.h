#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LecternUpdatePacket : public ::Packet {
public:
    int                  mPage;           // this+0x30
    int                  mTotalPages;     // this+0x34
    bool                 mShouldDropBook; // this+0x38
    NetworkBlockPosition mPos;            // this+0x3C

    // prevent constructor by default
    LecternUpdatePacket& operator=(LecternUpdatePacket const&);
    LecternUpdatePacket(LecternUpdatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LecternUpdatePacket@@UEAA@XZ
    virtual ~LecternUpdatePacket() = default;

    // vIndex: 1, symbol: ?getId@LecternUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LecternUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@LecternUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@LecternUpdatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0LecternUpdatePacket@@QEAA@XZ
    MCAPI LecternUpdatePacket();

    // NOLINTEND
};
