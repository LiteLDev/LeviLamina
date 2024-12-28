#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEvalStackState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8fcedf;
    ::ll::UntypedStorage<8, 8> mUnk2fa631;
    ::ll::UntypedStorage<8, 8> mUnk28a21c;
    ::ll::UntypedStorage<8, 8> mUnk5ebcb0;
    ::ll::UntypedStorage<8, 8> mUnk53dee5;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangEvalStackState& operator=(MolangEvalStackState const&);
    MolangEvalStackState(MolangEvalStackState const&);
    MolangEvalStackState();
};
