#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PlayerStartItemCooldownPacket : public ::Packet {

public:
    // prevent constructor by default
    PlayerStartItemCooldownPacket& operator=(PlayerStartItemCooldownPacket const&) = delete;
    PlayerStartItemCooldownPacket(PlayerStartItemCooldownPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerStartItemCooldownPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PlayerStartItemCooldownPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerStartItemCooldownPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PlayerStartItemCooldownPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERSTARTITEMCOOLDOWNPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerStartItemCooldownPacket(); // NOLINT
#endif
    /**
     * @symbol
     * ??0PlayerStartItemCooldownPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI PlayerStartItemCooldownPacket(std::string const&, int); // NOLINT
    /**
     * @symbol ??0PlayerStartItemCooldownPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerStartItemCooldownPacket(); // NOLINT
};
