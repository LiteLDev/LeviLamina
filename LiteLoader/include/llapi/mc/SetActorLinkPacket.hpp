/**
 * @file  SetActorLinkPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~SetActorLinkPacket();
    /**
     * @hash   432983321
     * @vftbl  1
     * @symbol ?getId@SetActorLinkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   651164614
     * @vftbl  2
     * @symbol ?getName@SetActorLinkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -432791359
     * @vftbl  3
     * @symbol ?write@SetActorLinkPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1202676559
     * @vftbl  6
     * @symbol ?_read@SetActorLinkPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   91088209
     * @symbol ??0SetActorLinkPacket@@QEAA@XZ
     */
    MCAPI SetActorLinkPacket();
    /**
     * @hash   -504435080
     * @symbol ??0SetActorLinkPacket@@QEAA@AEBUActorLink@@@Z
     */
    MCAPI SetActorLinkPacket(struct ActorLink const &);

};