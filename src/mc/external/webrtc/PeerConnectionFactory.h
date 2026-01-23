#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct AudioOptions; }
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class Call; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class Environment; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class PeerConnectionInterface; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { class VideoTrackSourceInterface; }
namespace webrtc { struct PeerConnectionDependencies; }
namespace webrtc { struct PeerConnectionFactoryDependencies; }
namespace webrtc { struct RtpCapabilities; }
// clang-format on

namespace webrtc {

class PeerConnectionFactory : public ::webrtc::PeerConnectionFactoryInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9585ba;
    ::ll::UntypedStorage<4, 20> mUnkf54a1e;
    ::ll::UntypedStorage<8, 8>  mUnk5da130;
    ::ll::UntypedStorage<8, 8>  mUnkb6cf1d;
    ::ll::UntypedStorage<8, 8>  mUnkfeffcb;
    ::ll::UntypedStorage<8, 8>  mUnk7c7c98;
    ::ll::UntypedStorage<8, 8>  mUnk4708a5;
    ::ll::UntypedStorage<8, 8>  mUnkb6a9da;
    ::ll::UntypedStorage<8, 8>  mUnkfbd22e;
    ::ll::UntypedStorage<8, 8>  mUnkb12b34;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnectionFactory& operator=(PeerConnectionFactory const&);
    PeerConnectionFactory(PeerConnectionFactory const&);
    PeerConnectionFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetOptions(::webrtc::PeerConnectionFactoryInterface::Options const& options) /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>>
    CreatePeerConnectionOrError(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::webrtc::PeerConnectionDependencies                       dependencies
    ) /*override*/;

    virtual ::webrtc::RtpCapabilities GetRtpSenderCapabilities(::cricket::MediaType kind) const /*override*/;

    virtual ::webrtc::RtpCapabilities GetRtpReceiverCapabilities(::cricket::MediaType kind) const /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>
    CreateLocalMediaStream(::std::string const& stream_id) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface>
    CreateAudioSource(::cricket::AudioOptions const& options) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface> CreateVideoTrack(
        ::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface> source,
        ::std::string_view                                           id
    ) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    CreateAudioTrack(::std::string const& id, ::webrtc::AudioSourceInterface* source) /*override*/;

    virtual bool StartAecDump(::_iobuf* file, int64 max_size_bytes) /*override*/;

    virtual void StopAecDump() /*override*/;

    virtual ~PeerConnectionFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::Call> CreateCall_w(
        ::webrtc::Environment const&                               env,
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration
    );

    MCNAPI explicit PeerConnectionFactory(::webrtc::PeerConnectionFactoryDependencies dependencies);

    MCNAPI PeerConnectionFactory(
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext> context,
        ::webrtc::PeerConnectionFactoryDependencies*         dependencies
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionFactoryDependencies dependencies);

    MCNAPI void* $ctor(
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext> context,
        ::webrtc::PeerConnectionFactoryDependencies*         dependencies
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetOptions(::webrtc::PeerConnectionFactoryInterface::Options const& options);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>>
    $CreatePeerConnectionOrError(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::webrtc::PeerConnectionDependencies                       dependencies
    );

    MCNAPI ::webrtc::RtpCapabilities $GetRtpSenderCapabilities(::cricket::MediaType kind) const;

    MCNAPI ::webrtc::RtpCapabilities $GetRtpReceiverCapabilities(::cricket::MediaType kind) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>
    $CreateLocalMediaStream(::std::string const& stream_id);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface>
    $CreateAudioSource(::cricket::AudioOptions const& options);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
    $CreateVideoTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface> source, ::std::string_view id);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    $CreateAudioTrack(::std::string const& id, ::webrtc::AudioSourceInterface* source);

    MCNAPI bool $StartAecDump(::_iobuf* file, int64 max_size_bytes);

    MCNAPI void $StopAecDump();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
