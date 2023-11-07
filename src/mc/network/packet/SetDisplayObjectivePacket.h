#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/ObjectiveSortOrder.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/network/packet/Packet.h"

class SetDisplayObjectivePacket : public ::Packet {
public:
    std::string        mDisplaySlotName;      // this+0x30
    std::string        mObjectiveName;        // this+0x50
    std::string        mObjectiveDisplayName; // this+0x70
    std::string        mCriteriaName;         // this+0x90
    ObjectiveSortOrder mSortOrder;            // this+0xB0

    // prevent constructor by default
    SetDisplayObjectivePacket& operator=(SetDisplayObjectivePacket const&);
    SetDisplayObjectivePacket(SetDisplayObjectivePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetDisplayObjectivePacket@@UEAA@XZ
    virtual ~SetDisplayObjectivePacket();

    // vIndex: 1, symbol: ?getId@SetDisplayObjectivePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetDisplayObjectivePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetDisplayObjectivePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SetDisplayObjectivePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0SetDisplayObjectivePacket@@QEAA@XZ
    MCAPI SetDisplayObjectivePacket();

    // symbol:
    // ??0SetDisplayObjectivePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000W4ObjectiveSortOrder@@@Z
    MCAPI SetDisplayObjectivePacket(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::ObjectiveSortOrder
    );

    // NOLINTEND
};
