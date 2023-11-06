#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SoftEnumUpdateType.h"
#include "mc/network/packet/Packet.h"

class UpdateSoftEnumPacket : public ::Packet {
public:
    // prevent constructor by default
    UpdateSoftEnumPacket& operator=(UpdateSoftEnumPacket const&);
    UpdateSoftEnumPacket(UpdateSoftEnumPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UpdateSoftEnumPacket@@UEAA@XZ
    virtual ~UpdateSoftEnumPacket();

    // vIndex: 1, symbol: ?getId@UpdateSoftEnumPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateSoftEnumPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdateSoftEnumPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@UpdateSoftEnumPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0UpdateSoftEnumPacket@@QEAA@XZ
    MCAPI UpdateSoftEnumPacket();

    // symbol:
    // ??0UpdateSoftEnumPacket@@QEAA@W4SoftEnumUpdateType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI UpdateSoftEnumPacket(::SoftEnumUpdateType, std::string const&, std::vector<std::string> const&);

    // NOLINTEND
};
