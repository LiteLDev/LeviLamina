#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class SignedAudioContent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka9f2cc;
    // NOLINTEND

public:
    // prevent constructor by default
    SignedAudioContent& operator=(SignedAudioContent const&);
    SignedAudioContent(SignedAudioContent const&);
    SignedAudioContent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Audio::SignedAudioContent const& other) const;

    MCNAPI ~SignedAudioContent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Audio
