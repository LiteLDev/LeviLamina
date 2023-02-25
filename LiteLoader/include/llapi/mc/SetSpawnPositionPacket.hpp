/**
 * @file  SetSpawnPositionPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetSpawnPositionPacket.
 *
 */
class SetSpawnPositionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETSPAWNPOSITIONPACKET
public:
    class SetSpawnPositionPacket& operator=(class SetSpawnPositionPacket const &) = delete;
    SetSpawnPositionPacket(class SetSpawnPositionPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetSpawnPositionPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@SetSpawnPositionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@SetSpawnPositionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@SetSpawnPositionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@SetSpawnPositionPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0SetSpawnPositionPacket\@\@QEAA\@XZ
     */
    MCAPI SetSpawnPositionPacket();
    /**
     * @symbol  ??0SetSpawnPositionPacket\@\@QEAA\@W4SpawnPositionType\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SetSpawnPositionPacket(enum class SpawnPositionType, class AutomaticID<class Dimension, int>, class BlockPos const &);
    /**
     * @symbol  ??0SetSpawnPositionPacket\@\@QEAA\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI SetSpawnPositionPacket(class AutomaticID<class Dimension, int>, class BlockPos const &, class BlockPos const &);

};