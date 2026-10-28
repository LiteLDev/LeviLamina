#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class OnlineAudioEncryptionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk35dea3;
    ::ll::UntypedStorage<8, 32> mUnk816a9d;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    OnlineAudioEncryptionData& operator=(OnlineAudioEncryptionData const&);
    OnlineAudioEncryptionData(OnlineAudioEncryptionData const&);
    OnlineAudioEncryptionData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    OnlineAudioEncryptionData& operator=(OnlineAudioEncryptionData const&);
    OnlineAudioEncryptionData();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI OnlineAudioEncryptionData(::Audio::OnlineAudioEncryptionData const&);

    MCNAPI ~OnlineAudioEncryptionData();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Audio::OnlineAudioEncryptionData const&);
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
