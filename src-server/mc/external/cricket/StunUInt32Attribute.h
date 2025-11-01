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

class StunUInt32Attribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6b7fe4;
    // NOLINTEND

public:
    // prevent constructor by default
    StunUInt32Attribute& operator=(StunUInt32Attribute const&);
    StunUInt32Attribute(StunUInt32Attribute const&);
    StunUInt32Attribute();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader* buf) /*override*/;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter* buf) const /*override*/;

    // vIndex: 0
    virtual ~StunUInt32Attribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StunUInt32Attribute(ushort type);

    MCNAPI StunUInt32Attribute(ushort type, uint value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type);

    MCNAPI void* $ctor(ushort type, uint value);
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

}
