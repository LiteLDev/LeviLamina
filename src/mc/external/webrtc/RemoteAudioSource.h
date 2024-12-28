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
    // prevent constructor by default
    RemoteAudioSource& operator=(RemoteAudioSource const&);
    RemoteAudioSource(RemoteAudioSource const&);
    RemoteAudioSource();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnAudioChannelGone();

    MCAPI void OnData(::webrtc::AudioSinkInterface::Data const&);

    MCAPI RemoteAudioSource(::webrtc::TaskQueueBase*, ::webrtc::RemoteAudioSource::OnAudioChannelGoneAction);

    MCAPI void SetState(::webrtc::MediaSourceInterface::SourceState);

    MCAPI void Start(::cricket::VoiceMediaReceiveChannelInterface*, ::std::optional<uint>);

    MCAPI void Stop(::cricket::VoiceMediaReceiveChannelInterface*, ::std::optional<uint>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::TaskQueueBase*, ::webrtc::RemoteAudioSource::OnAudioChannelGoneAction);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForNotifierInterface();

    MCAPI static void** $vftableForRefCountInterface();
    // NOLINTEND
};

} // namespace webrtc
