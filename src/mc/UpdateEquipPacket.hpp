/**
 * @file  UpdateEquipPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @vftbl  1
     * @symbol  ?getId\@UpdateEquipPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@UpdateEquipPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@UpdateEquipPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@UpdateEquipPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0UpdateEquipPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateEquipPacket();
    /**
     * @symbol  ??0UpdateEquipPacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@H$$QEAVCompoundTag\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI UpdateEquipPacket(enum class ContainerID, enum class ContainerType, int, class CompoundTag &&, struct ActorUniqueID const &);

};