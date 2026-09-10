#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlaySoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7cb4c8;
    ::ll::UntypedStorage<4, 12> mUnk7b7755;
    ::ll::UntypedStorage<4, 4>  mUnk209892;
    ::ll::UntypedStorage<4, 4>  mUnka6df4a;
    ::ll::UntypedStorage<4, 4>  mUnk5c4869;
    ::ll::UntypedStorage<8, 16> mUnka38c93;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaySoundOptions& operator=(PlaySoundOptions const&);
    PlaySoundOptions(PlaySoundOptions const&);
    PlaySoundOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlaySoundOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
