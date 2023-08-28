#pragma once

#include "ActorLink.h"
#include "SyncedAttribute.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/actor/state/PropertySyncData.h"
#include "mc/world/attribute/AttributeInstanceHandle.h"


// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddActorPacket : public ::AddActorBasePacket {

public:
    std::vector<ActorLink> mLinks;         // this+0x30
    Vec3                   mPos;           // this+0x48
    Vec3                   mVelocity;      // this+0x54
    Vec2                   mRot;           // this+0x60
    float                  mYHeadRotation; // this+0x68
    float                  mYBodyRotation; // this+0x6C

    ActorUniqueID                          mEntityId;          // this+0x70
    ActorRuntimeID                         mRuntimeId;         // this+0x78
    SynchedActorDataEntityWrapper*         mEntityData;        // this+0x80
    std::vector<std::unique_ptr<DataItem>> mData;              // this+0x88
    ActorDefinitionIdentifier              mType;              // this+0xA0
    PropertySyncData                       mSynchedProperties; // this+0x150
    std::vector<AttributeInstanceHandle>   mAttributeHandles;  // this+0x180
    std::vector<SyncedAttribute>           mAttributes;        // this+0x198

    // prevent constructor by default
    AddActorPacket& operator=(AddActorPacket const&) = delete;
    AddActorPacket(AddActorPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AddActorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AddActorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AddActorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
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
     * ?_read\@AddActorPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDACTORPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddActorPacket();
#endif
    /**
     * @symbol ??0AddActorPacket\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI AddActorPacket(class Actor&);
    /**
     * @symbol ??0AddActorPacket\@\@QEAA\@XZ
     */
    MCAPI AddActorPacket();
    // NOLINTEND
};
