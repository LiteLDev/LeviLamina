#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunErrorCodeAttribute; }
namespace cricket { class StunMessage; }
namespace cricket { class StunUInt16ListAttribute; }
namespace cricket { class StunUInt32Attribute; }
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace cricket {

class StunAttribute {
public:
    // prevent constructor by default
    StunAttribute& operator=(StunAttribute const&);
    StunAttribute(StunAttribute const&);
    StunAttribute();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StunAttribute@cricket@@UEAA@XZ
    virtual ~StunAttribute();

    // vIndex: 1, symbol: ?value_type@StunXorAddressAttribute@cricket@@UEBA?AW4StunAttributeValueType@2@XZ
    virtual ::cricket::StunAttributeValueType value_type() const = 0;

    // vIndex: 2, symbol: ?SetOwner@StunAttribute@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void SetOwner(class cricket::StunMessage*);

    // vIndex: 3, symbol: ?Read@StunXorAddressAttribute@cricket@@UEAA_NPEAVByteBufferReader@rtc@@@Z
    virtual bool Read(class rtc::ByteBufferReader*) = 0;

    // vIndex: 4, symbol: ?Write@StunXorAddressAttribute@cricket@@UEBA_NPEAVByteBufferWriter@rtc@@@Z
    virtual bool Write(class rtc::ByteBufferWriter*) const = 0;

    // symbol: ?Create@StunAttribute@cricket@@SAPEAV12@W4StunAttributeValueType@2@GGPEAVStunMessage@2@@Z
    MCAPI static class cricket::StunAttribute*
    Create(::cricket::StunAttributeValueType, ushort, ushort, class cricket::StunMessage*);

    // symbol:
    // ?CreateErrorCode@StunAttribute@cricket@@SA?AV?$unique_ptr@VStunErrorCodeAttribute@cricket@@U?$default_delete@VStunErrorCodeAttribute@cricket@@@std@@@std@@XZ
    MCAPI static std::unique_ptr<class cricket::StunErrorCodeAttribute> CreateErrorCode();

    // symbol:
    // ?CreateUInt16ListAttribute@StunAttribute@cricket@@SA?AV?$unique_ptr@VStunUInt16ListAttribute@cricket@@U?$default_delete@VStunUInt16ListAttribute@cricket@@@std@@@std@@G@Z
    MCAPI static std::unique_ptr<class cricket::StunUInt16ListAttribute> CreateUInt16ListAttribute(ushort);

    // symbol:
    // ?CreateUInt32@StunAttribute@cricket@@SA?AV?$unique_ptr@VStunUInt32Attribute@cricket@@U?$default_delete@VStunUInt32Attribute@cricket@@@std@@@std@@G@Z
    MCAPI static std::unique_ptr<class cricket::StunUInt32Attribute> CreateUInt32(ushort);

    // symbol:
    // ?CreateUnknownAttributes@StunAttribute@cricket@@SA?AV?$unique_ptr@VStunUInt16ListAttribute@cricket@@U?$default_delete@VStunUInt16ListAttribute@cricket@@@std@@@std@@XZ
    MCAPI static std::unique_ptr<class cricket::StunUInt16ListAttribute> CreateUnknownAttributes();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?ConsumePadding@StunAttribute@cricket@@IEBAXPEAVByteBufferReader@rtc@@@Z
    MCAPI void ConsumePadding(class rtc::ByteBufferReader*) const;

    // symbol: ??0StunAttribute@cricket@@IEAA@GG@Z
    MCAPI StunAttribute(ushort, ushort);

    // symbol: ?WritePadding@StunAttribute@cricket@@IEBAXPEAVByteBufferWriter@rtc@@@Z
    MCAPI void WritePadding(class rtc::ByteBufferWriter*) const;

    // NOLINTEND
};

}; // namespace cricket
