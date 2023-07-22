/**
 * @file  UpdateBlockPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateBlockPacket.
 *
 */
class UpdateBlockPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEBLOCKPACKET
public:
    class UpdateBlockPacket& operator=(class UpdateBlockPacket const &) = delete;
    UpdateBlockPacket(class UpdateBlockPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdateBlockPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@UpdateBlockPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@UpdateBlockPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@UpdateBlockPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@UpdateBlockPacket\@\@MEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0UpdateBlockPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateBlockPacket();
    /**
     * @symbol  ??0UpdateBlockPacket\@\@QEAA\@AEBVBlockPos\@\@IIE\@Z
     */
    MCAPI UpdateBlockPacket(class BlockPos const &, unsigned int, unsigned int, unsigned char);

};