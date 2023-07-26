#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ResourcePackStackPacket : public ::Packet {

public:
    // prevent constructor by default
    ResourcePackStackPacket& operator=(ResourcePackStackPacket const&) = delete;
    ResourcePackStackPacket(ResourcePackStackPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@ResourcePackStackPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ResourcePackStackPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@ResourcePackStackPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ResourcePackStackPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKSTACKPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackStackPacket(); // NOLINT
#endif
    /**
     * @symbol ??0ResourcePackStackPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackStackPacket(); // NOLINT
    /**
     * @symbol
     * ??0ResourcePackStackPacket\@\@QEAA\@V?$vector\@UPackInstanceId\@\@V?$allocator\@UPackInstanceId\@\@\@std\@\@\@std\@\@0AEBVBaseGameVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    MCAPI
    ResourcePackStackPacket(std::vector<struct PackInstanceId>, std::vector<struct PackInstanceId>, class BaseGameVersion const&, bool, class Experiments const&); // NOLINT
};
