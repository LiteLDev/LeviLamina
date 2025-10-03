#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleResolveResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk552071;
    ::ll::UntypedStorage<8, 24> mUnk5f8d62;
    ::ll::UntypedStorage<8, 24> mUnk7416be;
    ::ll::UntypedStorage<8, 24> mUnka7c28c;
    ::ll::UntypedStorage<8, 24> mUnk315a8b;
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
