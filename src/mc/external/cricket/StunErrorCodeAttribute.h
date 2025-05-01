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
    ::ll::UntypedStorage<1, 1>  mUnk586d8a;
    ::ll::UntypedStorage<1, 1>  mUnkf1d12f;
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
    virtual ~StunErrorCodeAttribute() /*override*/ = default;

    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader*) /*override*/;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter*) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetCode(int);

    MCNAPI void SetReason(::std::string const&);

    MCNAPI StunErrorCodeAttribute(ushort, ushort);

    MCNAPI int code() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ushort const& MIN_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort, ushort);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
