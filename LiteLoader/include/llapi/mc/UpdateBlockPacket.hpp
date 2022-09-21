/**
 * @file  MC/UpdateBlockPacket.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~UpdateBlockPacket();
    /**
     * @hash   -693721870
     * @vftbl  1
     * @symbol ?getId@UpdateBlockPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1469309025
     * @vftbl  2
     * @symbol ?getName@UpdateBlockPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   650749864
     * @vftbl  3
     * @symbol ?write@UpdateBlockPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1966913457
     * @vftbl  6
     * @symbol ?_read@UpdateBlockPacket@@MEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1039245272
     * @symbol ??0UpdateBlockPacket@@QEAA@XZ
     */
    MCAPI UpdateBlockPacket();
    /**
     * @hash   -1581869915
     * @symbol ??0UpdateBlockPacket@@QEAA@AEBVBlockPos@@IIE@Z
     */
    MCAPI UpdateBlockPacket(class BlockPos const &, unsigned int, unsigned int, unsigned char);

};