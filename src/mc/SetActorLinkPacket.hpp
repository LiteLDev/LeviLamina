/**
 * @file  SetActorLinkPacket.hpp
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
     * @vftbl  1
     * @symbol  ?getId\@SetActorLinkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@SetActorLinkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@SetActorLinkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@SetActorLinkPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0SetActorLinkPacket\@\@QEAA\@XZ
     */
    MCAPI SetActorLinkPacket();
    /**
     * @symbol  ??0SetActorLinkPacket\@\@QEAA\@AEBUActorLink\@\@\@Z
     */
    MCAPI SetActorLinkPacket(struct ActorLink const &);

};