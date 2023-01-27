/**
 * @file  UpdateSubChunkBlocksPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateSubChunkBlocksPacket.
 *
 */
class UpdateSubChunkBlocksPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATESUBCHUNKBLOCKSPACKET
public:
    class UpdateSubChunkBlocksPacket& operator=(class UpdateSubChunkBlocksPacket const &) = delete;
    UpdateSubChunkBlocksPacket(class UpdateSubChunkBlocksPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdateSubChunkBlocksPacket();
    /**
     * @hash   -246929542
     * @vftbl  1
     * @symbol  ?getId\@UpdateSubChunkBlocksPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -241175001
     * @vftbl  2
     * @symbol  ?getName\@UpdateSubChunkBlocksPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -489627632
     * @vftbl  3
     * @symbol  ?write\@UpdateSubChunkBlocksPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -216284247
     * @vftbl  6
     * @symbol  ?_read\@UpdateSubChunkBlocksPacket\@\@MEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1801907184
     * @symbol  ??0UpdateSubChunkBlocksPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateSubChunkBlocksPacket();
    /**
     * @hash   1415796206
     * @symbol  ??0UpdateSubChunkBlocksPacket\@\@QEAA\@AEBV?$vector\@UNetworkBlockInfo\@UpdateSubChunkBlocksPacket\@\@V?$allocator\@UNetworkBlockInfo\@UpdateSubChunkBlocksPacket\@\@\@std\@\@\@std\@\@0\@Z
     */
    MCAPI UpdateSubChunkBlocksPacket(std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const &, std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const &);
    /**
     * @hash   -126038620
     * @symbol  ?setSubChunkPosition\@UpdateSubChunkBlocksPacket\@\@QEAAXAEBVSubChunkPos\@\@\@Z
     */
    MCAPI void setSubChunkPosition(class SubChunkPos const &);

};