#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class RespawnPacket : public ::Packet {

public:
    // prevent constructor by default
    RespawnPacket& operator=(RespawnPacket const&) = delete;
    RespawnPacket(RespawnPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@RespawnPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@RespawnPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@RespawnPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@RespawnPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESPAWNPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RespawnPacket();
#endif
    /**
     * @symbol ??0RespawnPacket\@\@QEAA\@AEBVVec3\@\@AEBW4PlayerRespawnState\@\@\@Z
     */
    MCAPI RespawnPacket(class Vec3 const&, enum class PlayerRespawnState const&);
    /**
     * @symbol ??0RespawnPacket\@\@QEAA\@XZ
     */
    MCAPI RespawnPacket();
    // NOLINTEND
};
