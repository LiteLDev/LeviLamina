#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CreativeContentPacket : public ::Packet {

public:
    // prevent constructor by default
    CreativeContentPacket& operator=(CreativeContentPacket const&) = delete;
    CreativeContentPacket(CreativeContentPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CreativeContentPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CreativeContentPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CreativeContentPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CreativeContentPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVECONTENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CreativeContentPacket();
#endif
    /**
     * @symbol
     * ??0CreativeContentPacket\@\@QEAA\@AEBV?$vector\@VCreativeItemEntry\@\@V?$allocator\@VCreativeItemEntry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI CreativeContentPacket(std::vector<class CreativeItemEntry> const&);
    /**
     * @symbol ??0CreativeContentPacket\@\@QEAA\@XZ
     */
    MCAPI CreativeContentPacket();
    // NOLINTEND
};
