#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkad52b6;
    ::ll::UntypedStorage<8, 216> mUnkcb58b5;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundDefinition& operator=(SoundDefinition const&);
    SoundDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SoundDefinition(::SoundDefinition const&);

    MCNAPI ~SoundDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SoundDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
