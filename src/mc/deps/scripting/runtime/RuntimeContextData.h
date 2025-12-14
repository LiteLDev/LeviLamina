#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ModuleBindingBundle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
// clang-format on

namespace Scripting {

struct RuntimeContextData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>    scope;
    ::ll::TypedStorage<8, 168, ::Scripting::ModuleBindingBundle> bindings;
    ::ll::TypedStorage<8, 8, ::Scripting::IDependencyLoader*>    loader;
    ::ll::TypedStorage<8, 8, ::Scripting::IPrinter*>             printer;
    // NOLINTEND
};

} // namespace Scripting
