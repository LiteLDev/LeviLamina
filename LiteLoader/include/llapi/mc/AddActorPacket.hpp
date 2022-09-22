/**
 * @file  AddActorPacket.hpp
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
 * @brief MC class AddActorPacket.
 *
 */
class AddActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDACTORPACKET
public:
    class AddActorPacket& operator=(class AddActorPacket const &) = delete;
    AddActorPacket(class AddActorPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AddActorPacket();
    /**
     * @hash   930925506
     * @vftbl  1
     * @symbol ?getId@AddActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -969893265
     * @vftbl  2
     * @symbol ?getName@AddActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1354611352
     * @vftbl  3
     * @symbol ?write@AddActorPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1823715784
     * @vftbl  6
     * @symbol ?_read@AddActorPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1849186504
     * @symbol ??0AddActorPacket@@QEAA@XZ
     */
    MCAPI AddActorPacket();
    /**
     * @hash   -337437385
     * @symbol ??0AddActorPacket@@QEAA@AEAVActor@@@Z
     */
    MCAPI AddActorPacket(class Actor &);

};