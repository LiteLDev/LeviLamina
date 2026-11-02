#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class OnlineAudioData {
public:
    // OnlineAudioData inner types declare
    // clang-format off
    struct SeekPoint;
    // clang-format on

    // OnlineAudioData inner types define
    struct SeekPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnka10a71;
        ::ll::UntypedStorage<8, 8> mUnkbf96c0;
        // NOLINTEND

    public:
        // prevent constructor by default
        SeekPoint& operator=(SeekPoint const&);
        SeekPoint(SeekPoint const&);
        SeekPoint();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk953e9b;
    ::ll::UntypedStorage<4, 4>  mUnk27b6fc;
    ::ll::UntypedStorage<8, 8>  mUnk6dd704;
    ::ll::UntypedStorage<8, 24> mUnk6f29d7;
    ::ll::UntypedStorage<1, 1>  mUnk311106;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioData& operator=(OnlineAudioData const&);
    OnlineAudioData(OnlineAudioData const&);
    OnlineAudioData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI OnlineAudioData(
        uint                                               totalSamples,
        uint                                               sampleRate,
        uint64                                             headerSizeBytes,
        ::std::vector<::Audio::OnlineAudioData::SeekPoint> seekPoints
    );

    MCNAPI ~OnlineAudioData();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        uint                                               totalSamples,
        uint                                               sampleRate,
        uint64                                             headerSizeBytes,
        ::std::vector<::Audio::OnlineAudioData::SeekPoint> seekPoints
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Audio
