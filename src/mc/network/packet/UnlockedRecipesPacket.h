#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UnlockedRecipesPacket : public ::Packet {
public:
    // UnlockedRecipesPacket inner types define
    enum class PacketType {};

public:
    // prevent constructor by default
    UnlockedRecipesPacket& operator=(UnlockedRecipesPacket const&);
    UnlockedRecipesPacket(UnlockedRecipesPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@UnlockedRecipesPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UnlockedRecipesPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UnlockedRecipesPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@UnlockedRecipesPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1UnlockedRecipesPacket@@UEAA@XZ
    MCVAPI ~UnlockedRecipesPacket();

    // symbol: ??0UnlockedRecipesPacket@@QEAA@XZ
    MCAPI UnlockedRecipesPacket();

    // symbol:
    // ??0UnlockedRecipesPacket@@QEAA@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@W4PacketType@0@@Z
    MCAPI UnlockedRecipesPacket(std::vector<std::string>, ::UnlockedRecipesPacket::PacketType);

    // NOLINTEND
};
