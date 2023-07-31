#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PacketViolationWarningPacket : public ::Packet {

public:
    // prevent constructor by default
    PacketViolationWarningPacket& operator=(PacketViolationWarningPacket const&) = delete;
    PacketViolationWarningPacket(PacketViolationWarningPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PacketViolationWarningPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PacketViolationWarningPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PacketViolationWarningPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PacketViolationWarningPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKETVIOLATIONWARNINGPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PacketViolationWarningPacket();
#endif
    /**
     * @symbol ??0PacketViolationWarningPacket\@\@QEAA\@XZ
     */
    MCAPI PacketViolationWarningPacket();
    /**
     * @symbol
     * ??0PacketViolationWarningPacket\@\@QEAA\@AEBVerror_code\@std\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI
    PacketViolationWarningPacket(std::error_code const&, enum class PacketViolationResponse, enum class MinecraftPacketIds, std::string const&);
    // NOLINTEND
};
