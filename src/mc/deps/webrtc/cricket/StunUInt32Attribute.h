#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/StunAttribute.h"
#include "mc/deps/webrtc/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunAttribute; }
namespace cricket { class StunMessage; }
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace cricket {

class StunUInt32Attribute : public ::cricket::StunAttribute {
public:
    // prevent constructor by default
    StunUInt32Attribute& operator=(StunUInt32Attribute const&);
    StunUInt32Attribute(StunUInt32Attribute const&);
    StunUInt32Attribute();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StunUInt32Attribute@cricket@@UEAA@XZ
    virtual ~StunUInt32Attribute() = default;

    // vIndex: 1, symbol: ?value_type@StunUInt32Attribute@cricket@@UEBA?AW4StunAttributeValueType@2@XZ
    virtual ::cricket::StunAttributeValueType value_type() const;

    // vIndex: 3, symbol: ?Read@StunUInt32Attribute@cricket@@UEAA_NPEAVByteBufferReader@rtc@@@Z
    virtual bool Read(class rtc::ByteBufferReader*);

    // vIndex: 4, symbol: ?Write@StunUInt32Attribute@cricket@@UEBA_NPEAVByteBufferWriter@rtc@@@Z
    virtual bool Write(class rtc::ByteBufferWriter*) const;

    // symbol: ??0StunUInt32Attribute@cricket@@QEAA@G@Z
    MCAPI explicit StunUInt32Attribute(ushort);

    // symbol: ??0StunUInt32Attribute@cricket@@QEAA@GI@Z
    MCAPI StunUInt32Attribute(ushort, uint);

    // NOLINTEND
};

}; // namespace cricket
