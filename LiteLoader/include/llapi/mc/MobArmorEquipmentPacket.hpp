/**
 * @file  MC/MobArmorEquipmentPacket.hpp
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
 * @brief MC class MobArmorEquipmentPacket.
 *
 */
class MobArmorEquipmentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBARMOREQUIPMENTPACKET
public:
    class MobArmorEquipmentPacket& operator=(class MobArmorEquipmentPacket const &) = delete;
    MobArmorEquipmentPacket(class MobArmorEquipmentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MobArmorEquipmentPacket();
    /**
     * @hash   -2136907321
     * @vftbl  1
     * @symbol ?getId@MobArmorEquipmentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -488801164
     * @vftbl  2
     * @symbol ?getName@MobArmorEquipmentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1846222835
     * @vftbl  3
     * @symbol ?write@MobArmorEquipmentPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1719994851
     * @vftbl  6
     * @symbol ?_read@MobArmorEquipmentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1720096845
     * @symbol ??0MobArmorEquipmentPacket@@QEAA@XZ
     */
    MCAPI MobArmorEquipmentPacket();
    /**
     * @hash   1797057416
     * @symbol ??0MobArmorEquipmentPacket@@QEAA@AEBVActor@@@Z
     */
    MCAPI MobArmorEquipmentPacket(class Actor const &);

};