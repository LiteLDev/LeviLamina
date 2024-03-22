#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CodeBuilderPacket : public ::Packet {
public:
    std::string mURL;                   // this+0x30
    bool        mShouldOpenCodeBuilder; // this+0x50

    // prevent constructor by default
    CodeBuilderPacket& operator=(CodeBuilderPacket const&);
    CodeBuilderPacket(CodeBuilderPacket const&);
    CodeBuilderPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CodeBuilderPacket@@UEAA@XZ
    virtual ~CodeBuilderPacket();

    // vIndex: 1, symbol: ?getId@CodeBuilderPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CodeBuilderPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CodeBuilderPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@CodeBuilderPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
