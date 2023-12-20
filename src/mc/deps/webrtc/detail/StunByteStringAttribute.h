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

class StunByteStringAttribute : public ::cricket::StunAttribute {
public:
    // prevent constructor by default
    StunByteStringAttribute& operator=(StunByteStringAttribute const&);
    StunByteStringAttribute(StunByteStringAttribute const&);
    StunByteStringAttribute();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StunByteStringAttribute@cricket@@UEAA@XZ
    virtual ~StunByteStringAttribute();

    // vIndex: 1, symbol: ?value_type@StunByteStringAttribute@cricket@@UEBA?AW4StunAttributeValueType@2@XZ
    virtual ::cricket::StunAttributeValueType value_type() const;

    // vIndex: 3, symbol: ?Read@StunByteStringAttribute@cricket@@UEAA_NPEAVByteBufferReader@rtc@@@Z
    virtual bool Read(class rtc::ByteBufferReader*);

    // vIndex: 4, symbol: ?Write@StunByteStringAttribute@cricket@@UEBA_NPEAVByteBufferWriter@rtc@@@Z
    virtual bool Write(class rtc::ByteBufferWriter*) const;

    // symbol: ?CopyBytes@StunByteStringAttribute@cricket@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void CopyBytes(std::string_view);

    // symbol: ?CopyBytes@StunByteStringAttribute@cricket@@QEAAXPEBX_K@Z
    MCAPI void CopyBytes(void const*, uint64);

    // symbol: ??0StunByteStringAttribute@cricket@@QEAA@G@Z
    MCAPI explicit StunByteStringAttribute(ushort);

    // symbol: ??0StunByteStringAttribute@cricket@@QEAA@GV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI StunByteStringAttribute(ushort, std::string_view);

    // symbol: ??0StunByteStringAttribute@cricket@@QEAA@GG@Z
    MCAPI StunByteStringAttribute(ushort, ushort);

    // symbol: ??0StunByteStringAttribute@cricket@@QEAA@GPEBX_K@Z
    MCAPI StunByteStringAttribute(ushort, void const*, uint64);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SetBytes@StunByteStringAttribute@cricket@@AEAAXPEAD_K@Z
    MCAPI void SetBytes(char*, uint64);

    // NOLINTEND
};

}; // namespace cricket
