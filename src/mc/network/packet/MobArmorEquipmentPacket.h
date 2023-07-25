#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class MobArmorEquipmentPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBARMOREQUIPMENTPACKET
public:
    MobArmorEquipmentPacket& operator=(MobArmorEquipmentPacket const&) = delete;
    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MobArmorEquipmentPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MobArmorEquipmentPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MobArmorEquipmentPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MobArmorEquipmentPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBARMOREQUIPMENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobArmorEquipmentPacket();
#endif
    /**
     * @symbol ??0MobArmorEquipmentPacket\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI MobArmorEquipmentPacket(class Actor const&);
    /**
     * @symbol ??0MobArmorEquipmentPacket\@\@QEAA\@XZ
     */
    MCAPI MobArmorEquipmentPacket();
};
