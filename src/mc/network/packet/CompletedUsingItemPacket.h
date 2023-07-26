#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CompletedUsingItemPacket : public ::Packet {

public:
    // prevent constructor by default
    CompletedUsingItemPacket& operator=(CompletedUsingItemPacket const&) = delete;
    CompletedUsingItemPacket(CompletedUsingItemPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@CompletedUsingItemPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CompletedUsingItemPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@CompletedUsingItemPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CompletedUsingItemPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPLETEDUSINGITEMPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CompletedUsingItemPacket(); // NOLINT
#endif
    /**
     * @symbol ??0CompletedUsingItemPacket\@\@QEAA\@XZ
     */
    MCAPI CompletedUsingItemPacket(); // NOLINT
    /**
     * @symbol ??0CompletedUsingItemPacket\@\@QEAA\@FH\@Z
     */
    MCAPI CompletedUsingItemPacket(short, int); // NOLINT
};
