/**
 * @file  UpdateBlockSyncedPacket.hpp
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
 * @brief MC class UpdateBlockSyncedPacket.
 *
 */
class UpdateBlockSyncedPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEBLOCKSYNCEDPACKET
public:
    class UpdateBlockSyncedPacket& operator=(class UpdateBlockSyncedPacket const &) = delete;
    UpdateBlockSyncedPacket(class UpdateBlockSyncedPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~UpdateBlockSyncedPacket();
    /**
     * @hash   -1738703864
     * @vftbl  1
     * @symbol ?getId@UpdateBlockSyncedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1597098315
     * @vftbl  2
     * @symbol ?getName@UpdateBlockSyncedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1162250418
     * @vftbl  3
     * @symbol ?write@UpdateBlockSyncedPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -258339182
     * @vftbl  6
     * @symbol ?_read@UpdateBlockSyncedPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   626953826
     * @symbol ??0UpdateBlockSyncedPacket@@QEAA@XZ
     */
    MCAPI UpdateBlockSyncedPacket();
    /**
     * @hash   1799717388
     * @symbol ??0UpdateBlockSyncedPacket@@QEAA@AEBVBlockPos@@IIEAEBUActorBlockSyncMessage@@@Z
     */
    MCAPI UpdateBlockSyncedPacket(class BlockPos const &, unsigned int, unsigned int, unsigned char, struct ActorBlockSyncMessage const &);

};