#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EducationSettingsPacket : public ::Packet {
public:
    // prevent constructor by default
    EducationSettingsPacket& operator=(EducationSettingsPacket const&);
    EducationSettingsPacket(EducationSettingsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@EducationSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@EducationSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@EducationSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@EducationSettingsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1EducationSettingsPacket@@UEAA@XZ
    MCVAPI ~EducationSettingsPacket();

    // symbol: ??0EducationSettingsPacket@@QEAA@XZ
    MCAPI EducationSettingsPacket();

    // symbol: ??0EducationSettingsPacket@@QEAA@UEducationLevelSettings@@@Z
    MCAPI explicit EducationSettingsPacket(struct EducationLevelSettings);

    // NOLINTEND
};
