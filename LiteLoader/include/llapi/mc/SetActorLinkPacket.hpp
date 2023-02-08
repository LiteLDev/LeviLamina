/**
 * @file  SetActorLinkPacket.hpp
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
 * @brief MC class SetActorLinkPacket.
 *
 */
class SetActorLinkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORLINKPACKET
public:
    class SetActorLinkPacket& operator=(class SetActorLinkPacket const &) = delete;
    SetActorLinkPacket(class SetActorLinkPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetActorLinkPacket();
    /**
     * @hash   -495711703
     * @vftbl  1
     * @symbol  ?getId\@SetActorLinkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -277530410
     * @vftbl  2
     * @symbol  ?getName\@SetActorLinkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1361486383
     * @vftbl  3
     * @symbol  ?write\@SetActorLinkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -2131371583
     * @vftbl  6
     * @symbol  ?_read\@SetActorLinkPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -837606815
     * @symbol  ??0SetActorLinkPacket\@\@QEAA\@XZ
     */
    MCAPI SetActorLinkPacket();
    /**
     * @hash   -1433130104
     * @symbol  ??0SetActorLinkPacket\@\@QEAA\@AEBUActorLink\@\@\@Z
     */
    MCAPI SetActorLinkPacket(struct ActorLink const &);

};