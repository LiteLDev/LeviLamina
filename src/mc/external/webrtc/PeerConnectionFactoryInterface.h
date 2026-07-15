#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class PeerConnectionInterface; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { class VideoTrackSourceInterface; }
namespace webrtc { struct AudioOptions; }
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
        ::ll::UntypedStorage<4, 4> mUnked0737;
        // NOLINTEND

    public:
        // prevent constructor by default
        Options& operator=(Options const&);
        Options(Options const&);
        Options();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetOptions(::webrtc::PeerConnectionFactoryInterface::Options const& options) = 0;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>>
    CreatePeerConnectionOrError(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::webrtc::PeerConnectionDependencies                       dependencies
    ) = 0;

    virtual ::webrtc::RtpCapabilities GetRtpSenderCapabilities(::webrtc::MediaType kind) const = 0;

    virtual ::webrtc::RtpCapabilities GetRtpReceiverCapabilities(::webrtc::MediaType kind) const = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>
    CreateLocalMediaStream(::std::string const& stream_id) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface>
    CreateAudioSource(::webrtc::AudioOptions const& options) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
    CreateVideoTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface> source, ::std::string_view id) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    CreateAudioTrack(::std::string const& id, ::webrtc::AudioSourceInterface* source) = 0;

    virtual bool StartAecDump(::_iobuf* file, int64 max_size_bytes);

    virtual void StopAecDump() = 0;

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

    // NOLINTEND
};

} // namespace webrtc
