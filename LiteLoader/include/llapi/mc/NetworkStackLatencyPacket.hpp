/**
 * @file  NetworkStackLatencyPacket.hpp
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
 * @brief MC class NetworkStackLatencyPacket.
 *
 */
class NetworkStackLatencyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSTACKLATENCYPACKET
public:
    class NetworkStackLatencyPacket& operator=(class NetworkStackLatencyPacket const &) = delete;
    NetworkStackLatencyPacket(class NetworkStackLatencyPacket const &) = delete;
    NetworkStackLatencyPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NetworkStackLatencyPacket();
    /**
     * @hash   982682514
     * @vftbl  1
     * @symbol ?getId@NetworkStackLatencyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1566177729
     * @vftbl  2
     * @symbol ?getName@NetworkStackLatencyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   941065480
     * @vftbl  3
     * @symbol ?write@NetworkStackLatencyPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1549331528
     * @vftbl  6
     * @symbol ?_read@NetworkStackLatencyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);

};