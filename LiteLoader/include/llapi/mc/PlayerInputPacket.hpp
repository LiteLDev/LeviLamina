/**
 * @file  PlayerInputPacket.hpp
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
 * @brief MC class PlayerInputPacket.
 *
 */
class PlayerInputPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINPUTPACKET
public:
    class PlayerInputPacket& operator=(class PlayerInputPacket const &) = delete;
    PlayerInputPacket(class PlayerInputPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerInputPacket();
    /**
     * @hash   -1378345011
     * @vftbl  1
     * @symbol ?getId@PlayerInputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1077705338
     * @vftbl  2
     * @symbol ?getName@PlayerInputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1663512365
     * @vftbl  3
     * @symbol ?write@PlayerInputPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   751442861
     * @vftbl  6
     * @symbol ?_read@PlayerInputPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   806122045
     * @symbol ??0PlayerInputPacket@@QEAA@XZ
     */
    MCAPI PlayerInputPacket();

};