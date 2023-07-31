#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ResourcePacksInfoPacket : public ::Packet {

public:
    // prevent constructor by default
    ResourcePacksInfoPacket& operator=(ResourcePacksInfoPacket const&) = delete;
    ResourcePacksInfoPacket(ResourcePacksInfoPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ResourcePacksInfoPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ResourcePacksInfoPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ResourcePacksInfoPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ResourcePacksInfoPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKSINFOPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePacksInfoPacket();
#endif
    /**
     * @symbol ??0ResourcePacksInfoPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePacksInfoPacket();
    /**
     * @symbol
     * ??0ResourcePacksInfoPacket\@\@QEAA\@_NAEAV?$vector\@UPackInfoData\@\@V?$allocator\@UPackInfoData\@\@\@std\@\@\@std\@\@10\@Z
     */
    MCAPI ResourcePacksInfoPacket(bool, std::vector<struct PackInfoData>&, std::vector<struct PackInfoData>&, bool);
    // NOLINTEND
};
