#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk735c86;
    ::ll::UntypedStorage<8, 32> mUnkb90b03;
    ::ll::UntypedStorage<8, 40> mUnk27e2ca;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleDescriptor(ModuleDescriptor const&);
    ModuleDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::ModuleDescriptor& operator=(::Scripting::ModuleDescriptor const&);

    MCAPI ::Scripting::ModuleDescriptor& operator=(::Scripting::ModuleDescriptor&&);

    MCAPI ::std::string toString() const;

    MCAPI ~ModuleDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
