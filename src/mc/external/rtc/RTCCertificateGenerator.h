#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/rtc/RTCCertificateGeneratorInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class KeyParams; }
namespace rtc { class RTCCertificate; }
namespace rtc { class Thread; }
// clang-format on

namespace rtc {

class RTCCertificateGenerator : public ::rtc::RTCCertificateGeneratorInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd3b89d;
    ::ll::UntypedStorage<8, 8> mUnke1f822;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCCertificateGenerator& operator=(RTCCertificateGenerator const&);
    RTCCertificateGenerator(RTCCertificateGenerator const&);
    RTCCertificateGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RTCCertificateGenerator() /*override*/ = default;

    // vIndex: 1
    virtual void
    GenerateCertificateAsync(::rtc::KeyParams const&, ::std::optional<uint64> const&, ::absl::AnyInvocable<void(::webrtc::scoped_refptr<::rtc::RTCCertificate>) &&>) /*override*/
        ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCCertificateGenerator(::rtc::Thread*, ::rtc::Thread*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::rtc::RTCCertificate>
    GenerateCertificate(::rtc::KeyParams const&, ::std::optional<uint64> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Thread*, ::rtc::Thread*);
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

} // namespace rtc
