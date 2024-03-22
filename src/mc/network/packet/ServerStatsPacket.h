#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ServerStatsPacket : public ::Packet {
public:
    float mServerTime;  // this+0x30
    float mNetworkTime; // this+0x34

    // prevent constructor by default
    ServerStatsPacket& operator=(ServerStatsPacket const&);
    ServerStatsPacket(ServerStatsPacket const&);
    ServerStatsPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerStatsPacket@@UEAA@XZ
    virtual ~ServerStatsPacket() = default;

    // vIndex: 1, symbol: ?getId@ServerStatsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ServerStatsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ServerStatsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ServerStatsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
