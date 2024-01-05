#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddActorPacket : public ::AddActorBasePacket {
public:
    // prevent constructor by default
    AddActorPacket& operator=(AddActorPacket const&);
    AddActorPacket(AddActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AddActorPacket@@UEAA@XZ
    virtual ~AddActorPacket();

    // vIndex: 1, symbol: ?getId@AddActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AddActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AddActorPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@AddActorPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AddActorPacket@@QEAA@XZ
    MCAPI AddActorPacket();

    // symbol: ??0AddActorPacket@@QEAA@AEAVActor@@@Z
    MCAPI explicit AddActorPacket(class Actor& e);

    // NOLINTEND
};
