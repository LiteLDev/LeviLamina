#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/network/packet/sound_data_event/Fade.h"
#include "mc/network/packet/sound_data_event/Pause.h"
#include "mc/network/packet/sound_data_event/Resume.h"
#include "mc/network/packet/sound_data_event/SeekTo.h"
#include "mc/network/packet/sound_data_event/SetPitch.h"
#include "mc/network/packet/sound_data_event/SetVolume.h"
#include "mc/network/packet/sound_data_event/Stop.h"

struct ClientboundUpdateSoundDataPacketPayload {
public:
    // ClientboundUpdateSoundDataPacketPayload inner types define
    using Event = ::std::variant<
        ::SoundDataEvent::Stop,
        ::SoundDataEvent::SetVolume,
        ::SoundDataEvent::SetPitch,
        ::SoundDataEvent::Fade,
        ::SoundDataEvent::SeekTo,
        ::SoundDataEvent::Pause,
        ::SoundDataEvent::Resume>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mServerSoundHandle;
    ::ll::TypedStorage<
        4,
        12,
        ::std::variant<
            ::SoundDataEvent::Stop,
            ::SoundDataEvent::SetVolume,
            ::SoundDataEvent::SetPitch,
            ::SoundDataEvent::Fade,
            ::SoundDataEvent::SeekTo,
            ::SoundDataEvent::Pause,
            ::SoundDataEvent::Resume>>
        mEvent;
    // NOLINTEND
};
