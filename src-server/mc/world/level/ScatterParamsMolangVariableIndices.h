#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

struct ScatterParamsMolangVariableIndices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>    mVariableOriginXIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>    mVariableOriginYIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>    mVariableOriginZIndex;
    ::ll::TypedStorage<2, 6, ::MolangVariableIndex[3]> mVariableWorldIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize();
    // NOLINTEND
};
