#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ByteBufferReader; }
namespace webrtc { class ByteBufferWriter; }
namespace webrtc { class StunErrorCodeAttribute; }
namespace webrtc { class StunMessage; }
namespace webrtc { class StunUInt16ListAttribute; }
namespace webrtc { class StunUInt32Attribute; }
// clang-format on

namespace webrtc {

class StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkf43ab9;
    ::ll::UntypedStorage<2, 2> mUnkaa2c03;
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

    virtual ::webrtc::StunAttributeValueType value_type() const = 0;

    virtual void SetOwner(::webrtc::StunMessage* owner);

    virtual bool Read(::webrtc::ByteBufferReader* buf) = 0;

    virtual bool Write(::webrtc::ByteBufferWriter* buf) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::StunAttribute*
    Create(::webrtc::StunAttributeValueType value_type, ushort type, ushort length, ::webrtc::StunMessage* owner);

    MCNAPI static ::std::unique_ptr<::webrtc::StunErrorCodeAttribute> CreateErrorCode();

    MCNAPI static ::std::unique_ptr<::webrtc::StunUInt16ListAttribute> CreateUInt16ListAttribute(ushort type);

    MCNAPI static ::std::unique_ptr<::webrtc::StunUInt32Attribute> CreateUInt32(ushort type);

    MCNAPI static ::std::unique_ptr<::webrtc::StunUInt16ListAttribute> CreateUnknownAttributes();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetOwner(::webrtc::StunMessage* owner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
