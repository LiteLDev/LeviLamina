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
    MCNAPI ::Scripting::ModuleDescriptor& operator=(::Scripting::ModuleDescriptor const&);

    MCNAPI ::Scripting::ModuleDescriptor& operator=(::Scripting::ModuleDescriptor&&);

    MCNAPI ::std::string toString() const;

    MCNAPI ~ModuleDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
