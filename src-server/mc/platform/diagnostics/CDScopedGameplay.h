#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CDScopedGameplay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkef270b;
    ::ll::UntypedStorage<2, 2> mUnkc0b39b;
    ::ll::UntypedStorage<4, 4> mUnk71c85f;
    ::ll::UntypedStorage<4, 4> mUnkadb785;
    // NOLINTEND

public:
    // prevent constructor by default
    CDScopedGameplay& operator=(CDScopedGameplay const&);
    CDScopedGameplay(CDScopedGameplay const&);
    CDScopedGameplay();
};
