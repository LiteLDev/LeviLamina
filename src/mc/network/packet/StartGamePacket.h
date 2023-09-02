#pragma once

#include "ItemData.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/enums/GameType.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/player/SyncedPlayerMovementSettings.h"
#include "mc/world/level/LevelSettings.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class StartGamePacket : public ::Packet {
public:
    LevelSettings                                    mSettings;
    ActorUniqueID                                    mEntityId;
    ActorRuntimeID                                   mRuntimeId;
    GameType                                         mEntityGameType;
    Vec3                                             mPos;
    Vec2                                             mRot;
    std::string                                      mLevelId;
    std::string                                      mLevelName;
    ContentIdentity                                  mTemplateContentIdentity;
    mce::UUID                                        mWorldTemplateId;
    bool                                             mIsTrial;
    SyncedPlayerMovementSettings                     mMovementSettings;
    uint64_t                                         mLevelCurrentTime;
    int32_t                                              mEnchantmentSeed;
    std::string                                      mMultiplayerCorrelationId;
    std::vector<ItemData>                            mItemData;
    bool                                             mEnableItemStackNetManager;
    std::string                                      mServerVersion;
    CompoundTag                                      mPlayerPropertyData;
    uint64_t                                         mServerBlockTypeRegistryChecksum;
    bool                                             mServerEnabledClientSideGeneration;
    bool                                             mBlockNetworkIdsAreHashes;
    std::vector<std::pair<std::string, CompoundTag>> mBlockProperties;


    // prevent constructor by default
    StartGamePacket& operator=(StartGamePacket const&) = delete;
    StartGamePacket(StartGamePacket const&)            = delete;

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
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1StartGamePacket@@UEAA@XZ
    MCVAPI ~StartGamePacket();

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

    // symbol: ??0StartGamePacket@@QEAA@XZ
    MCAPI StartGamePacket();

    // NOLINTEND
};
