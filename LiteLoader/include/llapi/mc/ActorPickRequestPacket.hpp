/**
 * @file  ActorPickRequestPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorPickRequestPacket.
 *
 */
class ActorPickRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPICKREQUESTPACKET
public:
    class ActorPickRequestPacket& operator=(class ActorPickRequestPacket const &) = delete;
    ActorPickRequestPacket(class ActorPickRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorPickRequestPacket();
    /**
     * @hash   -584315187
     * @vftbl  1
     * @symbol  ?getId\@ActorPickRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -875250310
     * @vftbl  2
     * @symbol  ?getName\@ActorPickRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   77331021
     * @vftbl  3
     * @symbol  ?write\@ActorPickRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1636751011
     * @vftbl  6
     * @symbol  ?_read\@ActorPickRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   730148877
     * @symbol  ??0ActorPickRequestPacket\@\@QEAA\@XZ
     */
    MCAPI ActorPickRequestPacket();

};