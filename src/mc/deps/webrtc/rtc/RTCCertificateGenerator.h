#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/absl/AnyInvocable.h"
#include "mc/deps/webrtc/rtc/RTCCertificateGeneratorInterface.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class KeyParams; }
namespace rtc { class RTCCertificate; }
namespace rtc { class RTCCertificateGeneratorInterface; }
namespace rtc { class Thread; }
// clang-format on

namespace rtc {

class RTCCertificateGenerator : public ::rtc::RTCCertificateGeneratorInterface {
public:
    // prevent constructor by default
    RTCCertificateGenerator& operator=(RTCCertificateGenerator const&);
    RTCCertificateGenerator(RTCCertificateGenerator const&);
    RTCCertificateGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RTCCertificateGenerator@rtc@@UEAA@XZ
    virtual ~RTCCertificateGenerator() = default;

    // vIndex: 1, symbol:
    // ?GenerateCertificateAsync@RTCCertificateGenerator@rtc@@UEAAXAEBVKeyParams@2@AEBV?$optional@_K@std@@V?$AnyInvocable@$$A8@@EHAAXV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@@Z@absl@@@Z
    virtual void
    GenerateCertificateAsync(class rtc::KeyParams const&, std::optional<uint64> const&, class absl::AnyInvocable<void(class rtc::scoped_refptr<class rtc::RTCCertificate>) &&>);

    // symbol: ??0RTCCertificateGenerator@rtc@@QEAA@PEAVThread@1@0@Z
    MCAPI RTCCertificateGenerator(class rtc::Thread*, class rtc::Thread*);

    // symbol:
    // ?GenerateCertificate@RTCCertificateGenerator@rtc@@SA?AV?$scoped_refptr@VRTCCertificate@rtc@@@2@AEBVKeyParams@2@AEBV?$optional@_K@std@@@Z
    MCAPI static class rtc::scoped_refptr<class rtc::RTCCertificate>
    GenerateCertificate(class rtc::KeyParams const&, std::optional<uint64> const&);

    // NOLINTEND
};

}; // namespace rtc
