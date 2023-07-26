#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class SetSpawnPositionPacket : public ::Packet {

public:
    // prevent constructor by default
    SetSpawnPositionPacket& operator=(SetSpawnPositionPacket const&) = delete;
    SetSpawnPositionPacket(SetSpawnPositionPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@SetSpawnPositionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetSpawnPositionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@SetSpawnPositionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetSpawnPositionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETSPAWNPOSITIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetSpawnPositionPacket(); // NOLINT
#endif
    /**
     * @symbol ??0SetSpawnPositionPacket\@\@QEAA\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI
    SetSpawnPositionPacket(class AutomaticID<class Dimension, int>, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ??0SetSpawnPositionPacket\@\@QEAA\@XZ
     */
    MCAPI SetSpawnPositionPacket(); // NOLINT
    /**
     * @symbol
     * ??0SetSpawnPositionPacket\@\@QEAA\@W4SpawnPositionType\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI
    SetSpawnPositionPacket(enum class SpawnPositionType, class AutomaticID<class Dimension, int>, class BlockPos const&); // NOLINT
};
