/**
 * @file  MC/PlayerHotbarPacket.hpp
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
 * @brief MC class PlayerHotbarPacket.
 *
 */
class PlayerHotbarPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERHOTBARPACKET
public:
    class PlayerHotbarPacket& operator=(class PlayerHotbarPacket const &) = delete;
    PlayerHotbarPacket(class PlayerHotbarPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerHotbarPacket();
    /**
     * @hash   -1874129553
     * @vftbl  1
     * @symbol ?getId@PlayerHotbarPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   546831388
     * @vftbl  2
     * @symbol ?getName@PlayerHotbarPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1311773941
     * @vftbl  3
     * @symbol ?write@PlayerHotbarPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1234480539
     * @vftbl  6
     * @symbol ?_read@PlayerHotbarPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1146385739
     * @symbol ??0PlayerHotbarPacket@@QEAA@XZ
     */
    MCAPI PlayerHotbarPacket();
    /**
     * @hash   1068557754
     * @symbol ??0PlayerHotbarPacket@@QEAA@IW4ContainerID@@_N@Z
     */
    MCAPI PlayerHotbarPacket(unsigned int, enum ContainerID, bool);

};