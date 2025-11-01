#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAddressAttribute.h"
#include "mc/external/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
namespace rtc { class IPAddress; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunXorAddressAttribute : public ::cricket::StunAddressAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk78c938;
    // NOLINTEND

public:
    // prevent constructor by default
    StunXorAddressAttribute& operator=(StunXorAddressAttribute const&);
    StunXorAddressAttribute(StunXorAddressAttribute const&);
    StunXorAddressAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    // vIndex: 2
    virtual void SetOwner(::cricket::StunMessage* owner) /*override*/;

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader* buf) /*override*/;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter* buf) const /*override*/;

    // vIndex: 0
    virtual ~StunXorAddressAttribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::IPAddress GetXoredIP() const;

    MCNAPI StunXorAddressAttribute(ushort type, ::rtc::SocketAddress const& addr);

    MCNAPI StunXorAddressAttribute(ushort type, ushort length, ::cricket::StunMessage* owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type, ::rtc::SocketAddress const& addr);

    MCNAPI void* $ctor(ushort type, ushort length, ::cricket::StunMessage* owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::StunAttributeValueType $value_type() const;

    MCNAPI void $SetOwner(::cricket::StunMessage* owner);

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
