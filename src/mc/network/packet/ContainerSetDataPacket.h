#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class ContainerSetDataPacket : public ::Packet {

public:
    int32_t         mId;          // this+0x30
    int32_t         mValue;       // this+0x34
    ContainerID mContainerId; // this+0x38

    // prevent constructor by default
    ContainerSetDataPacket& operator=(ContainerSetDataPacket const&) = delete;
    ContainerSetDataPacket(ContainerSetDataPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ContainerSetDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ContainerSetDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ContainerSetDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ContainerSetDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSETDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerSetDataPacket();
#endif
    /**
     * @symbol ??0ContainerSetDataPacket\@\@QEAA\@XZ
     */
    MCAPI ContainerSetDataPacket();
    /**
     * @symbol ??0ContainerSetDataPacket\@\@QEAA\@W4ContainerID\@\@HH\@Z
     */
    MCAPI ContainerSetDataPacket(enum class ContainerID, int32_t, int32_t);
    // NOLINTEND
};
