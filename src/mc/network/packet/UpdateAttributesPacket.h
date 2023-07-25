#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdateAttributesPacket : public ::Packet {
public:
    // UpdateAttributesPacket inner types declare
    // clang-format off
    struct AttributeData;
    // clang-format on

    // UpdateAttributesPacket inner types define
    struct AttributeData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEATTRIBUTESPACKET_ATTRIBUTEDATA
    public:
        AttributeData& operator=(AttributeData const&) = delete;
        AttributeData(AttributeData const&)            = delete;
        AttributeData()                                = delete;
#endif

    public:
        /**
         * @symbol ??0AttributeData\@UpdateAttributesPacket\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI AttributeData(struct UpdateAttributesPacket::AttributeData&&);
        /**
         * @symbol
         * ?read\@AttributeData\@UpdateAttributesPacket\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
         */
        MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&);
        /**
         * @symbol ??1AttributeData\@UpdateAttributesPacket\@\@QEAA\@XZ
         */
        MCAPI ~AttributeData();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEATTRIBUTESPACKET
public:
    UpdateAttributesPacket& operator=(UpdateAttributesPacket const&) = delete;
    UpdateAttributesPacket(UpdateAttributesPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateAttributesPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateAttributesPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateAttributesPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateAttributesPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEATTRIBUTESPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateAttributesPacket();
#endif
    /**
     * @symbol ??0UpdateAttributesPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateAttributesPacket();
    /**
     * @symbol
     * ??0UpdateAttributesPacket\@\@QEAA\@AEBVActor\@\@AEBV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI UpdateAttributesPacket(class Actor const&, std::vector<class AttributeInstanceHandle> const&);
};
