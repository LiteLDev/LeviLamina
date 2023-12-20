#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/StunAttribute.h"
#include "mc/deps/webrtc/detail/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunAttribute; }
namespace cricket { class StunMessage; }
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace cricket {

class StunUInt64Attribute : public ::cricket::StunAttribute {
public:
    // prevent constructor by default
    StunUInt64Attribute& operator=(StunUInt64Attribute const&);
    StunUInt64Attribute(StunUInt64Attribute const&);
    StunUInt64Attribute();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StunUInt64Attribute@cricket@@UEAA@XZ
    virtual ~StunUInt64Attribute() = default;

    // vIndex: 1, symbol: ?value_type@StunUInt64Attribute@cricket@@UEBA?AW4StunAttributeValueType@2@XZ
    virtual ::cricket::StunAttributeValueType value_type() const;

    // vIndex: 3, symbol: ?Read@StunUInt64Attribute@cricket@@UEAA_NPEAVByteBufferReader@rtc@@@Z
    virtual bool Read(class rtc::ByteBufferReader*);

    // vIndex: 4, symbol: ?Write@StunUInt64Attribute@cricket@@UEBA_NPEAVByteBufferWriter@rtc@@@Z
    virtual bool Write(class rtc::ByteBufferWriter*) const;

    // symbol: ??0StunUInt64Attribute@cricket@@QEAA@G@Z
    MCAPI explicit StunUInt64Attribute(ushort);

    // symbol: ??0StunUInt64Attribute@cricket@@QEAA@G_K@Z
    MCAPI StunUInt64Attribute(ushort, uint64);

    // NOLINTEND
};

}; // namespace cricket
