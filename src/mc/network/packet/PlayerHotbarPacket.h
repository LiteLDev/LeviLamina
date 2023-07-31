#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PlayerHotbarPacket : public ::Packet {

public:
    // prevent constructor by default
    PlayerHotbarPacket& operator=(PlayerHotbarPacket const&) = delete;
    PlayerHotbarPacket(PlayerHotbarPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerHotbarPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PlayerHotbarPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerHotbarPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PlayerHotbarPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERHOTBARPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerHotbarPacket();
#endif
    /**
     * @symbol ??0PlayerHotbarPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerHotbarPacket();
    /**
     * @symbol ??0PlayerHotbarPacket\@\@QEAA\@IW4ContainerID\@\@_N\@Z
     */
    MCAPI PlayerHotbarPacket(unsigned int, enum class ContainerID, bool);
    // NOLINTEND
};
