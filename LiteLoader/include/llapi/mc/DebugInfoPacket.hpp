/**
 * @file  MC/DebugInfoPacket.hpp
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
 * @brief MC class DebugInfoPacket.
 *
 */
class DebugInfoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGINFOPACKET
public:
    class DebugInfoPacket& operator=(class DebugInfoPacket const &) = delete;
    DebugInfoPacket(class DebugInfoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DebugInfoPacket();
    /**
     * @hash   1757703589
     * @vftbl  1
     * @symbol ?getId@DebugInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   101402706
     * @vftbl  2
     * @symbol ?getName@DebugInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   47965813
     * @vftbl  3
     * @symbol ?write@DebugInfoPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -975586107
     * @vftbl  6
     * @symbol ?_read@DebugInfoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1529776315
     * @symbol ??0DebugInfoPacket@@QEAA@XZ
     */
    MCAPI DebugInfoPacket();

};