#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AudioSinkInterface.h"
#include "mc/external/webrtc/MediaSourceInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

class RemoteAudioSource {
public:
    // RemoteAudioSource inner types define
    enum class OnAudioChannelGoneAction : uint {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnAudioChannelGone();

    MCNAPI void OnData(::webrtc::AudioSinkInterface::Data const&);

    MCNAPI RemoteAudioSource(::webrtc::TaskQueueBase*, ::webrtc::RemoteAudioSource::OnAudioChannelGoneAction);

    MCNAPI void SetState(::webrtc::MediaSourceInterface::SourceState);

    MCNAPI void Start(::cricket::VoiceMediaReceiveChannelInterface*, ::std::optional<uint>);

    MCNAPI void Stop(::cricket::VoiceMediaReceiveChannelInterface*, ::std::optional<uint>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TaskQueueBase*, ::webrtc::RemoteAudioSource::OnAudioChannelGoneAction);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNotifierInterface();

    MCNAPI static void** $vftableForRefCountInterface();
    // NOLINTEND
};

} // namespace webrtc
