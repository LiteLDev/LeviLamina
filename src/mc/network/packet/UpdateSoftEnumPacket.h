#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/SoftEnumUpdateType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SoftEnumUpdateType.h"
#include "mc/network/packet/Packet.h"

class UpdateSoftEnumPacket : public ::Packet {
public:
    std::string              mEnumName; // this+0x30
    std::vector<std::string> mValues;   // this+0x50
    SoftEnumUpdateType       mType;     // this+0x68

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

    // vIndex: 4, symbol: ?write@UpdateSoftEnumPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@UpdateSoftEnumPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdateSoftEnumPacket@@QEAA@XZ
    MCAPI UpdateSoftEnumPacket();

    // symbol:
    // ??0UpdateSoftEnumPacket@@QEAA@W4SoftEnumUpdateType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI UpdateSoftEnumPacket(
        ::SoftEnumUpdateType            type,
        std::string const&              enumName,
        std::vector<std::string> const& values
    );

    // NOLINTEND
};
