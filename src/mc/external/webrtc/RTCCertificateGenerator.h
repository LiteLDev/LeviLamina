#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/RTCCertificateGeneratorInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class KeyParams; }
namespace webrtc { class RTCCertificate; }
namespace webrtc { class Thread; }
// clang-format on

namespace webrtc {

class RTCCertificateGenerator : public ::webrtc::RTCCertificateGeneratorInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4162cd;
    ::ll::UntypedStorage<8, 8> mUnkf23f67;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCCertificateGenerator& operator=(RTCCertificateGenerator const&);
    RTCCertificateGenerator(RTCCertificateGenerator const&);
    RTCCertificateGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RTCCertificateGenerator() /*override*/ = default;

    virtual void GenerateCertificateAsync(
        ::webrtc::KeyParams const&                                                       key_params,
        ::std::optional<uint64> const&                                                   expires_ms,
        ::absl::AnyInvocable<void(::webrtc::scoped_refptr<::webrtc::RTCCertificate>) &&> callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCCertificateGenerator(::webrtc::Thread* signaling_thread, ::webrtc::Thread* worker_thread);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Thread* signaling_thread, ::webrtc::Thread* worker_thread);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $GenerateCertificateAsync(
        ::webrtc::KeyParams const&                                                       key_params,
        ::std::optional<uint64> const&                                                   expires_ms,
        ::absl::AnyInvocable<void(::webrtc::scoped_refptr<::webrtc::RTCCertificate>) &&> callback
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
