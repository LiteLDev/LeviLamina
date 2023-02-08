/**
 * @file  TakeItemActorPacket.hpp
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
 * @brief MC class TakeItemActorPacket.
 *
 */
class TakeItemActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEITEMACTORPACKET
public:
    class TakeItemActorPacket& operator=(class TakeItemActorPacket const &) = delete;
    TakeItemActorPacket(class TakeItemActorPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TakeItemActorPacket();
    /**
     * @hash   1775918651
     * @vftbl  1
     * @symbol  ?getId\@TakeItemActorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -2097284888
     * @vftbl  2
     * @symbol  ?getName\@TakeItemActorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1192219199
     * @vftbl  3
     * @symbol  ?write\@TakeItemActorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   387083103
     * @vftbl  6
     * @symbol  ?_read\@TakeItemActorPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   2040356079
     * @symbol  ??0TakeItemActorPacket\@\@QEAA\@XZ
     */
    MCAPI TakeItemActorPacket();
    /**
     * @hash   -918263237
     * @symbol  ??0TakeItemActorPacket\@\@QEAA\@VActorRuntimeID\@\@0\@Z
     */
    MCAPI TakeItemActorPacket(class ActorRuntimeID, class ActorRuntimeID);

};