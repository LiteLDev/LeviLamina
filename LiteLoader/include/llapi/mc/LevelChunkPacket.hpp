/**
 * @file  LevelChunkPacket.hpp
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
 * @brief MC class LevelChunkPacket.
 *
 */
class LevelChunkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKPACKET
public:
    class LevelChunkPacket& operator=(class LevelChunkPacket const &) = delete;
    LevelChunkPacket(class LevelChunkPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelChunkPacket();
    /**
     * @hash   -510724403
     * @vftbl  1
     * @symbol ?getId@LevelChunkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   953492858
     * @vftbl  2
     * @symbol ?getName@LevelChunkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1442365229
     * @vftbl  3
     * @symbol ?write@LevelChunkPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1532811421
     * @vftbl  6
     * @symbol ?_read@LevelChunkPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1074661933
     * @symbol ??0LevelChunkPacket@@QEAA@XZ
     */
    MCAPI LevelChunkPacket();
    /**
     * @hash   -523323793
     * @symbol ?pushSubChunkMetadata@LevelChunkPacket@@QEAAX_K@Z
     */
    MCAPI void pushSubChunkMetadata(unsigned __int64);

};