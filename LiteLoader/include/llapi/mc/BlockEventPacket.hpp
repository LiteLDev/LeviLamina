/**
 * @file  BlockEventPacket.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~BlockEventPacket();
    /**
     * @hash   1960924073
     * @vftbl  1
     * @symbol ?getId@BlockEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -140180906
     * @vftbl  2
     * @symbol ?getName@BlockEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1708003537
     * @vftbl  3
     * @symbol ?write@BlockEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   17042625
     * @vftbl  6
     * @symbol ?_read@BlockEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -816335503
     * @symbol ??0BlockEventPacket@@QEAA@XZ
     */
    MCAPI BlockEventPacket();
    /**
     * @hash   482571842
     * @symbol ??0BlockEventPacket@@QEAA@VBlockPos@@HH@Z
     */
    MCAPI BlockEventPacket(class BlockPos, int, int);

};