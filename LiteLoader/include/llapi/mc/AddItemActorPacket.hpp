/**
 * @file  MC/AddItemActorPacket.hpp
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
 * @brief MC class AddItemActorPacket.
 *
 */
class AddItemActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDITEMACTORPACKET
public:
    class AddItemActorPacket& operator=(class AddItemActorPacket const &) = delete;
    AddItemActorPacket(class AddItemActorPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AddItemActorPacket();
    /**
     * @hash   -190663227
     * @vftbl  1
     * @symbol ?getId@AddItemActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   556491890
     * @vftbl  2
     * @symbol ?getName@AddItemActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   914143829
     * @vftbl  3
     * @symbol ?write@AddItemActorPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   851165701
     * @vftbl  6
     * @symbol ?_read@AddItemActorPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -589177995
     * @symbol ??0AddItemActorPacket@@QEAA@XZ
     */
    MCAPI AddItemActorPacket();
    /**
     * @hash   1841108512
     * @symbol ??0AddItemActorPacket@@QEAA@AEAVItemActor@@@Z
     */
    MCAPI AddItemActorPacket(class ItemActor &);

};