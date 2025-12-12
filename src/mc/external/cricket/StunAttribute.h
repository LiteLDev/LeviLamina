#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunErrorCodeAttribute; }
namespace cricket { class StunMessage; }
namespace cricket { class StunUInt16ListAttribute; }
namespace cricket { class StunUInt32Attribute; }
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace cricket {

class StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkb8826f;
    ::ll::UntypedStorage<2, 2> mUnk220355;
    // NOLINTEND

public:
    // prevent constructor by default
    StunAttribute& operator=(StunAttribute const&);
    StunAttribute(StunAttribute const&);
    StunAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StunAttribute();

    virtual ::cricket::StunAttributeValueType value_type() const = 0;

    virtual void SetOwner(::cricket::StunMessage* owner);

    virtual bool Read(::rtc::ByteBufferReader*) = 0;

    virtual bool Write(::rtc::ByteBufferWriter*) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConsumePadding(::rtc::ByteBufferReader* buf) const;

    MCNAPI StunAttribute(ushort type, ushort length);

    MCNAPI void WritePadding(::rtc::ByteBufferWriter* buf) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cricket::StunAttribute*
    Create(::cricket::StunAttributeValueType value_type, ushort type, ushort length, ::cricket::StunMessage* owner);

    MCNAPI static ::std::unique_ptr<::cricket::StunErrorCodeAttribute> CreateErrorCode();

    MCNAPI static ::std::unique_ptr<::cricket::StunUInt16ListAttribute> CreateUInt16ListAttribute(ushort type);

    MCNAPI static ::std::unique_ptr<::cricket::StunUInt32Attribute> CreateUInt32(ushort type);

    MCNAPI static ::std::unique_ptr<::cricket::StunUInt16ListAttribute> CreateUnknownAttributes();
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
    MCNAPI void $SetOwner(::cricket::StunMessage* owner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
