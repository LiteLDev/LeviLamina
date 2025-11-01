#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AudioProcessingStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnka3ad49;
    ::ll::UntypedStorage<8, 16> mUnkd4fdad;
    ::ll::UntypedStorage<8, 16> mUnk3fd408;
    ::ll::UntypedStorage<8, 16> mUnk8e0fe6;
    ::ll::UntypedStorage<4, 8> mUnk45686f;
    ::ll::UntypedStorage<4, 8> mUnk78fc25;
    ::ll::UntypedStorage<8, 16> mUnk7634c6;
    ::ll::UntypedStorage<8, 16> mUnkcf1010;
    ::ll::UntypedStorage<4, 8> mUnk3c02b6;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioProcessingStats& operator=(AudioProcessingStats const&);
    AudioProcessingStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioProcessingStats(::webrtc::AudioProcessingStats const&);

    MCNAPI ~AudioProcessingStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::AudioProcessingStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
