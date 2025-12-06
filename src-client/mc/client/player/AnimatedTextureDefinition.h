#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AnimatedTextureDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk15d258;
    ::ll::UntypedStorage<4, 4>  mUnk82d7c8;
    ::ll::UntypedStorage<8, 32> mUnkcc020d;
    ::ll::UntypedStorage<8, 32> mUnk163ad6;
    ::ll::UntypedStorage<4, 4>  mUnk1895ca;
    ::ll::UntypedStorage<4, 4>  mUnk4ac7f6;
    ::ll::UntypedStorage<4, 4>  mUnk79086d;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedTextureDefinition& operator=(AnimatedTextureDefinition const&);
    AnimatedTextureDefinition(AnimatedTextureDefinition const&);
    AnimatedTextureDefinition();
};
