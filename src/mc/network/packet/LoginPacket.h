#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ConnectionRequest.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LoginPacket : public ::Packet {
public:
    int32_t                                mClientNetworkVersion; // this+0x30
    std::unique_ptr<ConnectionRequest> mConnectionRequest;    // this+0x38

    // prevent constructor by default
    LoginPacket& operator=(LoginPacket const&) = delete;
    LoginPacket(LoginPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@LoginPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@LoginPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LoginPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 5, symbol: ?disallowBatching@LoginPacket@@UEBA_NXZ
    virtual bool disallowBatching() const;

    // vIndex: 7, symbol: ?_read@LoginPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0LoginPacket@@QEAA@XZ
    MCAPI LoginPacket();

    // NOLINTEND
};
