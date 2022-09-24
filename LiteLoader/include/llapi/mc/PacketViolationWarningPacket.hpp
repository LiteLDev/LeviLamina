/**
 * @file  PacketViolationWarningPacket.hpp
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
 * @brief MC class PacketViolationWarningPacket.
 *
 */
class PacketViolationWarningPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETVIOLATIONWARNINGPACKET
public:
    class PacketViolationWarningPacket& operator=(class PacketViolationWarningPacket const &) = delete;
    PacketViolationWarningPacket(class PacketViolationWarningPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PacketViolationWarningPacket();
    /**
     * @hash   -847027241
     * @vftbl  1
     * @symbol ?getId@PacketViolationWarningPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   156291716
     * @vftbl  2
     * @symbol ?getName@PacketViolationWarningPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   428419939
     * @vftbl  3
     * @symbol ?write@PacketViolationWarningPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -655413341
     * @vftbl  6
     * @symbol ?_read@PacketViolationWarningPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -868820349
     * @symbol ??0PacketViolationWarningPacket@@QEAA@XZ
     */
    MCAPI PacketViolationWarningPacket();
    /**
     * @hash   1471721123
     * @symbol ??0PacketViolationWarningPacket@@QEAA@W4StreamReadResult@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI PacketViolationWarningPacket(enum StreamReadResult, enum PacketViolationResponse, enum MinecraftPacketIds, std::string const &);

};