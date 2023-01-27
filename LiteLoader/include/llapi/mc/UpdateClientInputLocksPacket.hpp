/**
 * @file  UpdateClientInputLocksPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateClientInputLocksPacket.
 *
 */
class UpdateClientInputLocksPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATECLIENTINPUTLOCKSPACKET
public:
    class UpdateClientInputLocksPacket& operator=(class UpdateClientInputLocksPacket const &) = delete;
    UpdateClientInputLocksPacket(class UpdateClientInputLocksPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdateClientInputLocksPacket();
    /**
     * @hash   -1086033948
     * @vftbl  1
     * @symbol  ?getId\@UpdateClientInputLocksPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   2059140753
     * @vftbl  2
     * @symbol  ?getName\@UpdateClientInputLocksPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1803550346
     * @vftbl  3
     * @symbol  ?write\@UpdateClientInputLocksPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -309284186
     * @vftbl  6
     * @symbol  ?_read\@UpdateClientInputLocksPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   313937094
     * @symbol  ??0UpdateClientInputLocksPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateClientInputLocksPacket();

};