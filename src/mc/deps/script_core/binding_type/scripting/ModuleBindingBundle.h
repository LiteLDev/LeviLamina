#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/GlobalBinding.h"

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
};

} // namespace Scripting
