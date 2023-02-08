/**
 * @file  BlockEventPacket.hpp
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
 * @brief MC class BlockEventPacket.
 *
 */
class BlockEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTPACKET
public:
    class BlockEventPacket& operator=(class BlockEventPacket const &) = delete;
    BlockEventPacket(class BlockEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockEventPacket();
    /**
     * @hash   1032690329
     * @vftbl  1
     * @symbol  ?getId\@BlockEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1068414650
     * @vftbl  2
     * @symbol  ?getName\@BlockEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   779769793
     * @vftbl  3
     * @symbol  ?write\@BlockEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -911191119
     * @vftbl  6
     * @symbol  ?_read\@BlockEventPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1744569247
     * @symbol  ??0BlockEventPacket\@\@QEAA\@XZ
     */
    MCAPI BlockEventPacket();
    /**
     * @hash   -445661902
     * @symbol  ??0BlockEventPacket\@\@QEAA\@VBlockPos\@\@HH\@Z
     */
    MCAPI BlockEventPacket(class BlockPos, int, int);

};