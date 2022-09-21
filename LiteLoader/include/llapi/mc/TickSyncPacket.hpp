/**
 * @file  MC/TickSyncPacket.hpp
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
 * @brief MC class TickSyncPacket.
 *
 */
class TickSyncPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKSYNCPACKET
public:
    class TickSyncPacket& operator=(class TickSyncPacket const &) = delete;
    TickSyncPacket(class TickSyncPacket const &) = delete;
    TickSyncPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TickSyncPacket();
    /**
     * @hash   -135528018
     * @vftbl  1
     * @symbol ?getId@TickSyncPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   857034843
     * @vftbl  2
     * @symbol ?getName@TickSyncPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -933364724
     * @vftbl  3
     * @symbol ?write@TickSyncPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1816061204
     * @vftbl  6
     * @symbol ?_read@TickSyncPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);

};