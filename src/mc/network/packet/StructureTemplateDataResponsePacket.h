#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class StructureTemplateDataResponsePacket : public ::Packet {

public:
    // prevent constructor by default
    StructureTemplateDataResponsePacket& operator=(StructureTemplateDataResponsePacket const&) = delete;
    StructureTemplateDataResponsePacket(StructureTemplateDataResponsePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@StructureTemplateDataResponsePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@StructureTemplateDataResponsePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@StructureTemplateDataResponsePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@StructureTemplateDataResponsePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATEDATARESPONSEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureTemplateDataResponsePacket();
#endif
    /**
     * @symbol
     * ??0StructureTemplateDataResponsePacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@2\@W4StructureTemplateResponseType\@\@\@Z
     */
    MCAPI StructureTemplateDataResponsePacket(
        std::string const&,
        std::unique_ptr<class CompoundTag>,
        enum class StructureTemplateResponseType
    );
    /**
     * @symbol ??0StructureTemplateDataResponsePacket\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateDataResponsePacket();
    /**
     * @symbol ??4StructureTemplateDataResponsePacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class StructureTemplateDataResponsePacket& operator=(class StructureTemplateDataResponsePacket&&);
    // NOLINTEND
};
