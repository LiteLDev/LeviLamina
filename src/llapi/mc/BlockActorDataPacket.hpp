/**
 * @file  BlockActorDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CompoundTag.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockActorDataPacket.
 *
 */
class BlockActorDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORDATAPACKET
public:
    class BlockActorDataPacket& operator=(class BlockActorDataPacket const &) = delete;
    BlockActorDataPacket(class BlockActorDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockActorDataPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@BlockActorDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@BlockActorDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@BlockActorDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@BlockActorDataPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0BlockActorDataPacket\@\@QEAA\@XZ
     */
    MCAPI BlockActorDataPacket();
    /**
     * @symbol  ??0BlockActorDataPacket\@\@QEAA\@AEBVBlockPos\@\@VCompoundTag\@\@\@Z
     */
    MCAPI BlockActorDataPacket(class BlockPos const &, class CompoundTag);

};