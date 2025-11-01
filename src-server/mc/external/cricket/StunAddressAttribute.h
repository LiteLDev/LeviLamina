#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttribute.h"
#include "mc/external/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunAddressAttribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnka0a52e;
    // NOLINTEND

public:
    // prevent constructor by default
    StunAddressAttribute& operator=(StunAddressAttribute const&);
    StunAddressAttribute(StunAddressAttribute const&);
    StunAddressAttribute();

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
    virtual ~StunAddressAttribute() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetAddress(::rtc::SocketAddress const& addr);

    MCNAPI StunAddressAttribute(ushort type, ::rtc::SocketAddress const& addr);

    MCNAPI StunAddressAttribute(ushort type, ushort length);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type, ::rtc::SocketAddress const& addr);

    MCNAPI void* $ctor(ushort type, ushort length);
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
