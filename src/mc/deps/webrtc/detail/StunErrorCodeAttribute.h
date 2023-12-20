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

class StunErrorCodeAttribute : public ::cricket::StunAttribute {
public:
    // prevent constructor by default
    StunErrorCodeAttribute& operator=(StunErrorCodeAttribute const&);
    StunErrorCodeAttribute(StunErrorCodeAttribute const&);
    StunErrorCodeAttribute();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StunErrorCodeAttribute@cricket@@UEAA@XZ
    virtual ~StunErrorCodeAttribute();

    // vIndex: 1, symbol: ?value_type@StunErrorCodeAttribute@cricket@@UEBA?AW4StunAttributeValueType@2@XZ
    virtual ::cricket::StunAttributeValueType value_type() const;

    // vIndex: 3, symbol: ?Read@StunErrorCodeAttribute@cricket@@UEAA_NPEAVByteBufferReader@rtc@@@Z
    virtual bool Read(class rtc::ByteBufferReader*);

    // vIndex: 4, symbol: ?Write@StunErrorCodeAttribute@cricket@@UEBA_NPEAVByteBufferWriter@rtc@@@Z
    virtual bool Write(class rtc::ByteBufferWriter*) const;

    // symbol: ?SetCode@StunErrorCodeAttribute@cricket@@QEAAXH@Z
    MCAPI void SetCode(int);

    // symbol:
    // ?SetReason@StunErrorCodeAttribute@cricket@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void SetReason(std::string const&);

    // symbol: ??0StunErrorCodeAttribute@cricket@@QEAA@GG@Z
    MCAPI StunErrorCodeAttribute(ushort, ushort);

    // symbol: ?code@StunErrorCodeAttribute@cricket@@QEBAHXZ
    MCAPI int code() const;

    // symbol: ?MIN_SIZE@StunErrorCodeAttribute@cricket@@2GB
    MCAPI static ushort const MIN_SIZE;

    // NOLINTEND
};

}; // namespace cricket
