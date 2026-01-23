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

class StunByteStringAttribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6ed073;
    // NOLINTEND

public:
    // prevent constructor by default
    StunByteStringAttribute& operator=(StunByteStringAttribute const&);
    StunByteStringAttribute(StunByteStringAttribute const&);
    StunByteStringAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StunByteStringAttribute() /*override*/ = default;

    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    virtual bool Read(::rtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::rtc::ByteBufferWriter* buf) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StunByteStringAttribute(ushort type);

    MCNAPI StunByteStringAttribute(ushort type, ::std::string_view str);

    MCNAPI StunByteStringAttribute(ushort type, void const* bytes, uint64 length);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type);

    MCNAPI void* $ctor(ushort type, ::std::string_view str);

    MCNAPI void* $ctor(ushort type, void const* bytes, uint64 length);
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
