/**
 * @file  PlayerArmorDamagePacket.hpp
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
 * @brief MC class PlayerArmorDamagePacket.
 *
 */
class PlayerArmorDamagePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERARMORDAMAGEPACKET
public:
    class PlayerArmorDamagePacket& operator=(class PlayerArmorDamagePacket const &) = delete;
    PlayerArmorDamagePacket(class PlayerArmorDamagePacket const &) = delete;
    PlayerArmorDamagePacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerArmorDamagePacket();
    /**
     * @hash   -425917943
     * @vftbl  1
     * @symbol ?getId@PlayerArmorDamagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   264673478
     * @vftbl  2
     * @symbol ?getName@PlayerArmorDamagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1391337455
     * @vftbl  3
     * @symbol ?write@PlayerArmorDamagePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1384640145
     * @vftbl  6
     * @symbol ?_read@PlayerArmorDamagePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};