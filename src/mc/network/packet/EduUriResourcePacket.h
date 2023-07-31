#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class EduUriResourcePacket : public ::Packet {

public:
    // prevent constructor by default
    EduUriResourcePacket& operator=(EduUriResourcePacket const&) = delete;
    EduUriResourcePacket(EduUriResourcePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@EduUriResourcePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@EduUriResourcePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@EduUriResourcePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@EduUriResourcePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUURIRESOURCEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EduUriResourcePacket();
#endif
    /**
     * @symbol ??0EduUriResourcePacket\@\@QEAA\@XZ
     */
    MCAPI EduUriResourcePacket();
    /**
     * @symbol ??0EduUriResourcePacket\@\@QEAA\@AEBUEduSharedUriResource\@\@\@Z
     */
    MCAPI EduUriResourcePacket(struct EduSharedUriResource const&);
    // NOLINTEND
};
