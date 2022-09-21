/**
 * @file  MC/AnvilDamagePacket.hpp
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
 * @brief MC class AnvilDamagePacket.
 *
 */
class AnvilDamagePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILDAMAGEPACKET
public:
    class AnvilDamagePacket& operator=(class AnvilDamagePacket const &) = delete;
    AnvilDamagePacket(class AnvilDamagePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AnvilDamagePacket();
    /**
     * @hash   -955821733
     * @vftbl  1
     * @symbol ?getId@AnvilDamagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1563399160
     * @vftbl  2
     * @symbol ?getName@AnvilDamagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   658417759
     * @vftbl  3
     * @symbol ?write@AnvilDamagePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -2042323633
     * @vftbl  6
     * @symbol ?_read@AnvilDamagePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1343100591
     * @symbol ??0AnvilDamagePacket@@QEAA@XZ
     */
    MCAPI AnvilDamagePacket();

};