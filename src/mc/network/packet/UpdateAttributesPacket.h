#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
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
        AttributeData& operator=(AttributeData const&);
        AttributeData(AttributeData const&);
        AttributeData();

    public:
        // NOLINTBEGIN
        // symbol: ??0AttributeData@UpdateAttributesPacket@@QEAA@$$QEAU01@@Z
        MCAPI AttributeData(struct UpdateAttributesPacket::AttributeData&&);

        // symbol:
        // ?read@AttributeData@UpdateAttributesPacket@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
        MCAPI class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);

        // symbol: ??1AttributeData@UpdateAttributesPacket@@QEAA@XZ
        MCAPI ~AttributeData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    UpdateAttributesPacket& operator=(UpdateAttributesPacket const&);
    UpdateAttributesPacket(UpdateAttributesPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@UpdateAttributesPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateAttributesPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdateAttributesPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@UpdateAttributesPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1UpdateAttributesPacket@@UEAA@XZ
    MCVAPI ~UpdateAttributesPacket();

    // symbol: ??0UpdateAttributesPacket@@QEAA@XZ
    MCAPI UpdateAttributesPacket();

    // symbol:
    // ??0UpdateAttributesPacket@@QEAA@AEBVActor@@AEBV?$vector@VAttributeInstanceHandle@@V?$allocator@VAttributeInstanceHandle@@@std@@@std@@@Z
    MCAPI UpdateAttributesPacket(class Actor const&, std::vector<class AttributeInstanceHandle> const&);

    // NOLINTEND
};
