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

public:
    // prevent constructor by default
    MolangVariableSettings& operator=(MolangVariableSettings const&);
    MolangVariableSettings(MolangVariableSettings const&);
    MolangVariableSettings();
};
