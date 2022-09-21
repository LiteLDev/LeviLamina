/**
 * @file  MC/ScriptCustomEventPacket.hpp
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
 * @brief MC class ScriptCustomEventPacket.
 *
 */
class ScriptCustomEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCUSTOMEVENTPACKET
public:
    class ScriptCustomEventPacket& operator=(class ScriptCustomEventPacket const &) = delete;
    ScriptCustomEventPacket(class ScriptCustomEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptCustomEventPacket();
    /**
     * @hash   813635560
     * @vftbl  1
     * @symbol ?getId@ScriptCustomEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -179318123
     * @vftbl  2
     * @symbol ?getName@ScriptCustomEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1871173266
     * @vftbl  3
     * @symbol ?write@ScriptCustomEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1921671326
     * @vftbl  6
     * @symbol ?_read@ScriptCustomEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   690732722
     * @symbol ??0ScriptCustomEventPacket@@QEAA@XZ
     */
    MCAPI ScriptCustomEventPacket();

};