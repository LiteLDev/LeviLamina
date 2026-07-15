#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunAttribute.h"
#include "mc/external/webrtc/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ByteBufferReader; }
namespace webrtc { class ByteBufferWriter; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class StunAddressAttribute : public ::webrtc::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkad52a8;
    // NOLINTEND

public:
    // prevent constructor by default
    StunAddressAttribute& operator=(StunAddressAttribute const&);
    StunAddressAttribute(StunAddressAttribute const&);
    StunAddressAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::StunAttributeValueType value_type() const /*override*/;

    virtual bool Read(::webrtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::webrtc::ByteBufferWriter* buf) const /*override*/;

    virtual ~StunAddressAttribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetAddress(::webrtc::SocketAddress const& addr);

    MCNAPI StunAddressAttribute(ushort type, ushort length);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type, ushort length);
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
