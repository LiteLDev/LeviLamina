#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBindingBundle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkee6c72;
    ::ll::UntypedStorage<8, 144> mUnkc10f43;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleBindingBundle& operator=(ModuleBindingBundle const&);
    ModuleBindingBundle(ModuleBindingBundle const&);
    ModuleBindingBundle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModuleBindingBundle(::Scripting::ModuleBindingBundle&&);

    MCAPI ~ModuleBindingBundle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Scripting::ModuleBindingBundle&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
