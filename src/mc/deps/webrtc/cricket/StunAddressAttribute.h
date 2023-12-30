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
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunAddressAttribute : public ::cricket::StunAttribute {
public:
    // prevent constructor by default
    StunAddressAttribute& operator=(StunAddressAttribute const&);
    StunAddressAttribute(StunAddressAttribute const&);
    StunAddressAttribute();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StunAddressAttribute@cricket@@UEAA@XZ
    virtual ~StunAddressAttribute() = default;

    // vIndex: 1, symbol: ?value_type@StunAddressAttribute@cricket@@UEBA?AW4StunAttributeValueType@2@XZ
    virtual ::cricket::StunAttributeValueType value_type() const;

    // vIndex: 3, symbol: ?Read@StunAddressAttribute@cricket@@UEAA_NPEAVByteBufferReader@rtc@@@Z
    virtual bool Read(class rtc::ByteBufferReader*);

    // vIndex: 4, symbol: ?Write@StunAddressAttribute@cricket@@UEBA_NPEAVByteBufferWriter@rtc@@@Z
    virtual bool Write(class rtc::ByteBufferWriter*) const;

    // symbol: ?SetAddress@StunAddressAttribute@cricket@@QEAAXAEBVSocketAddress@rtc@@@Z
    MCAPI void SetAddress(class rtc::SocketAddress const&);

    // symbol: ??0StunAddressAttribute@cricket@@QEAA@GAEBVSocketAddress@rtc@@@Z
    MCAPI StunAddressAttribute(ushort, class rtc::SocketAddress const&);

    // symbol: ??0StunAddressAttribute@cricket@@QEAA@GG@Z
    MCAPI StunAddressAttribute(ushort, ushort);

    // NOLINTEND
};

}; // namespace cricket
