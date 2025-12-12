#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AudioReceiveStreamInterface.h"
#include "mc/external/webrtc/AudioSendStream.h"
#include "mc/external/webrtc/FlexfecReceiveStream.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/NetworkState.h"
#include "mc/external/webrtc/VideoReceiveStreamInterface.h"
#include "mc/external/webrtc/VideoSendStream.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct SentPacket; }
namespace webrtc { class AudioReceiveStreamInterface; }
namespace webrtc { class AudioSendStream; }
namespace webrtc { class FecController; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class FlexfecReceiveStream; }
namespace webrtc { class PacketReceiver; }
namespace webrtc { class Resource; }
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class VideoEncoderConfig; }
namespace webrtc { class VideoReceiveStreamInterface; }
namespace webrtc { class VideoSendStream; }
namespace webrtc { struct BitrateSettings; }
// clang-format on

namespace webrtc {

class Call {
public:
    // Call inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // Call inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnke1b4e6;
        ::ll::UntypedStorage<4, 4> mUnkaec353;
        ::ll::UntypedStorage<4, 4> mUnke83da3;
        ::ll::UntypedStorage<8, 8> mUnk70bc50;
        ::ll::UntypedStorage<8, 8> mUnk8d7733;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::AudioSendStream* CreateAudioSendStream(::webrtc::AudioSendStream::Config const&) = 0;

    virtual void DestroyAudioSendStream(::webrtc::AudioSendStream*) = 0;

    virtual ::webrtc::AudioReceiveStreamInterface*
    CreateAudioReceiveStream(::webrtc::AudioReceiveStreamInterface::Config const&) = 0;

    virtual void DestroyAudioReceiveStream(::webrtc::AudioReceiveStreamInterface*) = 0;

    virtual ::webrtc::VideoSendStream*
        CreateVideoSendStream(::webrtc::VideoSendStream::Config, ::webrtc::VideoEncoderConfig) = 0;

    virtual ::webrtc::VideoSendStream* CreateVideoSendStream(
        ::webrtc::VideoSendStream::Config,
        ::webrtc::VideoEncoderConfig,
        ::std::unique_ptr<::webrtc::FecController>
    );

    virtual void DestroyVideoSendStream(::webrtc::VideoSendStream*) = 0;

    virtual ::webrtc::VideoReceiveStreamInterface*
        CreateVideoReceiveStream(::webrtc::VideoReceiveStreamInterface::Config) = 0;

    virtual void DestroyVideoReceiveStream(::webrtc::VideoReceiveStreamInterface*) = 0;

    virtual ::webrtc::FlexfecReceiveStream*
    CreateFlexfecReceiveStream(::webrtc::FlexfecReceiveStream::Config const) = 0;

    virtual void DestroyFlexfecReceiveStream(::webrtc::FlexfecReceiveStream*) = 0;

    virtual void AddAdaptationResource(::webrtc::scoped_refptr<::webrtc::Resource>) = 0;

    virtual ::webrtc::PacketReceiver* Receiver() = 0;

    virtual ::webrtc::RtpTransportControllerSendInterface* GetTransportControllerSend() = 0;

    virtual ::webrtc::Call::Stats GetStats() const = 0;

    virtual void SignalChannelNetworkState(::webrtc::MediaType, ::webrtc::NetworkState) = 0;

    virtual void OnAudioTransportOverheadChanged(int) = 0;

    virtual void OnLocalSsrcUpdated(::webrtc::AudioReceiveStreamInterface&, uint) = 0;

    virtual void OnLocalSsrcUpdated(::webrtc::VideoReceiveStreamInterface&, uint) = 0;

    virtual void OnLocalSsrcUpdated(::webrtc::FlexfecReceiveStream&, uint) = 0;

    virtual void OnUpdateSyncGroup(::webrtc::AudioReceiveStreamInterface&, ::std::string_view) = 0;

    virtual void OnSentPacket(::rtc::SentPacket const&) = 0;

    virtual void SetClientBitratePreferences(::webrtc::BitrateSettings const&) = 0;

    virtual ::webrtc::FieldTrialsView const& trials() const = 0;

    virtual ::webrtc::TaskQueueBase* network_thread() const = 0;

    virtual ::webrtc::TaskQueueBase* worker_thread() const = 0;

    virtual ~Call() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
