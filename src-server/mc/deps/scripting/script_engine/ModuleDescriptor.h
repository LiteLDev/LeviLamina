#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk735c86;
    ::ll::UntypedStorage<8, 16> mUnk456b76;
    ::ll::UntypedStorage<8, 40> mUnk27e2ca;
    ::ll::UntypedStorage<1, 1> mUnka437da;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleDescriptor& operator=(ModuleDescriptor const&);
    ModuleDescriptor(ModuleDescriptor const&);
    ModuleDescriptor();

public:
    // member functions
    // NOLINTBEGIN
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

}
