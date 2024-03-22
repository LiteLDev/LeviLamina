#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PassengerJumpPacket : public ::Packet {
public:
    int mJumpScale; // this+0x30

    // prevent constructor by default
    PassengerJumpPacket& operator=(PassengerJumpPacket const&);
    PassengerJumpPacket(PassengerJumpPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PassengerJumpPacket@@UEAA@XZ
    virtual ~PassengerJumpPacket() = default;

    // vIndex: 1, symbol: ?getId@PassengerJumpPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PassengerJumpPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PassengerJumpPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PassengerJumpPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PassengerJumpPacket@@QEAA@XZ
    MCAPI PassengerJumpPacket();

    // symbol: ??0PassengerJumpPacket@@QEAA@H@Z
    MCAPI explicit PassengerJumpPacket(int jumpScale);

    // NOLINTEND
};
