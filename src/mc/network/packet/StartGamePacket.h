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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@StartGamePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@StartGamePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@StartGamePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@StartGamePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1StartGamePacket@@UEAA@XZ
    MCVAPI ~StartGamePacket();

    // symbol: ??0StartGamePacket@@QEAA@XZ
    MCAPI StartGamePacket();

    // symbol:
    // ??0StartGamePacket@@QEAA@VItemRegistryRef@@AEBVLevelSettings@@UActorUniqueID@@VActorRuntimeID@@W4GameType@@_NAEBVVec3@@AEBVVec2@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@8AEBVContentIdentity@@8AEBVBlockDefinitionGroup@@5VCompoundTag@@AEBUPlayerMovementSettings@@8AEBVUUID@mce@@_KH_K@Z
    MCAPI StartGamePacket(
        class ItemRegistryRef,
        class LevelSettings const&,
        struct ActorUniqueID,
        class ActorRuntimeID,
        ::GameType,
        bool,
        class Vec3 const&,
        class Vec2 const&,
        std::string const&,
        std::string const&,
        class ContentIdentity const&,
        std::string const&,
        class BlockDefinitionGroup const&,
        bool,
        class CompoundTag,
        struct PlayerMovementSettings const&,
        std::string const&,
        class mce::UUID const&,
        uint64,
        int,
        uint64
    );

    // NOLINTEND
};
