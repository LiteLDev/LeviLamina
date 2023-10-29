#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EduUriResourcePacket : public ::Packet {
public:
    EduSharedUriResource mEduSharedUriResource; // this+0x30

    // prevent constructor by default
    EduUriResourcePacket& operator=(EduUriResourcePacket const&);
    EduUriResourcePacket(EduUriResourcePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@EduUriResourcePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@EduUriResourcePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@EduUriResourcePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@EduUriResourcePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1EduUriResourcePacket@@UEAA@XZ
    MCVAPI ~EduUriResourcePacket();

    // symbol: ??0EduUriResourcePacket@@QEAA@XZ
    MCAPI EduUriResourcePacket();

    // symbol: ??0EduUriResourcePacket@@QEAA@AEBUEduSharedUriResource@@@Z
    MCAPI explicit EduUriResourcePacket(struct EduSharedUriResource const&);

    // NOLINTEND
};
