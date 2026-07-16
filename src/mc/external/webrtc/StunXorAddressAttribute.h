#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunAddressAttribute.h"
#include "mc/external/webrtc/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ByteBufferReader; }
namespace webrtc { class ByteBufferWriter; }
namespace webrtc { class IPAddress; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StunMessage; }
// clang-format on

namespace webrtc {

class StunXorAddressAttribute : public ::webrtc::StunAddressAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd3c9e2;
    // NOLINTEND

public:
    // prevent constructor by default
    StunXorAddressAttribute& operator=(StunXorAddressAttribute const&);
    StunXorAddressAttribute(StunXorAddressAttribute const&);
    StunXorAddressAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::StunAttributeValueType value_type() const /*override*/;

    virtual void SetOwner(::webrtc::StunMessage* owner) /*override*/;

    virtual bool Read(::webrtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::webrtc::ByteBufferWriter* buf) const /*override*/;

    virtual ~StunXorAddressAttribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::IPAddress GetXoredIP() const;

    MCNAPI StunXorAddressAttribute(ushort type, ::webrtc::SocketAddress const& addr);

    MCNAPI StunXorAddressAttribute(ushort type, ushort length, ::webrtc::StunMessage* owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type, ::webrtc::SocketAddress const& addr);

    MCNAPI void* $ctor(ushort type, ushort length, ::webrtc::StunMessage* owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::StunAttributeValueType $value_type() const;

    MCNAPI void $SetOwner(::webrtc::StunMessage* owner);

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
