#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class FilterTextPacket : public ::Packet {
public:
    std::string mText;       // this+0x30
    bool        mFromServer; // this+0x50

    // prevent constructor by default
    FilterTextPacket& operator=(FilterTextPacket const&);
    FilterTextPacket(FilterTextPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@FilterTextPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@FilterTextPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@FilterTextPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@FilterTextPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1FilterTextPacket@@UEAA@XZ
    MCVAPI ~FilterTextPacket();

    // symbol: ??0FilterTextPacket@@QEAA@XZ
    MCAPI FilterTextPacket();

    // symbol: ??0FilterTextPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI FilterTextPacket(std::string const&, bool);

    // NOLINTEND
};
