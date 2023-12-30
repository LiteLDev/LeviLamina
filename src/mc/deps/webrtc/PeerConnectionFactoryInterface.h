#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/rtc/RefCountInterface.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class PortAllocator; }
namespace rtc { class RTCCertificateGeneratorInterface; }
namespace rtc { class RefCountInterface; }
namespace webrtc { class PeerConnectionInterface; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { struct PeerConnectionDependencies; }
// clang-format on

namespace webrtc {

class PeerConnectionFactoryInterface : public ::rtc::RefCountInterface {
public:
    // PeerConnectionFactoryInterface inner types declare
    // clang-format off
    class Options;
    // clang-format on

    // PeerConnectionFactoryInterface inner types define
    class Options {
    public:
        // prevent constructor by default
        Options& operator=(Options const&);
        Options(Options const&);
        Options();

    public:
        // NOLINTBEGIN
        // symbol: ??1Options@PeerConnectionFactoryInterface@webrtc@@QEAA@XZ
        MCAPI ~Options();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PeerConnectionFactoryInterface& operator=(PeerConnectionFactoryInterface const&);
    PeerConnectionFactoryInterface(PeerConnectionFactoryInterface const&);
    PeerConnectionFactoryInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1PeerConnectionFactoryInterface@webrtc@@MEAA@XZ
    virtual ~PeerConnectionFactoryInterface();

    // symbol:
    // ?CreatePeerConnection@PeerConnectionFactoryInterface@webrtc@@UEAA?AV?$scoped_refptr@VPeerConnectionInterface@webrtc@@@rtc@@AEBURTCConfiguration@PeerConnectionInterface@2@UPeerConnectionDependencies@2@@Z
    MCVAPI class rtc::scoped_refptr<class webrtc::PeerConnectionInterface> CreatePeerConnection(
        struct webrtc::PeerConnectionInterface::RTCConfiguration const&,
        struct webrtc::PeerConnectionDependencies
    );

    // symbol:
    // ?CreatePeerConnection@PeerConnectionFactoryInterface@webrtc@@UEAA?AV?$scoped_refptr@VPeerConnectionInterface@webrtc@@@rtc@@AEBURTCConfiguration@PeerConnectionInterface@2@V?$unique_ptr@VPortAllocator@cricket@@U?$default_delete@VPortAllocator@cricket@@@std@@@std@@V?$unique_ptr@VRTCCertificateGeneratorInterface@rtc@@U?$default_delete@VRTCCertificateGeneratorInterface@rtc@@@std@@@8@PEAVPeerConnectionObserver@2@@Z
    MCVAPI class rtc::scoped_refptr<class webrtc::PeerConnectionInterface>
    CreatePeerConnection(struct webrtc::PeerConnectionInterface::RTCConfiguration const&, std::unique_ptr<class cricket::PortAllocator>, std::unique_ptr<class rtc::RTCCertificateGeneratorInterface>, class webrtc::PeerConnectionObserver*);

    // NOLINTEND
};

}; // namespace webrtc
