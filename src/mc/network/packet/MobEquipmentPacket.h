#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class MobEquipmentPacket : public ::Packet {

public:
    // prevent constructor by default
    MobEquipmentPacket& operator=(MobEquipmentPacket const&) = delete;
    MobEquipmentPacket(MobEquipmentPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MobEquipmentPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MobEquipmentPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MobEquipmentPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MobEquipmentPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEQUIPMENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobEquipmentPacket();
#endif
    /**
     * @symbol ??0MobEquipmentPacket\@\@QEAA\@VActorRuntimeID\@\@AEBVItemStack\@\@HHW4ContainerID\@\@\@Z
     */
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class ItemStack const&, int, int, enum class ContainerID);
    /**
     * @symbol
     * ??0MobEquipmentPacket\@\@QEAA\@VActorRuntimeID\@\@AEBVNetworkItemStackDescriptor\@\@HHW4ContainerID\@\@\@Z
     */
    MCAPI
    MobEquipmentPacket(class ActorRuntimeID, class NetworkItemStackDescriptor const&, int, int, enum class ContainerID);
    /**
     * @symbol ??0MobEquipmentPacket\@\@QEAA\@XZ
     */
    MCAPI MobEquipmentPacket();
    // NOLINTEND
};
