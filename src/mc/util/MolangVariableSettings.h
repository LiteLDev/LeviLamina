#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableSetting_AccessSpecifier.h"

struct MolangVariableSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>                   mIndex;
    ::ll::TypedStorage<4, 4, ::MolangVariableSetting_AccessSpecifier> mAccessSpecifier;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MolangVariableSettings();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI MolangVariableSettings(::MolangVariableIndex index, ::MolangVariableSetting_AccessSpecifier accessSpecifier);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::MolangVariableIndex index, ::MolangVariableSetting_AccessSpecifier accessSpecifier);
#endif
    // NOLINTEND
};
