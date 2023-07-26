/**
 * @file  ResourcePackChunkDataPacket.hpp
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
 * @brief MC class ResourcePackChunkDataPacket.
 *
 */
class ResourcePackChunkDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKCHUNKDATAPACKET
public:
    class ResourcePackChunkDataPacket& operator=(class ResourcePackChunkDataPacket const &) = delete;
    ResourcePackChunkDataPacket(class ResourcePackChunkDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ResourcePackChunkDataPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@ResourcePackChunkDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ResourcePackChunkDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@ResourcePackChunkDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@ResourcePackChunkDataPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ResourcePackChunkDataPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackChunkDataPacket();
    /**
     * @symbol  ??0ResourcePackChunkDataPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_KAEBV?$vector\@EV?$allocator\@E\@std\@\@\@2\@\@Z
     */
    MCAPI ResourcePackChunkDataPacket(std::string const &, int, unsigned __int64, std::vector<unsigned char> const &);

};