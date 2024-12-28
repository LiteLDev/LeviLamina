#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMatrix {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnk3865c0;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangMatrix& operator=(MolangMatrix const&);
    MolangMatrix(MolangMatrix const&);
    MolangMatrix();
};
