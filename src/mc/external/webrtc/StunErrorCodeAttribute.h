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

class StunErrorCodeAttribute : public ::webrtc::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkca1f15;
    ::ll::UntypedStorage<1, 1>  mUnk6c9277;
    ::ll::UntypedStorage<8, 32> mUnk9e7789;
    // NOLINTEND

public:
    // prevent constructor by default
    StunErrorCodeAttribute& operator=(StunErrorCodeAttribute const&);
    StunErrorCodeAttribute(StunErrorCodeAttribute const&);
    StunErrorCodeAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StunErrorCodeAttribute() /*override*/ = default;

    virtual ::webrtc::StunAttributeValueType value_type() const /*override*/;

    virtual bool Read(::webrtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::webrtc::ByteBufferWriter* buf) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetCode(int code);

    MCNAPI void SetReason(::std::string const& reason);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ushort const& MIN_SIZE();
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
