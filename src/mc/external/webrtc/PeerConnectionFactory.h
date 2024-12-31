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
namespace cricket { class MediaEngineInterface; }
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
    // vIndex: 3
    virtual void SetOptions(::webrtc::PeerConnectionFactoryInterface::Options const&) /*override*/;

    // vIndex: 4
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>>
    CreatePeerConnectionOrError(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&,
        ::webrtc::PeerConnectionDependencies
    ) /*override*/;

    // vIndex: 7
    virtual ::webrtc::RtpCapabilities GetRtpSenderCapabilities(::cricket::MediaType) const /*override*/;

    // vIndex: 8
    virtual ::webrtc::RtpCapabilities GetRtpReceiverCapabilities(::cricket::MediaType) const /*override*/;

    // vIndex: 9
    virtual ::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>
    CreateLocalMediaStream(::std::string const&) /*override*/;

    // vIndex: 10
    virtual ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface>
    CreateAudioSource(::cricket::AudioOptions const&) /*override*/;

    // vIndex: 12
    virtual ::webrtc::scoped_refptr<::webrtc::VideoTrackInterface>
        CreateVideoTrack(::webrtc::scoped_refptr<::webrtc::VideoTrackSourceInterface>, ::std::string_view) /*override*/;

    // vIndex: 13
    virtual ::webrtc::scoped_refptr<::webrtc::AudioTrackInterface>
    CreateAudioTrack(::std::string const&, ::webrtc::AudioSourceInterface*) /*override*/;

    // vIndex: 14
    virtual bool StartAecDump(::_iobuf*, int64) /*override*/;

    // vIndex: 15
    virtual void StopAecDump() /*override*/;

    // vIndex: 2
    virtual ~PeerConnectionFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::webrtc::Call>
    CreateCall_w(::webrtc::Environment const&, ::webrtc::PeerConnectionInterface::RTCConfiguration const&);

    MCAPI bool IsTrialEnabled(::std::string_view) const;

    MCAPI explicit PeerConnectionFactory(::webrtc::PeerConnectionFactoryDependencies);

    MCAPI
    PeerConnectionFactory(::webrtc::scoped_refptr<::webrtc::ConnectionContext>, ::webrtc::PeerConnectionFactoryDependencies*);

    MCAPI ::cricket::MediaEngineInterface* media_engine() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::PeerConnectionFactoryDependencies);

    MCAPI void*
    $ctor(::webrtc::scoped_refptr<::webrtc::ConnectionContext>, ::webrtc::PeerConnectionFactoryDependencies*);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
