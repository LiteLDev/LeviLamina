/**
 * @file  PlayerActionPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
// Refer to https://github.com/LiteLDev/BEProtocolGolang/blob/master/minecraft/protocol/player.go
enum class PlayerActionType {
    StartBreak,
    AbortBreak,
    StopBreak,
    GetUpdatedBlock,
    DropItem,
    StartSleeping,
    StopSleeping,
    Respawn,
    Jump,
    StartSprint,
    StopSprint,
    StartSneak,
    StopSneak,
    CreativePlayerDestroyBlock,
    DimensionChangeDone,
    StartGlide,
    StopGlide,
    BuildDenied,
    CrackBreak,
    ChangeSkin,
    SetEnchantmentSeed,
    StartSwimming,
    StopSwimming,
    StartSpinAttack,
    StopSpinAttack,
    StartBuildingBlock,
    PredictDestroyBlock,
    ContinueDestroyBlock,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerActionPacket.
 *
 */
class PlayerActionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    BlockPos position;           // 48
    BlockPos position2;          // 60
    FaceID blockFace;            // 72
    PlayerActionType actionType; // 76
    ActorRuntimeID runtimeID;    // 80

    inline std::string toDebugString() {
        return fmt::format("{}: position: ({}), blockFace: {}, actionType: {}, runtimeID: {}",
            __super::toDebugString(),
            position.toString(), (int)blockFace, (int)actionType, runtimeID.id);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERACTIONPACKET
public:
    class PlayerActionPacket& operator=(class PlayerActionPacket const &) = delete;
    PlayerActionPacket(class PlayerActionPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerActionPacket();
    /**
     * @hash   839209823
     * @vftbl  1
     * @symbol  ?getId\@PlayerActionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   968376844
     * @vftbl  2
     * @symbol  ?getName\@PlayerActionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1516176869
     * @vftbl  3
     * @symbol  ?write\@PlayerActionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -562038709
     * @vftbl  6
     * @symbol  ?_read\@PlayerActionPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1805335531
     * @symbol  ??0PlayerActionPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerActionPacket();
    /**
     * @hash   1003896609
     * @symbol  ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@VActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class ActorRuntimeID);
    /**
     * @hash   1198393568
     * @symbol  ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@VActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const &, class ActorRuntimeID);
    /**
     * @hash   -1932732553
     * @symbol  ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@HVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const &, int, class ActorRuntimeID);
    /**
     * @hash   -1109909850
     * @symbol  ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@EVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const &, unsigned char, class ActorRuntimeID);
    /**
     * @hash   -781419766
     * @symbol  ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@1HVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const &, class BlockPos const &, int, class ActorRuntimeID);

};