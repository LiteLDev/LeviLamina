#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StreamingAudioExperimentData;
namespace Audio { class OnlineAudioStream; }
// clang-format on

class StreamingAudioExperiment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnka415d9;
    ::ll::UntypedStorage<8, 64>  mUnk908716;
    ::ll::UntypedStorage<8, 64>  mUnke63812;
    ::ll::UntypedStorage<8, 64>  mUnkb29803;
    ::ll::UntypedStorage<8, 64>  mUnk23b86c;
    ::ll::UntypedStorage<4, 4>   mUnk37d80c;
    ::ll::UntypedStorage<4, 4>   mUnk171406;
    ::ll::UntypedStorage<4, 4>   mUnk894d84;
    ::ll::UntypedStorage<8, 128> mUnk133a9e;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamingAudioExperiment& operator=(StreamingAudioExperiment const&);
    StreamingAudioExperiment(StreamingAudioExperiment const&);
    StreamingAudioExperiment();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit StreamingAudioExperiment(::StreamingAudioExperimentData data);

    MCNAPI void reportSessionEnded(::Audio::OnlineAudioStream const& stream) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::StreamingAudioExperimentData data);
#endif
    // NOLINTEND
};
