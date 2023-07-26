#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PlayerActionPacket : public ::Packet {

public:
    // prevent constructor by default
    PlayerActionPacket& operator=(PlayerActionPacket const&) = delete;
    PlayerActionPacket(PlayerActionPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerActionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PlayerActionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerActionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PlayerActionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERACTIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerActionPacket(); // NOLINT
#endif
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@1HVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(
        enum class PlayerActionType,
        class BlockPos const&,
        class BlockPos const&,
        int,
        class ActorRuntimeID
    ); // NOLINT
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@VActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const&, class ActorRuntimeID); // NOLINT
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerActionPacket(); // NOLINT
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@VActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class ActorRuntimeID); // NOLINT
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@EVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(
        enum class PlayerActionType,
        class BlockPos const&,
        unsigned char,
        class ActorRuntimeID
    ); // NOLINT
    /**
     * @symbol ??0PlayerActionPacket\@\@QEAA\@W4PlayerActionType\@\@AEBVBlockPos\@\@HVActorRuntimeID\@\@\@Z
     */
    MCAPI PlayerActionPacket(enum class PlayerActionType, class BlockPos const&, int, class ActorRuntimeID); // NOLINT
    /**
     * @symbol ?getIsFromServerPlayerMovementSystem\@PlayerActionPacket\@\@QEBA_NXZ
     */
    MCAPI bool getIsFromServerPlayerMovementSystem() const; // NOLINT
    /**
     * @symbol ?setFromServerPlayerMovementSystem\@PlayerActionPacket\@\@QEAAX_N\@Z
     */
    MCAPI void setFromServerPlayerMovementSystem(bool); // NOLINT
};
