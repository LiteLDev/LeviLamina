/**
 * @file  UpdateTradePacket.hpp
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
     * @vftbl  1
     * @symbol  ?getId\@UpdateTradePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@UpdateTradePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@UpdateTradePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@UpdateTradePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0UpdateTradePacket\@\@QEAA\@XZ
     */
    MCAPI UpdateTradePacket();
    /**
     * @symbol  ??0UpdateTradePacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVCompoundTag\@\@AEBUActorUniqueID\@\@4H_N5\@Z
     */
    MCAPI UpdateTradePacket(enum class ContainerID, enum class ContainerType, int, std::string const &, class CompoundTag &&, struct ActorUniqueID const &, struct ActorUniqueID const &, int, bool, bool);

};