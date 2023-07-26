#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PlayerListPacket : public ::Packet {

public:
    // prevent constructor by default
    PlayerListPacket& operator=(PlayerListPacket const&) = delete;
    PlayerListPacket(PlayerListPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerListPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PlayerListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?read\@PlayerListPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PlayerListPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERLISTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerListPacket(); // NOLINT
#endif
    /**
     * @symbol ??0PlayerListPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerListPacket(); // NOLINT
    /**
     * @symbol ?emplace\@PlayerListPacket\@\@QEAAX$$QEAVPlayerListEntry\@\@\@Z
     */
    MCAPI void emplace(class PlayerListEntry&&); // NOLINT
};
