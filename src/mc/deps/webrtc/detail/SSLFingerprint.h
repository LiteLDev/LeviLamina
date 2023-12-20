#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertificate; }
namespace rtc { class SSLIdentity; }
// clang-format on

namespace rtc {

struct SSLFingerprint {
public:
    // prevent constructor by default
    SSLFingerprint& operator=(SSLFingerprint const&);
    SSLFingerprint(SSLFingerprint const&);
    SSLFingerprint();

public:
    // NOLINTBEGIN
    // symbol:
    // ?GetRfc4572Fingerprint@SSLFingerprint@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string GetRfc4572Fingerprint() const;

    // symbol:
    // ??0SSLFingerprint@rtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$ArrayView@$$CBE$0?BCGH@@1@@Z
    MCAPI SSLFingerprint(std::string_view, class rtc::ArrayView<uchar const, -4711>);

    // symbol: ?ToString@SSLFingerprint@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??8SSLFingerprint@rtc@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct rtc::SSLFingerprint const&) const;

    // symbol:
    // ?Create@SSLFingerprint@rtc@@SA?AV?$unique_ptr@USSLFingerprint@rtc@@U?$default_delete@USSLFingerprint@rtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@AEBVSSLCertificate@2@@Z
    MCAPI static std::unique_ptr<struct rtc::SSLFingerprint> Create(std::string_view, class rtc::SSLCertificate const&);

    // symbol:
    // ?CreateFromCertificate@SSLFingerprint@rtc@@SA?AV?$unique_ptr@USSLFingerprint@rtc@@U?$default_delete@USSLFingerprint@rtc@@@std@@@std@@AEBVRTCCertificate@2@@Z
    MCAPI static std::unique_ptr<struct rtc::SSLFingerprint> CreateFromCertificate(class rtc::RTCCertificate const&);

    // symbol:
    // ?CreateUnique@SSLFingerprint@rtc@@SA?AV?$unique_ptr@USSLFingerprint@rtc@@U?$default_delete@USSLFingerprint@rtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@AEBVSSLIdentity@2@@Z
    MCAPI static std::unique_ptr<struct rtc::SSLFingerprint>
    CreateUnique(std::string_view, class rtc::SSLIdentity const&);

    // symbol:
    // ?CreateUniqueFromRfc4572@SSLFingerprint@rtc@@SA?AV?$unique_ptr@USSLFingerprint@rtc@@U?$default_delete@USSLFingerprint@rtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@0@Z
    MCAPI static std::unique_ptr<struct rtc::SSLFingerprint>
        CreateUniqueFromRfc4572(std::string_view, std::string_view);

    // NOLINTEND
};

}; // namespace rtc
