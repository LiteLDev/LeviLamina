#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ConnectionRequest.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LoginPacket : public ::Packet {
public:
    int                                mClientNetworkVersion; // this+0x30
    std::unique_ptr<ConnectionRequest> mConnectionRequest;    // this+0x38

    // prevent constructor by default
    LoginPacket& operator=(LoginPacket const&);
    LoginPacket(LoginPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LoginPacket@@UEAA@XZ
    virtual ~LoginPacket() = default;

    // vIndex: 1, symbol: ?getId@LoginPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@LoginPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LoginPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 5, symbol: ?disallowBatching@LoginPacket@@UEBA_NXZ
    virtual bool disallowBatching() const;

    // vIndex: 7, symbol: ?_read@LoginPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0LoginPacket@@QEAA@XZ
    MCAPI LoginPacket();

    // NOLINTEND
};
