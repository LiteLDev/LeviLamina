#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class OnlineAudioInitializationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk67b088;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioInitializationData& operator=(OnlineAudioInitializationData const&);
    OnlineAudioInitializationData(OnlineAudioInitializationData const&);
    OnlineAudioInitializationData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit OnlineAudioInitializationData(::std::vector<uchar> headerData);

    MCNAPI ~OnlineAudioInitializationData();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::vector<uchar> headerData);
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
