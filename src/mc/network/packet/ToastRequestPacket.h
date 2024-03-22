#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ToastRequestPacket : public ::Packet {
public:
    std::string mTitle;   // this+0x30
    std::string mContent; // this+0x50

    // prevent constructor by default
    ToastRequestPacket& operator=(ToastRequestPacket const&);
    ToastRequestPacket(ToastRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ToastRequestPacket@@UEAA@XZ
    virtual ~ToastRequestPacket();

    // vIndex: 1, symbol: ?getId@ToastRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ToastRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ToastRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ToastRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ToastRequestPacket@@QEAA@XZ
    MCAPI ToastRequestPacket();

    // symbol: ??0ToastRequestPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI ToastRequestPacket(std::string const& title, std::string const& content);

    // NOLINTEND
};
