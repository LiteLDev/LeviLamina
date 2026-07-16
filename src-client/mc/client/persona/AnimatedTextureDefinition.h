#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

struct AnimatedTextureDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk15d258;
    ::ll::UntypedStorage<4, 4>  mUnk82d7c8;
    ::ll::UntypedStorage<8, 32> mUnke5ab4e;
    ::ll::UntypedStorage<8, 32> mUnk77d307;
    ::ll::UntypedStorage<4, 4>  mUnk1895ca;
    ::ll::UntypedStorage<4, 4>  mUnk4ac7f6;
    ::ll::UntypedStorage<4, 4>  mUnk79086d;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedTextureDefinition& operator=(AnimatedTextureDefinition const&);
    AnimatedTextureDefinition(AnimatedTextureDefinition const&);
    AnimatedTextureDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnimatedTextureDefinition(
        ::persona::AnimatedTextureType type,
        ::std::string const&           geoID,
        ::std::string const&           textureID
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::AnimatedTextureType type, ::std::string const& geoID, ::std::string const& textureID);
    // NOLINTEND
};
