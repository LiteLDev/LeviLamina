#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class DimensionDataPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDATAPACKET
public:
    DimensionDataPacket& operator=(DimensionDataPacket const&) = delete;
    DimensionDataPacket(DimensionDataPacket const&)            = delete;
    DimensionDataPacket()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@DimensionDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@DimensionDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@DimensionDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@DimensionDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSIONDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DimensionDataPacket();
#endif
    /**
     * @symbol ??0DimensionDataPacket\@\@QEAA\@AEBVDimensionDefinitionGroup\@\@\@Z
     */
    MCAPI DimensionDataPacket(class DimensionDefinitionGroup const&);
};
