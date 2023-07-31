#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ServerToClientHandshakePacket : public ::Packet {

public:
    // prevent constructor by default
    ServerToClientHandshakePacket& operator=(ServerToClientHandshakePacket const&) = delete;
    ServerToClientHandshakePacket(ServerToClientHandshakePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ServerToClientHandshakePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ServerToClientHandshakePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ServerToClientHandshakePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ServerToClientHandshakePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERTOCLIENTHANDSHAKEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerToClientHandshakePacket();
#endif
    /**
     * @symbol
     * ??0ServerToClientHandshakePacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ServerToClientHandshakePacket(std::string const&);
    /**
     * @symbol ??0ServerToClientHandshakePacket\@\@QEAA\@XZ
     */
    MCAPI ServerToClientHandshakePacket();
    // NOLINTEND
};
