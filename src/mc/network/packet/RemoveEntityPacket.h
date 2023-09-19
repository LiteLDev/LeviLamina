#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/EntityServerPacket.h"

class RemoveEntityPacket : public ::EntityServerPacket {
public:
    // prevent constructor by default
    RemoveEntityPacket& operator=(RemoveEntityPacket const&);
    RemoveEntityPacket(RemoveEntityPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@RemoveEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RemoveEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // symbol: ??1RemoveEntityPacket@@UEAA@XZ
    MCVAPI ~RemoveEntityPacket();

    // symbol: ??0RemoveEntityPacket@@QEAA@XZ
    MCAPI RemoveEntityPacket();

    // NOLINTEND
};
