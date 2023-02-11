/**
 * @file  UpdateTradePacket.hpp
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
 * @brief MC class UpdateTradePacket.
 *
 */
class UpdateTradePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATETRADEPACKET
public:
    class UpdateTradePacket& operator=(class UpdateTradePacket const &) = delete;
    UpdateTradePacket(class UpdateTradePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdateTradePacket();
    /**
     * @hash   1370170571
     * @vftbl  1
     * @symbol  ?getId\@UpdateTradePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1165242232
     * @vftbl  2
     * @symbol  ?getName\@UpdateTradePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2094952719
     * @vftbl  3
     * @symbol  ?write\@UpdateTradePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1358756207
     * @vftbl  6
     * @symbol  ?_read\@UpdateTradePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1555201567
     * @symbol  ??0UpdateTradePacket\@\@QEAA\@XZ
     */
    MCAPI UpdateTradePacket();
    /**
     * @hash   1604093741
     * @symbol  ??0UpdateTradePacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVCompoundTag\@\@AEBUActorUniqueID\@\@4H_N5\@Z
     */
    MCAPI UpdateTradePacket(enum class ContainerID, enum class ContainerType, int, std::string const &, class CompoundTag &&, struct ActorUniqueID const &, struct ActorUniqueID const &, int, bool, bool);

};