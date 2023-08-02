#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/level/Tick.h"
#include "mc/events/MinecraftEventing.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/network/packet/Packet.h"

class MovePlayerPacket : public ::Packet {

public:
    // prevent constructor by default
    MovePlayerPacket& operator=(MovePlayerPacket const&) = delete;
    MovePlayerPacket(MovePlayerPacket const&)            = delete;

    ActorRuntimeID                            mPlayerID;         // this+0x30
    Vec3                                      mPos;              // this+0x38
    Vec2                                      mRot;              // this+0x44
    float                                     mYHeadRot;         // this+0x4C
    PlayerPositionModeComponent::PositionMode mResetPosition;    // this+0x50
    bool                                      mOnGround;         // this+0x51
    ActorRuntimeID                            mRidingID;         // this+0x58
    MinecraftEventing::TeleportationCause     mCause;            // this+0x60
    int                                       mSourceEntityType; // this+0x64 // maybe enum class ActorType ?
    Tick                                      mTick;             // this+0x68

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MovePlayerPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MovePlayerPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MovePlayerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 6
     * @symbol ?isValid\@MovePlayerPacket\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MovePlayerPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEPLAYERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MovePlayerPacket();
#endif
    /**
     * @symbol ??0MovePlayerPacket\@\@QEAA\@AEBVPlayer\@\@W4PositionMode\@PlayerPositionModeComponent\@\@HH\@Z
     */
    MCAPI MovePlayerPacket(class Player const&, enum class PlayerPositionModeComponent::PositionMode, int, int);
    /**
     * @symbol ??0MovePlayerPacket\@\@QEAA\@XZ
     */
    MCAPI MovePlayerPacket();
    /**
     * @symbol ??0MovePlayerPacket\@\@QEAA\@AEBVPlayer\@\@AEBVVec3\@\@\@Z
     */
    MCAPI MovePlayerPacket(class Player const&, class Vec3 const&);
    // NOLINTEND
};
