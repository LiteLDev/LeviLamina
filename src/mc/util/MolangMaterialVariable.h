#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"

struct MolangMaterialVariable : public ::MolangHashStringVariable<::MolangMaterialVariable> {
public:
    // prevent constructor by default
    MolangMaterialVariable& operator=(MolangMaterialVariable const&);
    MolangMaterialVariable(MolangMaterialVariable const&);
    MolangMaterialVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MolangMaterialVariable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
