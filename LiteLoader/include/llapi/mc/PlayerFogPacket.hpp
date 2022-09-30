/**
 * @file  PlayerFogPacket.hpp
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
 * @brief MC class PlayerFogPacket.
 *
 */
class PlayerFogPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERFOGPACKET
public:
    class PlayerFogPacket& operator=(class PlayerFogPacket const &) = delete;
    PlayerFogPacket(class PlayerFogPacket const &) = delete;
    PlayerFogPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerFogPacket();
    /**
     * @hash   -752620103
     * @vftbl  1
     * @symbol ?getId@PlayerFogPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1432008602
     * @vftbl  2
     * @symbol ?getName@PlayerFogPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2094773247
     * @vftbl  3
     * @symbol ?write@PlayerFogPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   2083644801
     * @vftbl  6
     * @symbol ?_read@PlayerFogPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1898109053
     * @symbol ??0PlayerFogPacket@@QEAA@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI PlayerFogPacket(std::vector<std::string>);

};