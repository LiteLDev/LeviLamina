#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UnlockedRecipesPacket : public ::Packet {
public:
    // UnlockedRecipesPacket inner types define
    enum class PacketType : int {
        Empty                    = 0x0,
        InitiallyUnlockedRecipes = 0x1,
        NewlyUnlockedRecipes     = 0x2,
        RemoveUnlockedRecipes    = 0x3,
        RemoveAllUnlockedRecipes = 0x4,
    };

public:
    PacketType               mPacketType;      // this+0x30
    std::vector<std::string> mUnlockedRecipes; // this+0x38

    // prevent constructor by default
    UnlockedRecipesPacket& operator=(UnlockedRecipesPacket const&);
    UnlockedRecipesPacket(UnlockedRecipesPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UnlockedRecipesPacket@@UEAA@XZ
    virtual ~UnlockedRecipesPacket();

    // vIndex: 1, symbol: ?getId@UnlockedRecipesPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UnlockedRecipesPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@UnlockedRecipesPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@UnlockedRecipesPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UnlockedRecipesPacket@@QEAA@XZ
    MCAPI UnlockedRecipesPacket();

    // symbol:
    // ??0UnlockedRecipesPacket@@QEAA@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@W4PacketType@0@@Z
    MCAPI UnlockedRecipesPacket(std::vector<std::string>, ::UnlockedRecipesPacket::PacketType type);

    // NOLINTEND
};
