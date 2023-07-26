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

    public:
        // prevent constructor by default
        AttributeData& operator=(AttributeData const&) = delete;
        AttributeData(AttributeData const&)            = delete;
        AttributeData()                                = delete;

    public:
        /**
         * @symbol ??0AttributeData\@UpdateAttributesPacket\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI AttributeData(struct UpdateAttributesPacket::AttributeData&&); // NOLINT
        /**
         * @symbol
         * ?read\@AttributeData\@UpdateAttributesPacket\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
         */
        MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
        /**
         * @symbol ??1AttributeData\@UpdateAttributesPacket\@\@QEAA\@XZ
         */
        MCAPI ~AttributeData(); // NOLINT
    };

public:
    // prevent constructor by default
    UpdateAttributesPacket& operator=(UpdateAttributesPacket const&) = delete;
    UpdateAttributesPacket(UpdateAttributesPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateAttributesPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateAttributesPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateAttributesPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateAttributesPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEATTRIBUTESPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateAttributesPacket(); // NOLINT
#endif
    /**
     * @symbol ??0UpdateAttributesPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateAttributesPacket(); // NOLINT
    /**
     * @symbol
     * ??0UpdateAttributesPacket\@\@QEAA\@AEBVActor\@\@AEBV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI UpdateAttributesPacket(class Actor const&, std::vector<class AttributeInstanceHandle> const&); // NOLINT
};
