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

class StunErrorCodeAttribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk586d8a;
    ::ll::UntypedStorage<1, 1> mUnkf1d12f;
    ::ll::UntypedStorage<8, 32> mUnkc2babc;
    // NOLINTEND

public:
    // prevent constructor by default
    StunErrorCodeAttribute& operator=(StunErrorCodeAttribute const&);
    StunErrorCodeAttribute(StunErrorCodeAttribute const&);
    StunErrorCodeAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StunErrorCodeAttribute() /*override*/;

    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader* buf) /*override*/;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter* buf) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetCode(int code);

    MCNAPI void SetReason(::std::string const& reason);

    MCNAPI StunErrorCodeAttribute(ushort type, ushort length);

    MCNAPI int code() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ushort const& MIN_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type, ushort length);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
