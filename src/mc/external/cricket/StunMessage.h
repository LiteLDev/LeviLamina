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
    MCAPI void AddAttribute(::std::unique_ptr<::cricket::StunAttribute>);

    MCAPI bool AddFingerprint();

    MCAPI bool AddMessageIntegrity(::std::string_view);

    MCAPI bool AddMessageIntegrity32(::std::string_view);

    MCAPI bool AddMessageIntegrityOfType(int, uint64, ::std::string_view);

    MCAPI ::std::unique_ptr<::cricket::StunMessage> Clone() const;

    MCAPI ::cricket::StunAttribute* CreateAttribute(int, uint64);

    MCAPI bool EqualAttributes(::cricket::StunMessage const*, ::std::function<bool(int)>) const;

    MCAPI ::cricket::StunAddressAttribute const* GetAddress(int) const;

    MCAPI ::cricket::StunAttribute const* GetAttribute(int) const;

    MCAPI ::cricket::StunByteStringAttribute const* GetByteString(int) const;

    MCAPI ::cricket::StunErrorCodeAttribute const* GetErrorCode() const;

    MCAPI int GetErrorCodeValue() const;

    MCAPI ::std::vector<ushort> GetNonComprehendedAttributes() const;

    MCAPI ::cricket::StunUInt16ListAttribute const* GetUInt16List(int) const;

    MCAPI ::cricket::StunUInt32Attribute const* GetUInt32(int) const;

    MCAPI ::cricket::StunUInt64Attribute const* GetUInt64(int) const;

    MCAPI bool IsLegacy() const;

    MCAPI bool Read(::rtc::ByteBufferReader*);

    MCAPI ::cricket::StunMessage::IntegrityStatus RevalidateMessageIntegrity(::std::string const&);

    MCAPI StunMessage();

    MCAPI explicit StunMessage(ushort);

    MCAPI StunMessage(ushort, ::std::string_view);

    MCAPI ::cricket::StunMessage::IntegrityStatus ValidateMessageIntegrity(::std::string const&);

    MCAPI bool Write(::rtc::ByteBufferWriter*) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string GenerateTransactionId();

    MCAPI static bool IsStunMethod(::rtc::ArrayView<int>, char const*, uint64);

    MCAPI static bool ValidateFingerprint(char const*, uint64);

    MCAPI static bool ValidateMessageIntegrityOfType(int, uint64, char const*, uint64, ::std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(ushort);

    MCAPI void* $ctor(ushort, ::std::string_view);
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
