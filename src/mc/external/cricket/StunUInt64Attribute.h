#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttribute.h"
#include "mc/external/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace cricket {

class StunUInt64Attribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2fa924;
    // NOLINTEND

public:
    // prevent constructor by default
    StunUInt64Attribute& operator=(StunUInt64Attribute const&);
    StunUInt64Attribute(StunUInt64Attribute const&);
    StunUInt64Attribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    virtual bool Read(::rtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::rtc::ByteBufferWriter* buf) const /*override*/;

    virtual ~StunUInt64Attribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StunUInt64Attribute(ushort type, uint64 value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type, uint64 value);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::StunAttributeValueType $value_type() const;

    MCNAPI bool $Read(::rtc::ByteBufferReader* buf);

    MCNAPI bool $Write(::rtc::ByteBufferWriter* buf) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
