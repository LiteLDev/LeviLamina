/**
 * @file  PlayerActionPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerActionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@PlayerActionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerActionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@PlayerActionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERACTIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerActionPacket();
#endif
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@1HVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const &, class BlockPos const &, int, class ActorRuntimeID);
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@VActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const &, class ActorRuntimeID);
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerActionPacket();
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@VActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class ActorRuntimeID);
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@EVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const &, unsigned char, class ActorRuntimeID);
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@HVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const &, int, class ActorRuntimeID);
    /**
     * @symbol ?getIsFromServerPlayerMovementSystem\@PlayerActionPacket\@\@QEBA_NXZ
     */
    MCAPI bool getIsFromServerPlayerMovementSystem() const;
    /**
     * @symbol ?setFromServerPlayerMovementSystem\@PlayerActionPacket\@\@QEAAX_N\@Z
     */
    MCAPI void setFromServerPlayerMovementSystem(bool);

};
