/**
 * @file  UpdateEquipPacket.hpp
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
 * @brief MC class UpdateEquipPacket.
 *
 */
class UpdateEquipPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEEQUIPPACKET
public:
    class UpdateEquipPacket& operator=(class UpdateEquipPacket const &) = delete;
    UpdateEquipPacket(class UpdateEquipPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdateEquipPacket();
    /**
     * @hash   -51285553
     * @vftbl  1
     * @symbol  ?getId\@UpdateEquipPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1393452100
     * @vftbl  2
     * @symbol  ?getName\@UpdateEquipPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1915851221
     * @vftbl  3
     * @symbol  ?write\@UpdateEquipPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1351072267
     * @vftbl  6
     * @symbol  ?_read\@UpdateEquipPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   780831099
     * @symbol  ??0UpdateEquipPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateEquipPacket();
    /**
     * @hash   1394369428
     * @symbol  ??0UpdateEquipPacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@H$$QEAVCompoundTag\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI UpdateEquipPacket(enum class ContainerID, enum class ContainerType, int, class CompoundTag &&, struct ActorUniqueID const &);

};