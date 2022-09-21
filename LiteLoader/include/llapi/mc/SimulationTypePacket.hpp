/**
 * @file  MC/SimulationTypePacket.hpp
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
 * @brief MC class SimulationTypePacket.
 *
 */
class SimulationTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATIONTYPEPACKET
public:
    class SimulationTypePacket& operator=(class SimulationTypePacket const &) = delete;
    SimulationTypePacket(class SimulationTypePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SimulationTypePacket();
    /**
     * @hash   -974571723
     * @vftbl  1
     * @symbol ?getId@SimulationTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   105604578
     * @vftbl  2
     * @symbol ?getName@SimulationTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1044626821
     * @vftbl  3
     * @symbol ?write@SimulationTypePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   647581365
     * @vftbl  6
     * @symbol ?_read@SimulationTypePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -181394075
     * @symbol ??0SimulationTypePacket@@QEAA@XZ
     */
    MCAPI SimulationTypePacket();

};