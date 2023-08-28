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
#include "mc/network/packet/Packet.h"


class StartGamePacket : public ::Packet {

public:
    LevelSettings                                    mSettings;                          // this+0x30
    ActorUniqueID                                    mEntityId;                          // this+0x3D0
    ActorRuntimeID                                   mRuntimeId;                         // this+0x3D8
    GameType                                         mEntityGameType;                    // this+0x3E0
    Vec3                                             mPos;                               // this+0x3E4
    Vec2                                             mRot;                               // this+0x3F0
    std::string                                      mLevelId;                           // this+0x3F8
    std::string                                      mLevelName;                         // this+0x418
    ContentIdentity                                  mTemplateContentIdentity;           // this+0x438
    mce::UUID                                        mWorldTemplateId;                   // this+0x450
    bool                                             mIsTrial;                           // this+0x460
    SyncedPlayerMovementSettings                     mMovementSettings;                  // this+0x464
    unsigned long long                               mLevelCurrentTime;                  // this+0x470
    int                                              mEnchantmentSeed;                   // this+0x478
    std::string                                      mMultiplayerCorrelationId;          // this+0x480
    std::vector<ItemData>                            mItemData;                          // this+0x4A0
    bool                                             mEnableItemStackNetManager;         // this+0x4B8
    std::string                                      mServerVersion;                     // this+0x4C0
    CompoundTag                                      mPlayerPropertyData;                // this+0x4E0
    unsigned long long                               mServerBlockTypeRegistryChecksum;   // this+0x4F8
    bool                                             mServerEnabledClientSideGeneration; // this+0x500
    std::vector<std::pair<std::string, CompoundTag>> mBlockProperties;                   // this+0x508


    // prevent constructor by default
    StartGamePacket& operator=(StartGamePacket const&) = delete;
    StartGamePacket(StartGamePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@StartGamePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@StartGamePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@StartGamePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@StartGamePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STARTGAMEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StartGamePacket();
#endif
    /**
     * @symbol
     * ??0StartGamePacket\@\@QEAA\@VItemRegistryRef\@\@AEBVLevelSettings\@\@UActorUniqueID\@\@VActorRuntimeID\@\@W4GameType\@\@_NAEBVVec3\@\@AEBVVec2\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@8AEBVContentIdentity\@\@8AEBVBlockDefinitionGroup\@\@5VCompoundTag\@\@AEBUPlayerMovementSettings\@\@8AEBVUUID\@mce\@\@_KH_K\@Z
     */
    MCAPI StartGamePacket(
        class ItemRegistryRef,
        class LevelSettings const&,
        struct ActorUniqueID,
        class ActorRuntimeID,
        enum class GameType,
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
        uint64_t,
        int,
        uint64_t
    );
    /**
     * @symbol ??0StartGamePacket\@\@QEAA\@XZ
     */
    MCAPI StartGamePacket();
    // NOLINTEND
};
