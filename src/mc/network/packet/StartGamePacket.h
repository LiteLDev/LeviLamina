#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class StartGamePacket : public ::Packet {
public:
    // prevent constructor by default
    StartGamePacket& operator=(StartGamePacket const&);
    StartGamePacket(StartGamePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StartGamePacket@@UEAA@XZ
    virtual ~StartGamePacket();

    // vIndex: 1, symbol: ?getId@StartGamePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@StartGamePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@StartGamePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@StartGamePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0StartGamePacket@@QEAA@XZ
    MCAPI StartGamePacket();

    // symbol:
    // ??0StartGamePacket@@QEAA@VItemRegistryRef@@AEBVLevelSettings@@UActorUniqueID@@VActorRuntimeID@@W4GameType@@_NAEBVVec3@@AEBVVec2@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@8AEBVContentIdentity@@8AEBVBlockDefinitionGroup@@5VCompoundTag@@AEBUPlayerMovementSettings@@8AEBVUUID@mce@@_KH_K@Z
    MCAPI StartGamePacket(
        class ItemRegistryRef,
        class LevelSettings const& settings,
        struct ActorUniqueID       entityId,
        class ActorRuntimeID       runtimeId,
        ::GameType                 entityGameType,
        bool,
        class Vec3 const&                 pos,
        class Vec2 const&                 rot,
        std::string const&                levelId,
        std::string const&                levelName,
        class ContentIdentity const&      premiumTemplateContentIdentity,
        std::string const&                multiplayerCorrelationId,
        class BlockDefinitionGroup const& blockDefinitionGroup,
        bool                              isTrial,
        class CompoundTag,
        struct PlayerMovementSettings const&,
        std::string const&,
        class mce::UUID const& worldTemplateId,
        uint64                 levelCurrentTime,
        int                    enchantmentSeed,
        uint64
    );

    // NOLINTEND
};
