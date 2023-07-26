#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ContainerSetDataPacket : public ::Packet {

public:
    // prevent constructor by default
    ContainerSetDataPacket& operator=(ContainerSetDataPacket const&) = delete;
    ContainerSetDataPacket(ContainerSetDataPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@ContainerSetDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ContainerSetDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@ContainerSetDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ContainerSetDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSETDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerSetDataPacket(); // NOLINT
#endif
    /**
     * @symbol ??0ContainerSetDataPacket\@\@QEAA\@XZ
     */
    MCAPI ContainerSetDataPacket(); // NOLINT
    /**
     * @symbol ??0ContainerSetDataPacket\@\@QEAA\@W4ContainerID\@\@HH\@Z
     */
    MCAPI ContainerSetDataPacket(enum class ContainerID, int, int); // NOLINT
};
