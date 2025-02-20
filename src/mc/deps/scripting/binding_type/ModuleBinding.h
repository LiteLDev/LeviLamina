#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk10164d;
    ::ll::UntypedStorage<8, 24>  mUnka3446e;
    ::ll::UntypedStorage<8, 24>  mUnke60f93;
    ::ll::UntypedStorage<8, 24>  mUnka8aee8;
    ::ll::UntypedStorage<8, 24>  mUnkd9c53a;
    ::ll::UntypedStorage<8, 24>  mUnkd347f3;
    ::ll::UntypedStorage<8, 24>  mUnk6b2416;
    ::ll::UntypedStorage<8, 24>  mUnk911301;
    ::ll::UntypedStorage<8, 24>  mUnk7a469a;
    ::ll::UntypedStorage<8, 24>  mUnk993212;
    ::ll::UntypedStorage<8, 32>  mUnkafe2d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleBinding& operator=(ModuleBinding const&);
    ModuleBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModuleBinding(::Scripting::ModuleBinding&&);

    MCAPI ModuleBinding(::Scripting::ModuleBinding const&);

    MCAPI ::Scripting::ModuleBinding& operator=(::Scripting::ModuleBinding&&);

    MCAPI ~ModuleBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::ModuleBinding&&);

    MCAPI void* $ctor(::Scripting::ModuleBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
