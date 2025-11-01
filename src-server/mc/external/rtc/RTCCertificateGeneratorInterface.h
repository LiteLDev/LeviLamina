#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class KeyParams; }
namespace rtc { class RTCCertificate; }
// clang-format on

namespace rtc {

class RTCCertificateGeneratorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RTCCertificateGeneratorInterface() = default;

    // vIndex: 1
    virtual void GenerateCertificateAsync(::rtc::KeyParams const&, ::std::optional<uint64> const&, ::absl::AnyInvocable<void(::webrtc::scoped_refptr<::rtc::RTCCertificate>)&&>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
