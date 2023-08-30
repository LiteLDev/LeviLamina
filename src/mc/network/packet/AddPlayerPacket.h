#pragma once

#include "ActorLink.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/enums/BuildPlatform.h"
#include "mc/enums/GameType.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/actor/state/PropertySyncData.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/level/LayeredAbilities.h"


// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddPlayerPacket : public ::AddActorBasePacket {

public:
    std::vector<ActorLink>                mLinks;
    std::string                            mName;
    mce::UUID                              mUuid;
    ActorUniqueID                          mEntityId;
    ActorRuntimeID                         mRuntimeId;
    std::string                            mPlatformOnlineId;
    Vec3                                   mPos;
    Vec3                                   mVelocity;
    Vec2                                   mRot;
    float                                  mYHeadRot;
    std::vector<std::unique_ptr<DataItem>> mUnpack;
    LayeredAbilities                       mAbilities;
    std::string                            mDeviceId;
    BuildPlatform                          mBuildPlatform;
    GameType                               mPlayerGameType;
    NetworkItemStackDescriptor             mCarriedItem;
    const SynchedActorDataEntityWrapper*   mEntityData;
    PropertySyncData                      mSynchedProperties;

    // prevent constructor by default
    AddPlayerPacket& operator=(AddPlayerPacket const&) = delete;
    AddPlayerPacket(AddPlayerPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AddPlayerPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AddPlayerPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AddPlayerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 4
     * @symbol
     * ?read\@AvailableActorIdentifiersPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 5
     * @symbol ?disallowBatching\@Packet\@\@UEBA_NXZ
     */
    virtual bool disallowBatching() const;
    /**
     * @vftbl 6
     * @symbol ?isValid\@Packet\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AddPlayerPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDPLAYERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddPlayerPacket();
#endif
    /**
     * @symbol ??0AddPlayerPacket\@\@QEAA\@AEAVPlayer\@\@\@Z
     */
    MCAPI AddPlayerPacket(class Player&);
    /**
     * @symbol ??0AddPlayerPacket\@\@QEAA\@XZ
     */
    MCAPI AddPlayerPacket();
    // NOLINTEND
};
