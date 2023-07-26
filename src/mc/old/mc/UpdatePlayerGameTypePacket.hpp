/**
 * @file  UpdatePlayerGameTypePacket.hpp
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
 * @brief MC class UpdatePlayerGameTypePacket.
 *
 */
class UpdatePlayerGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEPLAYERGAMETYPEPACKET
public:
    class UpdatePlayerGameTypePacket& operator=(class UpdatePlayerGameTypePacket const &) = delete;
    UpdatePlayerGameTypePacket(class UpdatePlayerGameTypePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdatePlayerGameTypePacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@UpdatePlayerGameTypePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@UpdatePlayerGameTypePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@UpdatePlayerGameTypePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@UpdatePlayerGameTypePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0UpdatePlayerGameTypePacket\@\@QEAA\@XZ
     */
    MCAPI UpdatePlayerGameTypePacket();
    /**
     * @symbol  ??0UpdatePlayerGameTypePacket\@\@QEAA\@W4GameType\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI UpdatePlayerGameTypePacket(enum class GameType, struct ActorUniqueID const &);

};