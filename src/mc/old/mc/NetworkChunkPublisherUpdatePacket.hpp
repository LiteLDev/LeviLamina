/**
 * @file  NetworkChunkPublisherUpdatePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkChunkPublisherUpdatePacket.
 *
 */
class NetworkChunkPublisherUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKPUBLISHERUPDATEPACKET
public:
    class NetworkChunkPublisherUpdatePacket& operator=(class NetworkChunkPublisherUpdatePacket const &) = delete;
    NetworkChunkPublisherUpdatePacket(class NetworkChunkPublisherUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetworkChunkPublisherUpdatePacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@NetworkChunkPublisherUpdatePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@NetworkChunkPublisherUpdatePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@NetworkChunkPublisherUpdatePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@NetworkChunkPublisherUpdatePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0NetworkChunkPublisherUpdatePacket\@\@QEAA\@XZ
     */
    MCAPI NetworkChunkPublisherUpdatePacket();
    /**
     * @symbol  ??0NetworkChunkPublisherUpdatePacket\@\@QEAA\@AEBVBlockPos\@\@I\@Z
     */
    MCAPI NetworkChunkPublisherUpdatePacket(class BlockPos const &, unsigned int);

};