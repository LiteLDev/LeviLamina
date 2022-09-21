/**
 * @file  MC/AddVolumeEntityPacket.hpp
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
 * @brief MC class AddVolumeEntityPacket.
 *
 */
class AddVolumeEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDVOLUMEENTITYPACKET
public:
    class AddVolumeEntityPacket& operator=(class AddVolumeEntityPacket const &) = delete;
    AddVolumeEntityPacket(class AddVolumeEntityPacket const &) = delete;
    AddVolumeEntityPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AddVolumeEntityPacket();
    /**
     * @hash   319761128
     * @vftbl  1
     * @symbol ?getId@AddVolumeEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   592799125
     * @vftbl  2
     * @symbol ?getName@AddVolumeEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1318767266
     * @vftbl  3
     * @symbol ?write@AddVolumeEntityPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -2052889646
     * @vftbl  6
     * @symbol ?_read@AddVolumeEntityPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1490070987
     * @symbol ??0AddVolumeEntityPacket@@QEAA@AEBVEntityContext@@VCompoundTag@@AEBVSemVersion@@@Z
     */
    MCAPI AddVolumeEntityPacket(class EntityContext const &, class CompoundTag, class SemVersion const &);

};