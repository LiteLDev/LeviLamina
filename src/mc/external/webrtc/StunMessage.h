#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ByteBufferReader; }
namespace webrtc { class ByteBufferWriter; }
namespace webrtc { class StunAddressAttribute; }
namespace webrtc { class StunAttribute; }
namespace webrtc { class StunByteStringAttribute; }
namespace webrtc { class StunErrorCodeAttribute; }
namespace webrtc { class StunUInt16ListAttribute; }
namespace webrtc { class StunUInt32Attribute; }
namespace webrtc { class StunUInt64Attribute; }
// clang-format on

namespace webrtc {

class StunMessage {
public:
    // StunMessage inner types define
    enum class IntegrityStatus : int {
        KNotSet       = 0,
        KNoIntegrity  = 1,
        KIntegrityOk  = 2,
        KIntegrityBad = 3,
        KMaxValue     = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke360d5;
    ::ll::UntypedStorage<2, 2>  mUnkb92ee5;
    ::ll::UntypedStorage<2, 2>  mUnkf95a37;
    ::ll::UntypedStorage<8, 32> mUnk8db532;
    ::ll::UntypedStorage<4, 4>  mUnkedd6d1;
    ::ll::UntypedStorage<4, 4>  mUnk8b225e;
    ::ll::UntypedStorage<8, 32> mUnkf62ac6;
    ::ll::UntypedStorage<4, 4>  mUnk1cc88b;
    ::ll::UntypedStorage<8, 32> mUnk50cc20;
    // NOLINTEND

public:
    // prevent constructor by default
    StunMessage& operator=(StunMessage const&);
    StunMessage(StunMessage const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StunMessage();

    virtual ::webrtc::StunMessage* CreateNew() const;

    virtual ::webrtc::StunAttributeValueType GetAttributeValueType(int type) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAttribute(::std::unique_ptr<::webrtc::StunAttribute> attr);

    MCNAPI bool AddFingerprint();

    MCNAPI bool AddMessageIntegrity(::std::string_view password);

    MCNAPI bool AddMessageIntegrity32(::std::string_view password);

    MCNAPI bool AddMessageIntegrityOfType(int attr_type, uint64 attr_size, ::std::string_view key);

    MCNAPI ::std::unique_ptr<::webrtc::StunMessage> Clone() const;

    MCNAPI bool
    EqualAttributes(::webrtc::StunMessage const* other, ::std::function<bool(int)> attribute_type_mask) const;

    MCNAPI ::webrtc::StunAddressAttribute const* GetAddress(int type) const;

    MCNAPI ::webrtc::StunByteStringAttribute const* GetByteString(int type) const;

    MCNAPI ::webrtc::StunErrorCodeAttribute const* GetErrorCode() const;

    MCNAPI int GetErrorCodeValue() const;

    MCNAPI ::std::vector<ushort> GetNonComprehendedAttributes() const;

    MCNAPI ::webrtc::StunUInt16ListAttribute const* GetUInt16List(int type) const;

    MCNAPI ::webrtc::StunUInt32Attribute const* GetUInt32(int type) const;

    MCNAPI ::webrtc::StunUInt64Attribute const* GetUInt64(int type) const;

    MCNAPI bool Read(::webrtc::ByteBufferReader* buf);

    MCNAPI ::webrtc::StunMessage::IntegrityStatus RevalidateMessageIntegrity(::std::string const& password);

    MCNAPI StunMessage();

    MCNAPI explicit StunMessage(ushort type);

    MCNAPI StunMessage(ushort type, ::std::string_view transaction_id);

    MCNAPI ::webrtc::StunMessage::IntegrityStatus ValidateMessageIntegrity(::std::string const& password);

    MCNAPI bool Write(::webrtc::ByteBufferWriter* buf) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    IsStunMethod(::webrtc::ArrayView<int, 18446744073709546905> methods, char const* data, uint64 size);

    MCNAPI static bool ValidateFingerprint(char const* data, uint64 size);

    MCNAPI static bool ValidateMessageIntegrityOfType(
        int                  mi_attr_type,
        uint64               mi_attr_size,
        char const*          data,
        uint64               size,
        ::std::string const& password
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(ushort type);

    MCNAPI void* $ctor(ushort type, ::std::string_view transaction_id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::StunMessage* $CreateNew() const;

    MCNAPI ::webrtc::StunAttributeValueType $GetAttributeValueType(int type) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
