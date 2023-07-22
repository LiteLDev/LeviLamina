/**
 * @file  MovePlayerPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Player.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class TeleportationCause {
    UNKNOWN,
    PROJECTILE,
    CHORUS_FRUIT,
    COMMAND,
    BEHAVIOR,
};
#undef BEFORE_EXTRA

/**
 * @brief MC class MovePlayerPacket.
 *
 */
class MovePlayerPacket : public Packet {

#define AFTER_EXTRA
    // Add Member There
public:
    ActorRuntimeID runtimeId;
    Vec3 position;
    float pitch;
    float yaw;
    float headYaw;
    Player::PositionMode mode;
    bool onGround;
    ActorRuntimeID ridingRuntimeId;
    TeleportationCause teleportationCause;
    int entityType;
    long tick;

    inline std::string toDebugString() {
        return fmt::format("{}: pos: {}, mode: {}, cause: {}",
                           __super::toDebugString(), position.toString(), (int)mode, int(teleportationCause));
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEPLAYERPACKET
public:
    class MovePlayerPacket& operator=(class MovePlayerPacket const &) = delete;
    MovePlayerPacket(class MovePlayerPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MovePlayerPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@MovePlayerPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@MovePlayerPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@MovePlayerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@MovePlayerPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0MovePlayerPacket\@\@QEAA\@XZ
     */
    MCAPI MovePlayerPacket();
    /**
     * @symbol  ??0MovePlayerPacket\@\@QEAA\@AEBVPlayer\@\@W4PositionMode\@1\@HH\@Z
     */
    MCAPI MovePlayerPacket(class Player const &, enum class Player::PositionMode, int, int);
    /**
     * @symbol  ??0MovePlayerPacket\@\@QEAA\@AEBVPlayer\@\@AEBVVec3\@\@\@Z
     */
    MCAPI MovePlayerPacket(class Player const &, class Vec3 const &);

};