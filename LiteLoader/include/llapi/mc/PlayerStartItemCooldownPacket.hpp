/**
 * @file  PlayerStartItemCooldownPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerStartItemCooldownPacket.
 *
 */
class PlayerStartItemCooldownPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSTARTITEMCOOLDOWNPACKET
public:
    class PlayerStartItemCooldownPacket& operator=(class PlayerStartItemCooldownPacket const &) = delete;
    PlayerStartItemCooldownPacket(class PlayerStartItemCooldownPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerStartItemCooldownPacket();
    /**
     * @hash   -80137993
     * @vftbl  1
     * @symbol ?getId@PlayerStartItemCooldownPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   944425892
     * @vftbl  2
     * @symbol ?getName@PlayerStartItemCooldownPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -757728957
     * @vftbl  3
     * @symbol ?write@PlayerStartItemCooldownPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -592175341
     * @vftbl  6
     * @symbol ?_read@PlayerStartItemCooldownPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1017257331
     * @symbol ??0PlayerStartItemCooldownPacket@@QEAA@XZ
     */
    MCAPI PlayerStartItemCooldownPacket();
    /**
     * @hash   334306581
     * @symbol ??0PlayerStartItemCooldownPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI PlayerStartItemCooldownPacket(std::string const &, int);

};