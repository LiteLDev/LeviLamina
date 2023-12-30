#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/StunAddressAttribute.h"
#include "mc/deps/webrtc/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunAddressAttribute; }
namespace cricket { class StunMessage; }
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
namespace rtc { class IPAddress; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunXorAddressAttribute : public ::cricket::StunAddressAttribute {
public:
    // prevent constructor by default
    StunXorAddressAttribute& operator=(StunXorAddressAttribute const&);
    StunXorAddressAttribute(StunXorAddressAttribute const&);
    StunXorAddressAttribute();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StunXorAddressAttribute@cricket@@UEAA@XZ
    virtual ~StunXorAddressAttribute() = default;

    // vIndex: 1, symbol: ?value_type@StunXorAddressAttribute@cricket@@UEBA?AW4StunAttributeValueType@2@XZ
    virtual ::cricket::StunAttributeValueType value_type() const;

    // vIndex: 2, symbol: ?SetOwner@StunXorAddressAttribute@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void SetOwner(class cricket::StunMessage*);

    // vIndex: 3, symbol: ?Read@StunXorAddressAttribute@cricket@@UEAA_NPEAVByteBufferReader@rtc@@@Z
    virtual bool Read(class rtc::ByteBufferReader*);

    // vIndex: 4, symbol: ?Write@StunXorAddressAttribute@cricket@@UEBA_NPEAVByteBufferWriter@rtc@@@Z
    virtual bool Write(class rtc::ByteBufferWriter*) const;

    // symbol: ??0StunXorAddressAttribute@cricket@@QEAA@GAEBVSocketAddress@rtc@@@Z
    MCAPI StunXorAddressAttribute(ushort, class rtc::SocketAddress const&);

    // symbol: ??0StunXorAddressAttribute@cricket@@QEAA@GGPEAVStunMessage@1@@Z
    MCAPI StunXorAddressAttribute(ushort, ushort, class cricket::StunMessage*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GetXoredIP@StunXorAddressAttribute@cricket@@AEBA?AVIPAddress@rtc@@XZ
    MCAPI class rtc::IPAddress GetXoredIP() const;

    // NOLINTEND
};

}; // namespace cricket
