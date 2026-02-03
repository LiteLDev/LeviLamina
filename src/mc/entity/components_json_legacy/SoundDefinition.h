#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkad52b6;
    ::ll::UntypedStorage<8, 16> mUnkcb58b5;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundDefinition& operator=(SoundDefinition const&);
    SoundDefinition(SoundDefinition const&);
    SoundDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SoundDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
