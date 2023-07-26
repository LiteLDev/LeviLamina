#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ResourcePackChunkDataPacket : public ::Packet {

public:
    // prevent constructor by default
    ResourcePackChunkDataPacket& operator=(ResourcePackChunkDataPacket const&) = delete;
    ResourcePackChunkDataPacket(ResourcePackChunkDataPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@ResourcePackChunkDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ResourcePackChunkDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@ResourcePackChunkDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ResourcePackChunkDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKCHUNKDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackChunkDataPacket(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ResourcePackChunkDataPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_KAEBV?$vector\@EV?$allocator\@E\@std\@\@\@2\@\@Z
     */
    MCAPI
    ResourcePackChunkDataPacket(std::string const&, int, unsigned __int64, std::vector<unsigned char> const&); // NOLINT
    /**
     * @symbol ??0ResourcePackChunkDataPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackChunkDataPacket(); // NOLINT
};
