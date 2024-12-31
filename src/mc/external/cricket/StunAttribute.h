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
    // vIndex: 0
    virtual ~StunAttribute() = default;

    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const = 0;

    // vIndex: 2
    virtual void SetOwner(::cricket::StunMessage*);

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader*) = 0;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter*) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ConsumePadding(::rtc::ByteBufferReader*) const;

    MCAPI StunAttribute(ushort, ushort);

    MCAPI void WritePadding(::rtc::ByteBufferWriter*) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cricket::StunAttribute*
    Create(::cricket::StunAttributeValueType, ushort, ushort, ::cricket::StunMessage*);

    MCAPI static ::std::unique_ptr<::cricket::StunErrorCodeAttribute> CreateErrorCode();

    MCAPI static ::std::unique_ptr<::cricket::StunUInt16ListAttribute> CreateUInt16ListAttribute(ushort);

    MCAPI static ::std::unique_ptr<::cricket::StunUInt32Attribute> CreateUInt32(ushort);

    MCAPI static ::std::unique_ptr<::cricket::StunUInt16ListAttribute> CreateUnknownAttributes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort, ushort);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
