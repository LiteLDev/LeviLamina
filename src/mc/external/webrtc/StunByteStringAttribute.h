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

class StunByteStringAttribute : public ::webrtc::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk69d744;
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

    virtual ::webrtc::StunAttributeValueType value_type() const /*override*/;

    virtual bool Read(::webrtc::ByteBufferReader* buf) /*override*/;

    virtual bool Write(::webrtc::ByteBufferWriter* buf) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::vector<uint>> GetUInt32Vector() const;

    MCNAPI explicit StunByteStringAttribute(ushort type);

    MCNAPI StunByteStringAttribute(ushort type, ::std::string_view str);

    MCNAPI StunByteStringAttribute(ushort type, ::std::vector<uint> const& values);

    MCNAPI StunByteStringAttribute(ushort type, void const* bytes, uint64 length);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort type);

    MCNAPI void* $ctor(ushort type, ::std::string_view str);

    MCNAPI void* $ctor(ushort type, ::std::vector<uint> const& values);

    MCNAPI void* $ctor(ushort type, void const* bytes, uint64 length);
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
