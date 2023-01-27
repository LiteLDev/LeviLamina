/**
 * @file  NetworkStackLatencyPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~NetworkStackLatencyPacket();
    /**
     * @hash   54925426
     * @vftbl  1
     * @symbol  ?getId\@NetworkStackLatencyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1801032479
     * @vftbl  2
     * @symbol  ?getName\@NetworkStackLatencyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   13308392
     * @vftbl  3
     * @symbol  ?write\@NetworkStackLatencyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   621574440
     * @vftbl  6
     * @symbol  ?_read\@NetworkStackLatencyPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};