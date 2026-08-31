#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunAttribute.h"
#include "mc/external/webrtc/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ByteBufferReader; }
namespace webrtc { class ByteBufferWriter; }
// clang-format on

namespace webrtc {

class StunUInt32Attribute : public ::webrtc::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf8968d;
    // NOLINTEND

public:
    // prevent constructor by default
    StunUInt32Attribute& operator=(StunUInt32Attribute const&);
    StunUInt32Attribute(StunUInt32Attribute const&);
    StunUInt32Attribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::StunAttributeValueType value_type() const /*override*/;

    virtual bool Read(::webrtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::webrtc::ByteBufferWriter* buf) const /*override*/;

    virtual ~StunUInt32Attribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StunUInt32Attribute(ushort type, uint value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type, uint value);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::StunAttributeValueType $value_type() const;

    MCNAPI bool $Read(::webrtc::ByteBufferReader* buf);

    MCNAPI bool $Write(::webrtc::ByteBufferWriter* buf) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
