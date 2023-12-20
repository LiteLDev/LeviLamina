#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/StunAttributeValueType.h"

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
    enum class IntegrityStatus {};

public:
    // prevent constructor by default
    StunMessage& operator=(StunMessage const&);
    StunMessage(StunMessage const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StunMessage@cricket@@UEAA@XZ
    virtual ~StunMessage();

    // vIndex: 1, symbol: ?CreateNew@StunMessage@cricket@@UEBAPEAV12@XZ
    virtual class cricket::StunMessage* CreateNew() const;

    // vIndex: 2, symbol: ?GetAttributeValueType@StunMessage@cricket@@MEBA?AW4StunAttributeValueType@2@H@Z
    virtual ::cricket::StunAttributeValueType GetAttributeValueType(int) const;

    // symbol:
    // ?AddAttribute@StunMessage@cricket@@QEAAXV?$unique_ptr@VStunAttribute@cricket@@U?$default_delete@VStunAttribute@cricket@@@std@@@std@@@Z
    MCAPI void AddAttribute(std::unique_ptr<class cricket::StunAttribute>);

    // symbol: ?AddFingerprint@StunMessage@cricket@@QEAA_NXZ
    MCAPI bool AddFingerprint();

    // symbol: ?AddMessageIntegrity@StunMessage@cricket@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool AddMessageIntegrity(std::string_view);

    // symbol: ?AddMessageIntegrity32@StunMessage@cricket@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool AddMessageIntegrity32(std::string_view);

    // symbol:
    // ?Clone@StunMessage@cricket@@QEBA?AV?$unique_ptr@VStunMessage@cricket@@U?$default_delete@VStunMessage@cricket@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class cricket::StunMessage> Clone() const;

    // symbol: ?EqualAttributes@StunMessage@cricket@@QEBA_NPEBV12@V?$function@$$A6A_NH@Z@std@@@Z
    MCAPI bool EqualAttributes(class cricket::StunMessage const*, std::function<bool(int)>) const;

    // symbol: ?GetAddress@StunMessage@cricket@@QEBAPEBVStunAddressAttribute@2@H@Z
    MCAPI class cricket::StunAddressAttribute const* GetAddress(int) const;

    // symbol: ?GetByteString@StunMessage@cricket@@QEBAPEBVStunByteStringAttribute@2@H@Z
    MCAPI class cricket::StunByteStringAttribute const* GetByteString(int) const;

    // symbol: ?GetErrorCode@StunMessage@cricket@@QEBAPEBVStunErrorCodeAttribute@2@XZ
    MCAPI class cricket::StunErrorCodeAttribute const* GetErrorCode() const;

    // symbol: ?GetErrorCodeValue@StunMessage@cricket@@QEBAHXZ
    MCAPI int GetErrorCodeValue() const;

    // symbol: ?GetNonComprehendedAttributes@StunMessage@cricket@@QEBA?AV?$vector@GV?$allocator@G@std@@@std@@XZ
    MCAPI std::vector<ushort> GetNonComprehendedAttributes() const;

    // symbol: ?GetUInt16List@StunMessage@cricket@@QEBAPEBVStunUInt16ListAttribute@2@H@Z
    MCAPI class cricket::StunUInt16ListAttribute const* GetUInt16List(int) const;

    // symbol: ?GetUInt32@StunMessage@cricket@@QEBAPEBVStunUInt32Attribute@2@H@Z
    MCAPI class cricket::StunUInt32Attribute const* GetUInt32(int) const;

    // symbol: ?GetUInt64@StunMessage@cricket@@QEBAPEBVStunUInt64Attribute@2@H@Z
    MCAPI class cricket::StunUInt64Attribute const* GetUInt64(int) const;

    // symbol: ?IsLegacy@StunMessage@cricket@@QEBA_NXZ
    MCAPI bool IsLegacy() const;

    // symbol: ?Read@StunMessage@cricket@@QEAA_NPEAVByteBufferReader@rtc@@@Z
    MCAPI bool Read(class rtc::ByteBufferReader*);

    // symbol:
    // ?RevalidateMessageIntegrity@StunMessage@cricket@@QEAA?AW4IntegrityStatus@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::cricket::StunMessage::IntegrityStatus RevalidateMessageIntegrity(std::string const&);

    // symbol: ??0StunMessage@cricket@@QEAA@XZ
    MCAPI StunMessage();

    // symbol: ??0StunMessage@cricket@@QEAA@G@Z
    MCAPI explicit StunMessage(ushort);

    // symbol: ??0StunMessage@cricket@@QEAA@GV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI StunMessage(ushort, std::string_view);

    // symbol:
    // ?ValidateMessageIntegrity@StunMessage@cricket@@QEAA?AW4IntegrityStatus@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::cricket::StunMessage::IntegrityStatus ValidateMessageIntegrity(std::string const&);

    // symbol: ?Write@StunMessage@cricket@@QEBA_NPEAVByteBufferWriter@rtc@@@Z
    MCAPI bool Write(class rtc::ByteBufferWriter*) const;

    // symbol:
    // ?GenerateTransactionId@StunMessage@cricket@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string GenerateTransactionId();

    // symbol: ?IsStunMethod@StunMessage@cricket@@SA_NV?$ArrayView@H$0?BCGH@@rtc@@PEBD_K@Z
    MCAPI static bool IsStunMethod(class rtc::ArrayView<int, -4711>, char const*, uint64);

    // symbol: ?ValidateFingerprint@StunMessage@cricket@@SA_NPEBD_K@Z
    MCAPI static bool ValidateFingerprint(char const*, uint64);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddMessageIntegrityOfType@StunMessage@cricket@@AEAA_NH_KV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool AddMessageIntegrityOfType(int, uint64, std::string_view);

    // symbol: ?CreateAttribute@StunMessage@cricket@@AEAAPEAVStunAttribute@2@H_K@Z
    MCAPI class cricket::StunAttribute* CreateAttribute(int, uint64);

    // symbol: ?GetAttribute@StunMessage@cricket@@AEBAPEBVStunAttribute@2@H@Z
    MCAPI class cricket::StunAttribute const* GetAttribute(int) const;

    // symbol:
    // ?ValidateMessageIntegrityOfType@StunMessage@cricket@@CA_NH_KPEBD0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool ValidateMessageIntegrityOfType(int, uint64, char const*, uint64, std::string const&);

    // NOLINTEND
};

}; // namespace cricket
