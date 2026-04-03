#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleResolveResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk89d9eb;
    ::ll::UntypedStorage<8, 24> mUnk885506;
    ::ll::UntypedStorage<8, 24> mUnk687eb0;
    ::ll::UntypedStorage<8, 24> mUnk120dd9;
    ::ll::UntypedStorage<8, 24> mUnk7020a3;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleResolveResult& operator=(ModuleResolveResult const&);
    ModuleResolveResult(ModuleResolveResult const&);
    ModuleResolveResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ModuleResolveResult& operator=(::Scripting::ModuleResolveResult&&);

    MCNAPI ~ModuleResolveResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
