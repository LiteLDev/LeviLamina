#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/packet/ItemData.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SyncedPlayerMovementSettings.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/LevelSettings.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/GameType.h"

class StartGamePacket : public ::Packet {
public:
    LevelSettings                mSettings;
    ActorUniqueID                mEntityId;
    ActorRuntimeID               mRuntimeId;
    GameType                     mEntityGameType;
    Vec3                         mPos;
    Vec2                         mRot;
    std::string                  mLevelId;
    std::string                  mLevelName;
    ContentIdentity              mTemplateContentIdentity;
    mce::UUID                    mWorldTemplateId;
    bool                         mIsTrial;
    SyncedPlayerMovementSettings mMovementSettings;
    uint64                       mLevelCurrentTime;
    int                          mEnchantmentSeed;
    std::string                  mMultiplayerCorrelationId;
    std::vector<ItemData>        mItemData;
    bool                         mEnableItemStackNetManager;
    std::string                  mServerVersion;
    CompoundTag                  mPlayerPropertyData;
    uint64                       mServerBlockTypeRegistryChecksum;
    bool                         mServerEnabledClientSideGeneration;
    bool                         mBlockNetworkIdsAreHashes;
    bool                         mHardcore;

    std::vector<std::pair<std::string, CompoundTag>> mBlockProperties;

    // prevent constructor by default
    StartGamePacket& operator=(StartGamePacket const&);
    StartGamePacket(StartGamePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StartGamePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI StartGamePacket();

    MCAPI StartGamePacket(
        class ItemRegistryRef                itemRegistry,
        class LevelSettings const&           settings,
        struct ActorUniqueID                 entityId,
        class ActorRuntimeID                 runtimeId,
        ::GameType                           entityGameType,
        bool                                 enableItemStackNetManager,
        class Vec3 const&                    pos,
        class Vec2 const&                    rot,
        std::string const&                   levelId,
        std::string const&                   levelName,
        class ContentIdentity const&         premiumTemplateContentIdentity,
        std::string const&                   multiplayerCorrelationId,
        class BlockDefinitionGroup const&    blockDefinitionGroup,
        bool                                 isTrial,
        class CompoundTag                    playerPropertyData,
        struct PlayerMovementSettings const& movementSettings,
        std::string const&                   serverVersion,
        class mce::UUID const&               worldTemplateId,
        uint64                               levelCurrentTime,
        int                                  enchantmentSeed,
        uint64                               blockTypeRegistryChecksum
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ItemRegistryRef                itemRegistry,
        class LevelSettings const&           settings,
        struct ActorUniqueID                 entityId,
        class ActorRuntimeID                 runtimeId,
        ::GameType                           entityGameType,
        bool                                 enableItemStackNetManager,
        class Vec3 const&                    pos,
        class Vec2 const&                    rot,
        std::string const&                   levelId,
        std::string const&                   levelName,
        class ContentIdentity const&         premiumTemplateContentIdentity,
        std::string const&                   multiplayerCorrelationId,
        class BlockDefinitionGroup const&    blockDefinitionGroup,
        bool                                 isTrial,
        class CompoundTag                    playerPropertyData,
        struct PlayerMovementSettings const& movementSettings,
        std::string const&                   serverVersion,
        class mce::UUID const&               worldTemplateId,
        uint64                               levelCurrentTime,
        int                                  enchantmentSeed,
        uint64                               blockTypeRegistryChecksum
    );

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
