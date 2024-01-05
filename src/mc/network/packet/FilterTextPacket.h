#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class FilterTextPacket : public ::Packet {
public:
    // prevent constructor by default
    FilterTextPacket& operator=(FilterTextPacket const&);
    FilterTextPacket(FilterTextPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTextPacket@@UEAA@XZ
    virtual ~FilterTextPacket();

    // vIndex: 1, symbol: ?getId@FilterTextPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@FilterTextPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@FilterTextPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@FilterTextPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0FilterTextPacket@@QEAA@XZ
    MCAPI FilterTextPacket();

    // symbol: ??0FilterTextPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI FilterTextPacket(std::string const& text, bool);

    // NOLINTEND
};
