#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CommandBlockUpdatePacket : public ::Packet {

public:
    // prevent constructor by default
    CommandBlockUpdatePacket& operator=(CommandBlockUpdatePacket const&) = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@CommandBlockUpdatePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CommandBlockUpdatePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@CommandBlockUpdatePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CommandBlockUpdatePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCKUPDATEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandBlockUpdatePacket(); // NOLINT
#endif
    /**
     * @symbol ??0CommandBlockUpdatePacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const&); // NOLINT
    /**
     * @symbol ??0CommandBlockUpdatePacket\@\@QEAA\@XZ
     */
    MCAPI CommandBlockUpdatePacket(); // NOLINT
};
