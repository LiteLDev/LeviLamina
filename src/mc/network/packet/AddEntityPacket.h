#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/EntityServerPacket.h"

class AddEntityPacket : public ::EntityServerPacket {
public:
    // prevent constructor by default
    AddEntityPacket& operator=(AddEntityPacket const&);
    AddEntityPacket(AddEntityPacket const&);
    AddEntityPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AddEntityPacket@@UEAA@XZ
    virtual ~AddEntityPacket();

    // vIndex: 1, symbol: ?getId@AddEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AddEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // symbol: ??0AddEntityPacket@@QEAA@AEBVEntityContext@@@Z
    MCAPI explicit AddEntityPacket(class EntityContext const& entity);

    // NOLINTEND
};
