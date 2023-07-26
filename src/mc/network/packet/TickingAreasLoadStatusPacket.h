#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class TickingAreasLoadStatusPacket : public ::Packet {

public:
    // prevent constructor by default
    TickingAreasLoadStatusPacket& operator=(TickingAreasLoadStatusPacket const&) = delete;
    TickingAreasLoadStatusPacket(TickingAreasLoadStatusPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@TickingAreasLoadStatusPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@TickingAreasLoadStatusPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@TickingAreasLoadStatusPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@TickingAreasLoadStatusPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREASLOADSTATUSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickingAreasLoadStatusPacket(); // NOLINT
#endif
    /**
     * @symbol ??0TickingAreasLoadStatusPacket\@\@QEAA\@XZ
     */
    MCAPI TickingAreasLoadStatusPacket(); // NOLINT
    /**
     * @symbol ??0TickingAreasLoadStatusPacket\@\@QEAA\@_N\@Z
     */
    MCAPI TickingAreasLoadStatusPacket(bool); // NOLINT
};
