#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaAnimationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk580557;
    ::ll::UntypedStorage<8, 32> mUnkb767c6;
    ::ll::UntypedStorage<8, 16> mUnk35e607;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaAnimationDefinition& operator=(PersonaAnimationDefinition const&);
    PersonaAnimationDefinition(PersonaAnimationDefinition const&);
    PersonaAnimationDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PersonaAnimationDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PersonaAnimationDefinition const& INVALID_ANIMATION_DEFINITION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::PersonaAnimationDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
