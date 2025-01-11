#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

class BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk7888ec;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockLoadContext& operator=(BedrockLoadContext const&);
    BedrockLoadContext(BedrockLoadContext const&);
    BedrockLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BedrockLoadContext(::MolangVersion molangVersion);

    MCFOLD ::MolangVersion getMolangVersion() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::MolangVersion molangVersion);
    // NOLINTEND
};
