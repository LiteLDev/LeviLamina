/**
 * @file  SimulationTypePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~SimulationTypePacket();
    /**
     * @hash   -1902190427
     * @vftbl  1
     * @symbol  ?getId\@SimulationTypePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -822014126
     * @vftbl  2
     * @symbol  ?getName\@SimulationTypePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   117008117
     * @vftbl  3
     * @symbol  ?write\@SimulationTypePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -280037339
     * @vftbl  6
     * @symbol  ?_read\@SimulationTypePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1109012779
     * @symbol  ??0SimulationTypePacket\@\@QEAA\@XZ
     */
    MCAPI SimulationTypePacket();

};