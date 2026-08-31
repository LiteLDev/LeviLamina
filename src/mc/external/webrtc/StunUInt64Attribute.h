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

class StunUInt64Attribute : public ::webrtc::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk14e4df;
    // NOLINTEND

public:
    // prevent constructor by default
    StunUInt64Attribute& operator=(StunUInt64Attribute const&);
    StunUInt64Attribute(StunUInt64Attribute const&);
    StunUInt64Attribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::StunAttributeValueType value_type() const /*override*/;

    virtual bool Read(::webrtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::webrtc::ByteBufferWriter* buf) const /*override*/;

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
