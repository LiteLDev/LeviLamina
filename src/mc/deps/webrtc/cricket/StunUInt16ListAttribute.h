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

class StunUInt16ListAttribute : public ::cricket::StunAttribute {
public:
    // prevent constructor by default
    StunUInt16ListAttribute& operator=(StunUInt16ListAttribute const&);
    StunUInt16ListAttribute(StunUInt16ListAttribute const&);
    StunUInt16ListAttribute();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StunUInt16ListAttribute@cricket@@UEAA@XZ
    virtual ~StunUInt16ListAttribute();

    // vIndex: 1, symbol: ?value_type@StunUInt16ListAttribute@cricket@@UEBA?AW4StunAttributeValueType@2@XZ
    virtual ::cricket::StunAttributeValueType value_type() const;

    // vIndex: 3, symbol: ?Read@StunUInt16ListAttribute@cricket@@UEAA_NPEAVByteBufferReader@rtc@@@Z
    virtual bool Read(class rtc::ByteBufferReader*);

    // vIndex: 4, symbol: ?Write@StunUInt16ListAttribute@cricket@@UEBA_NPEAVByteBufferWriter@rtc@@@Z
    virtual bool Write(class rtc::ByteBufferWriter*) const;

    // symbol: ?AddType@StunUInt16ListAttribute@cricket@@QEAAXG@Z
    MCAPI void AddType(ushort);

    // symbol: ?AddTypeAtIndex@StunUInt16ListAttribute@cricket@@QEAAXGG@Z
    MCAPI void AddTypeAtIndex(ushort, ushort);

    // symbol: ?GetType@StunUInt16ListAttribute@cricket@@QEBAGH@Z
    MCAPI ushort GetType(int) const;

    // symbol: ?Size@StunUInt16ListAttribute@cricket@@QEBA_KXZ
    MCAPI uint64 Size() const;

    // symbol: ??0StunUInt16ListAttribute@cricket@@QEAA@GG@Z
    MCAPI StunUInt16ListAttribute(ushort, ushort);

    // NOLINTEND
};

}; // namespace cricket
