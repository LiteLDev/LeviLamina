#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class KeyParams; }
namespace webrtc { class RTCCertificate; }
// clang-format on

namespace webrtc {

class RTCCertificateGeneratorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RTCCertificateGeneratorInterface() = default;

    virtual void GenerateCertificateAsync(
        ::webrtc::KeyParams const&                                                       key_params,
        ::std::optional<uint64> const&                                                   expires_ms,
        ::absl::AnyInvocable<void(::webrtc::scoped_refptr<::webrtc::RTCCertificate>) &&> callback
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
