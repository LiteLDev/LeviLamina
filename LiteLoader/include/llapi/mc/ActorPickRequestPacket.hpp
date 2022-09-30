/**
 * @file  ActorPickRequestPacket.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~ActorPickRequestPacket();
    /**
     * @hash   343380397
     * @vftbl  1
     * @symbol ?getId@ActorPickRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   52445274
     * @vftbl  2
     * @symbol ?getName@ActorPickRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1005026605
     * @vftbl  3
     * @symbol ?write@ActorPickRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -709055427
     * @vftbl  6
     * @symbol ?_read@ActorPickRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1657844461
     * @symbol ??0ActorPickRequestPacket@@QEAA@XZ
     */
    MCAPI ActorPickRequestPacket();

};