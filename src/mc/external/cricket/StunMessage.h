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
    // vIndex: 0
    virtual ~StunMessage() = default;

    // vIndex: 1
    virtual ::cricket::StunMessage* CreateNew() const;

    // vIndex: 2
    virtual ::cricket::StunAttributeValueType GetAttributeValueType(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAttribute(::std::unique_ptr<::cricket::StunAttribute>);

    MCNAPI bool AddFingerprint();

    MCNAPI bool AddMessageIntegrity(::std::string_view);

    MCNAPI bool AddMessageIntegrity32(::std::string_view);

    MCNAPI bool AddMessageIntegrityOfType(int, uint64, ::std::string_view);

    MCNAPI ::std::unique_ptr<::cricket::StunMessage> Clone() const;

    MCNAPI ::cricket::StunAttribute* CreateAttribute(int, uint64);

    MCNAPI bool EqualAttributes(::cricket::StunMessage const*, ::std::function<bool(int)>) const;

    MCNAPI ::cricket::StunAddressAttribute const* GetAddress(int) const;

    MCNAPI ::cricket::StunAttribute const* GetAttribute(int) const;

    MCNAPI ::cricket::StunByteStringAttribute const* GetByteString(int) const;

    MCNAPI ::cricket::StunErrorCodeAttribute const* GetErrorCode() const;

    MCNAPI int GetErrorCodeValue() const;

    MCNAPI ::std::vector<ushort> GetNonComprehendedAttributes() const;

    MCNAPI ::cricket::StunUInt16ListAttribute const* GetUInt16List(int) const;

    MCNAPI ::cricket::StunUInt32Attribute const* GetUInt32(int) const;

    MCNAPI ::cricket::StunUInt64Attribute const* GetUInt64(int) const;

    MCNAPI bool IsLegacy() const;

    MCNAPI bool Read(::rtc::ByteBufferReader*);

    MCNAPI ::cricket::StunMessage::IntegrityStatus RevalidateMessageIntegrity(::std::string const&);

    MCNAPI StunMessage();

    MCNAPI explicit StunMessage(ushort);

    MCNAPI StunMessage(ushort, ::std::string_view);

    MCNAPI ::cricket::StunMessage::IntegrityStatus ValidateMessageIntegrity(::std::string const&);

    MCNAPI bool Write(::rtc::ByteBufferWriter*) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string GenerateTransactionId();

    MCNAPI static bool IsStunMethod(::rtc::ArrayView<int>, char const*, uint64);

    MCNAPI static bool ValidateFingerprint(char const*, uint64);

    MCNAPI static bool ValidateMessageIntegrityOfType(int, uint64, char const*, uint64, ::std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(ushort);

    MCNAPI void* $ctor(ushort, ::std::string_view);
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
