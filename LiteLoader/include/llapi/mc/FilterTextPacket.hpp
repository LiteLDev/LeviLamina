/**
 * @file  FilterTextPacket.hpp
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
 * @brief MC class FilterTextPacket.
 *
 */
class FilterTextPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTEXTPACKET
public:
    class FilterTextPacket& operator=(class FilterTextPacket const &) = delete;
    FilterTextPacket(class FilterTextPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FilterTextPacket();
    /**
     * @hash   1184986417
     * @vftbl  1
     * @symbol ?getId@FilterTextPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1623055394
     * @vftbl  2
     * @symbol ?getName@FilterTextPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1804244583
     * @vftbl  3
     * @symbol ?write@FilterTextPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   407889641
     * @vftbl  6
     * @symbol ?_read@FilterTextPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1804238441
     * @symbol ??0FilterTextPacket@@QEAA@XZ
     */
    MCAPI FilterTextPacket();
    /**
     * @hash   1131295657
     * @symbol ??0FilterTextPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI FilterTextPacket(std::string const &, bool);

};