#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/GlobalBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleBinding; }
// clang-format on

namespace Scripting {

struct ModuleBindingBundle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ModuleBinding>> modules;
    ::ll::TypedStorage<8, 144, ::Scripting::GlobalBinding>               globals;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleBindingBundle& operator=(ModuleBindingBundle const&);
    ModuleBindingBundle(ModuleBindingBundle const&);
    ModuleBindingBundle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S ModuleBindingBundle(::Scripting::ModuleBindingBundle&&);

    MCNAPI ~ModuleBindingBundle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::Scripting::ModuleBindingBundle&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
