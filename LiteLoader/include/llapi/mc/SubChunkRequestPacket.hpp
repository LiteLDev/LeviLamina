/**
 * @file  SubChunkRequestPacket.hpp
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
 * @brief MC class SubChunkRequestPacket.
 *
 */
class SubChunkRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKREQUESTPACKET
public:
    class SubChunkRequestPacket& operator=(class SubChunkRequestPacket const &) = delete;
    SubChunkRequestPacket(class SubChunkRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SubChunkRequestPacket();
    /**
     * @hash   1565635316
     * @vftbl  1
     * @symbol ?getId@SubChunkRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -712938079
     * @vftbl  2
     * @symbol ?getName@SubChunkRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   660632806
     * @vftbl  3
     * @symbol ?write@SubChunkRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   115722854
     * @vftbl  6
     * @symbol ?_read@SubChunkRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   831821478
     * @symbol ??0SubChunkRequestPacket@@QEAA@XZ
     */
    MCAPI SubChunkRequestPacket();

};