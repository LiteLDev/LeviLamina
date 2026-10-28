#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class OnlineAudioStream {
public:
    // OnlineAudioStream inner types define
    enum class PreparationState : int {
        InitializingDecoder = 0,
        PositioningDecoder  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc6249c;
    ::ll::UntypedStorage<8, 8>  mUnk16dcbe;
    ::ll::UntypedStorage<8, 16> mUnk4bc6ac;
    ::ll::UntypedStorage<4, 4>  mUnk3dd9c3;
    ::ll::UntypedStorage<4, 4>  mUnk9de4b9;
    ::ll::UntypedStorage<8, 16> mUnka4dc0b;
    ::ll::UntypedStorage<8, 8>  mUnk2dd1a0;
    ::ll::UntypedStorage<8, 8>  mUnk2f77a6;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioStream& operator=(OnlineAudioStream const&);
    OnlineAudioStream(OnlineAudioStream const&);
    OnlineAudioStream();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void update();
#endif
    // NOLINTEND
};

} // namespace Audio
