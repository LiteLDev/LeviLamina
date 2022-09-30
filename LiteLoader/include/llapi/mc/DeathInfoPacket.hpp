/**
 * @file  DeathInfoPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeathInfoPacket.
 *
 */
class DeathInfoPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEATHINFOPACKET
public:
    class DeathInfoPacket& operator=(class DeathInfoPacket const &) = delete;
    DeathInfoPacket(class DeathInfoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DeathInfoPacket();
    /**
     * @hash   731527476
     * @vftbl  1
     * @symbol ?getId@DeathInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1000705055
     * @vftbl  2
     * @symbol ?getName@DeathInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -407412186
     * @vftbl  3
     * @symbol ?write@DeathInfoPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1148973190
     * @vftbl  6
     * @symbol ?_read@DeathInfoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -727928378
     * @symbol ??0DeathInfoPacket@@QEAA@XZ
     */
    MCAPI DeathInfoPacket();
    /**
     * @hash   -659076850
     * @symbol ??0DeathInfoPacket@@QEAA@AEBU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@@Z
     */
    MCAPI DeathInfoPacket(struct std::pair<std::string, std::vector<std::string>> const &);

};