/**
 * @file  MC/CompletedUsingItemPacket.hpp
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
 * @brief MC class CompletedUsingItemPacket.
 *
 */
class CompletedUsingItemPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPLETEDUSINGITEMPACKET
public:
    class CompletedUsingItemPacket& operator=(class CompletedUsingItemPacket const &) = delete;
    CompletedUsingItemPacket(class CompletedUsingItemPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CompletedUsingItemPacket();
    /**
     * @hash   -1409541766
     * @vftbl  1
     * @symbol ?getId@CompletedUsingItemPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -782997465
     * @vftbl  2
     * @symbol ?getName@CompletedUsingItemPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   601987328
     * @vftbl  3
     * @symbol ?write@CompletedUsingItemPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   570420448
     * @vftbl  6
     * @symbol ?_read@CompletedUsingItemPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1739001360
     * @symbol ??0CompletedUsingItemPacket@@QEAA@XZ
     */
    MCAPI CompletedUsingItemPacket();
    /**
     * @hash   1492815843
     * @symbol ??0CompletedUsingItemPacket@@QEAA@FH@Z
     */
    MCAPI CompletedUsingItemPacket(short, int);

};