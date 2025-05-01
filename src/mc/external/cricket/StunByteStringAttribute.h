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
    // vIndex: 0
    virtual ~StunByteStringAttribute() /*override*/ = default;

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
    MCNAPI void CopyBytes(::std::string_view);

    MCNAPI void CopyBytes(void const*, uint64);

    MCNAPI void SetBytes(uchar*, uint64);

    MCNAPI explicit StunByteStringAttribute(ushort);

    MCNAPI StunByteStringAttribute(ushort, ::std::string_view);

    MCNAPI StunByteStringAttribute(ushort, ushort);

    MCNAPI StunByteStringAttribute(ushort, void const*, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort);

    MCNAPI void* $ctor(ushort, ::std::string_view);

    MCNAPI void* $ctor(ushort, ushort);

    MCNAPI void* $ctor(ushort, void const*, uint64);
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
