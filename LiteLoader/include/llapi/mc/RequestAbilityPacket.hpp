/**
 * @file  MC/RequestAbilityPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RequestAbilityPacket.
 *
 */
class RequestAbilityPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTABILITYPACKET
public:
    class RequestAbilityPacket& operator=(class RequestAbilityPacket const &) = delete;
    RequestAbilityPacket(class RequestAbilityPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RequestAbilityPacket();
    /**
     * @hash   -1732823349
     * @vftbl  1
     * @symbol ?getId@RequestAbilityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1158751608
     * @vftbl  2
     * @symbol ?getName@RequestAbilityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1023916161
     * @vftbl  3
     * @symbol ?write@RequestAbilityPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1418304127
     * @vftbl  6
     * @symbol ?_read@RequestAbilityPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   363554847
     * @symbol ??0RequestAbilityPacket@@QEAA@XZ
     */
    MCAPI RequestAbilityPacket();
    /**
     * @hash   1785038611
     * @symbol ??0RequestAbilityPacket@@QEAA@W4AbilitiesIndex@@_N@Z
     */
    MCAPI RequestAbilityPacket(enum AbilitiesIndex, bool);
    /**
     * @hash   -635965372
     * @symbol ?getAbility@RequestAbilityPacket@@QEBA?AW4AbilitiesIndex@@XZ
     */
    MCAPI enum AbilitiesIndex getAbility() const;
    /**
     * @hash   -445845922
     * @symbol ?tryGetBool@RequestAbilityPacket@@QEBA_NAEA_N@Z
     */
    MCAPI bool tryGetBool(bool &) const;

};