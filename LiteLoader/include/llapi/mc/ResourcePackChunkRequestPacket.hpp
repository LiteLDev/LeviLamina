/**
 * @file  ResourcePackChunkRequestPacket.hpp
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
 * @brief MC class ResourcePackChunkRequestPacket.
 *
 */
class ResourcePackChunkRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKCHUNKREQUESTPACKET
public:
    class ResourcePackChunkRequestPacket& operator=(class ResourcePackChunkRequestPacket const &) = delete;
    ResourcePackChunkRequestPacket(class ResourcePackChunkRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ResourcePackChunkRequestPacket();
    /**
     * @hash   -2048407731
     * @vftbl  1
     * @symbol  ?getId\@ResourcePackChunkRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1462394294
     * @vftbl  2
     * @symbol  ?getName\@ResourcePackChunkRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -447872291
     * @vftbl  3
     * @symbol  ?write\@ResourcePackChunkRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1198180579
     * @vftbl  6
     * @symbol  ?_read\@ResourcePackChunkRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   2061384669
     * @symbol  ??0ResourcePackChunkRequestPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackChunkRequestPacket();

};