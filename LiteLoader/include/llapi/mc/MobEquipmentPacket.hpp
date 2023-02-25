/**
 * @file  MobEquipmentPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEquipmentPacket.
 *
 */
class MobEquipmentPacket : public Packet {

#define AFTER_EXTRA
    // Add Member There
public:
    char filler[120];


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEQUIPMENTPACKET
public:
    class MobEquipmentPacket& operator=(class MobEquipmentPacket const &) = delete;
    MobEquipmentPacket(class MobEquipmentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MobEquipmentPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@MobEquipmentPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@MobEquipmentPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@MobEquipmentPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@MobEquipmentPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0MobEquipmentPacket\@\@QEAA\@XZ
     */
    MCAPI MobEquipmentPacket();
    /**
     * @symbol  ??0MobEquipmentPacket\@\@QEAA\@VActorRuntimeID\@\@AEBVNetworkItemStackDescriptor\@\@HHW4ContainerID\@\@\@Z
     */
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class NetworkItemStackDescriptor const &, int, int, enum class ContainerID);
    /**
     * @symbol  ??0MobEquipmentPacket\@\@QEAA\@VActorRuntimeID\@\@AEBVItemStack\@\@HHW4ContainerID\@\@\@Z
     */
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class ItemStack const &, int, int, enum class ContainerID);

};