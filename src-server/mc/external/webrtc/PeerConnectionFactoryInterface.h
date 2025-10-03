#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class PortAllocator; }
namespace cricket { struct AudioOptions; }
namespace rtc { class RTCCertificateGeneratorInterface; }
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class PeerConnectionInterface; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { class VideoTrackSourceInterface; }
namespace webrtc { struct PeerConnectionDependencies; }
namespace webrtc { struct RtpCapabilities; }
// clang-format on

namespace webrtc {

class PeerConnectionFactoryInterface : public ::webrtc::RefCountInterface {
public:
    // PeerConnectionFactoryInterface inner types declare
    // clang-format off
    class Options;
    // clang-format on

    // PeerConnectionFactoryInterface inner types define
    class Options {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkc074ee;
        ::ll::UntypedStorage<1, 1> mUnkdb3d22;
        ::ll::UntypedStorage<4, 4> mUnk7fc394;
        ::ll::UntypedStorage<4, 4> mUnk80a3ff;
        ::ll::UntypedStorage<1, 5> mUnk334530;
        // NOLINTEND

    public:
        // prevent constructor by default
        Options& operator=(Options const&);
        Options(Options const&);
        Options();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Options();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void SetOptions(::webrtc::PeerConnectionFactoryInterface::Options const&) = 0;

    // vIndex: 4
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>>
    CreatePeerConnectionOrError(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&,
        ::webrtc::PeerConnectionDependencies
    );

    // vIndex: 6
    virtual ::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface> CreatePeerConnection(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::webrtc::PeerConnectionDependencies                       dependencies
    );

    // vIndex: 5
    virtual ::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface> CreatePeerConnection(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::std::unique_ptr<::cricket::PortAllocator>                allocator,
        ::std::unique_ptr<::rtc::RTCCertificateGeneratorInterface> cert_generator,
        ::webrtc::PeerConnectionObserver*                          observer
    );

    // vIndex: 7
    virtual ::webrtc::RtpCapabilities GetRtpSenderCapabilities(::cricket::MediaType) const;

    // vIndex: 8
    virtual ::webrtc::RtpCapabilities GetRtpReceiverCapabilities(::cricket::MediaType) const;

    // vIndex: 9
    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> CreateLocalMediaStream(::std::string const&) = 0;

    // vIndex: 10
    virtual ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface>
    CreateAudioSource(::cricket::AudioOptions const&) = 0;

    // vIndex: 12
    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
        CreateVideoTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface>, ::std::string_view) = 0;

    // vIndex: 11
    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
    CreateVideoTrack(::std::string const&, ::webrtc::VideoTrackSourceInterface*);

    // vIndex: 13
    virtual ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    CreateAudioTrack(::std::string const&, ::webrtc::AudioSourceInterface*) = 0;

    // vIndex: 14
    virtual bool StartAecDump(::_iobuf*, int64);

    // vIndex: 15
    virtual void StopAecDump() = 0;

    // vIndex: 2
    virtual ~PeerConnectionFactoryInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface> $CreatePeerConnection(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::webrtc::PeerConnectionDependencies                       dependencies
    );

    MCNAPI ::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface> $CreatePeerConnection(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::std::unique_ptr<::cricket::PortAllocator>                allocator,
        ::std::unique_ptr<::rtc::RTCCertificateGeneratorInterface> cert_generator,
        ::webrtc::PeerConnectionObserver*                          observer
    );
    // NOLINTEND
};

} // namespace webrtc
