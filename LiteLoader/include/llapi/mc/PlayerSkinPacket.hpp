/**
 * @file  PlayerSkinPacket.hpp
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
 * @brief MC class PlayerSkinPacket.
 *
 */
class PlayerSkinPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSKINPACKET
public:
    class PlayerSkinPacket& operator=(class PlayerSkinPacket const &) = delete;
    PlayerSkinPacket(class PlayerSkinPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerSkinPacket();
    /**
     * @hash   -1488851080
     * @vftbl  1
     * @symbol ?getId@PlayerSkinPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   980221477
     * @vftbl  2
     * @symbol ?getName@PlayerSkinPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -501584494
     * @vftbl  3
     * @symbol ?write@PlayerSkinPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -62884857
     * @vftbl  4
     * @symbol ?readExtended@PlayerSkinPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @hash   183158898
     * @vftbl  6
     * @symbol ?_read@PlayerSkinPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1997077790
     * @symbol ??0PlayerSkinPacket@@QEAA@XZ
     */
    MCAPI PlayerSkinPacket();

};