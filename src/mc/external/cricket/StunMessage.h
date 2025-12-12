#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunAddressAttribute; }
namespace cricket { class StunAttribute; }
namespace cricket { class StunByteStringAttribute; }
namespace cricket { class StunErrorCodeAttribute; }
namespace cricket { class StunUInt16ListAttribute; }
namespace cricket { class StunUInt32Attribute; }
namespace cricket { class StunUInt64Attribute; }
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace cricket {

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
    ::ll::UntypedStorage<8, 24> mUnk30d509;
    ::ll::UntypedStorage<2, 2>  mUnk525a6a;
    ::ll::UntypedStorage<2, 2>  mUnk11e380;
    ::ll::UntypedStorage<8, 32> mUnkf9b039;
    ::ll::UntypedStorage<4, 4>  mUnk270e98;
    ::ll::UntypedStorage<4, 4>  mUnk410538;
    ::ll::UntypedStorage<8, 32> mUnk3109f3;
    ::ll::UntypedStorage<4, 4>  mUnk299a0d;
    ::ll::UntypedStorage<8, 32> mUnk61c670;
    // NOLINTEND

public:
    // prevent constructor by default
    StunMessage& operator=(StunMessage const&);
    StunMessage(StunMessage const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StunMessage();

    virtual ::cricket::StunMessage* CreateNew() const;

    virtual ::cricket::StunAttributeValueType GetAttributeValueType(int type) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAttribute(::std::unique_ptr<::cricket::StunAttribute> attr);

    MCNAPI bool AddFingerprint();

    MCNAPI bool AddMessageIntegrity(::std::string_view password);

    MCNAPI bool AddMessageIntegrity32(::std::string_view password);

    MCNAPI bool AddMessageIntegrityOfType(int attr_type, uint64 attr_size, ::std::string_view key);

    MCNAPI ::std::unique_ptr<::cricket::StunMessage> Clone() const;

    MCNAPI ::cricket::StunAttribute* CreateAttribute(int type, uint64 length);

    MCNAPI bool
    EqualAttributes(::cricket::StunMessage const* other, ::std::function<bool(int)> attribute_type_mask) const;

    MCNAPI ::cricket::StunAddressAttribute const* GetAddress(int type) const;

    MCNAPI ::cricket::StunAttribute const* GetAttribute(int type) const;

    MCNAPI ::cricket::StunByteStringAttribute const* GetByteString(int type) const;

    MCNAPI ::cricket::StunErrorCodeAttribute const* GetErrorCode() const;

    MCNAPI int GetErrorCodeValue() const;

    MCNAPI ::std::vector<ushort> GetNonComprehendedAttributes() const;

    MCNAPI ::cricket::StunUInt16ListAttribute const* GetUInt16List(int type) const;

    MCNAPI ::cricket::StunUInt32Attribute const* GetUInt32(int type) const;

    MCNAPI ::cricket::StunUInt64Attribute const* GetUInt64(int type) const;

    MCNAPI bool IsLegacy() const;

    MCNAPI bool Read(::rtc::ByteBufferReader* buf);

    MCNAPI ::cricket::StunMessage::IntegrityStatus RevalidateMessageIntegrity(::std::string const& password);

    MCNAPI StunMessage();

    MCNAPI explicit StunMessage(ushort type);

    MCNAPI StunMessage(ushort type, ::std::string_view transaction_id);

    MCNAPI ::cricket::StunMessage::IntegrityStatus ValidateMessageIntegrity(::std::string const& password);

    MCNAPI bool Write(::rtc::ByteBufferWriter* buf) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string GenerateTransactionId();

    MCNAPI static bool IsStunMethod(::rtc::ArrayView<int> methods, char const* data, uint64 size);

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
    MCNAPI ::cricket::StunMessage* $CreateNew() const;

    MCNAPI ::cricket::StunAttributeValueType $GetAttributeValueType(int type) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
