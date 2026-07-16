#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Molang::details {

struct MolangProgramBuildState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9b2202;
    ::ll::UntypedStorage<1, 1>  mUnkae9e01;
    ::ll::UntypedStorage<8, 24> mUnkbfb61c;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangProgramBuildState& operator=(MolangProgramBuildState const&);
    MolangProgramBuildState(MolangProgramBuildState const&);
    MolangProgramBuildState();
};

} // namespace Molang::details
