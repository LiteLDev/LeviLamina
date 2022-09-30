/**
 * @file  ScriptMessagePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMessagePacket.
 *
 */
class ScriptMessagePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMESSAGEPACKET
public:
    class ScriptMessagePacket& operator=(class ScriptMessagePacket const &) = delete;
    ScriptMessagePacket(class ScriptMessagePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptMessagePacket();
    /**
     * @hash   -622229558
     * @vftbl  1
     * @symbol ?getId@ScriptMessagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   2097069703
     * @vftbl  2
     * @symbol ?getName@ScriptMessagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1505814144
     * @vftbl  3
     * @symbol ?write@ScriptMessagePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   215623472
     * @vftbl  6
     * @symbol ?_read@ScriptMessagePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -31092928
     * @symbol ??0ScriptMessagePacket@@QEAA@XZ
     */
    MCAPI ScriptMessagePacket();
    /**
     * @hash   -970873625
     * @symbol ??0ScriptMessagePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI ScriptMessagePacket(std::string const &, std::string const &);
    /**
     * @hash   -301323068
     * @symbol ?getMessageId@ScriptMessagePacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getMessageId() const;
    /**
     * @hash   -1448925026
     * @symbol ?getMessageValue@ScriptMessagePacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getMessageValue() const;

};