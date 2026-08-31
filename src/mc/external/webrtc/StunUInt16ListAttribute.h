#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunAttribute.h"
#include "mc/external/webrtc/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ByteBufferReader; }
namespace webrtc { class ByteBufferWriter; }
// clang-format on

namespace webrtc {

class StunUInt16ListAttribute : public ::webrtc::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8505f4;
    // NOLINTEND

public:
    // prevent constructor by default
    StunUInt16ListAttribute& operator=(StunUInt16ListAttribute const&);
    StunUInt16ListAttribute(StunUInt16ListAttribute const&);
    StunUInt16ListAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StunUInt16ListAttribute() /*override*/ = default;

    virtual ::webrtc::StunAttributeValueType value_type() const /*override*/;

    virtual bool Read(::webrtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::webrtc::ByteBufferWriter* buf) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddType(ushort value);

    MCNAPI void AddTypeAtIndex(ushort index, ushort value);

    MCNAPI ushort GetType(int index) const;

    MCNAPI uint64 Size() const;

    MCNAPI StunUInt16ListAttribute(ushort type, ushort length);
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
