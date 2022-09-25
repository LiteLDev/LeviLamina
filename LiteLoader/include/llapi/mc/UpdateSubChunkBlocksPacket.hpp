/**
 * @file  UpdateSubChunkBlocksPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

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
     * @symbol __unk_destructor_0
     */
    virtual ~UpdateSubChunkBlocksPacket();
    /**
     * @hash   687024074
     * @vftbl  1
     * @symbol ?getId@UpdateSubChunkBlocksPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   692778615
     * @vftbl  2
     * @symbol ?getName@UpdateSubChunkBlocksPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   444325984
     * @vftbl  3
     * @symbol ?write@UpdateSubChunkBlocksPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   717700121
     * @vftbl  6
     * @symbol ?_read@UpdateSubChunkBlocksPacket@@MEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1559091120
     * @symbol ??0UpdateSubChunkBlocksPacket@@QEAA@XZ
     */
    MCAPI UpdateSubChunkBlocksPacket();
    /**
     * @hash   -1945202098
     * @symbol ??0UpdateSubChunkBlocksPacket@@QEAA@AEBV?$vector@UNetworkBlockInfo@UpdateSubChunkBlocksPacket@@V?$allocator@UNetworkBlockInfo@UpdateSubChunkBlocksPacket@@@std@@@std@@0@Z
     */
    MCAPI UpdateSubChunkBlocksPacket(std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const &, std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const &);
    /**
     * @hash   807914996
     * @symbol ?setSubChunkPosition@UpdateSubChunkBlocksPacket@@QEAAXAEBVSubChunkPos@@@Z
     */
    MCAPI void setSubChunkPosition(class SubChunkPos const &);

};