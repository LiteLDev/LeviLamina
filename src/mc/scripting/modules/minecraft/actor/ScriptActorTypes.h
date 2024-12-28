#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk883648;
    ::ll::UntypedStorage<8, 8>  mUnk5bfa27;
    ::ll::UntypedStorage<1, 1>  mUnk4ca34e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorTypes& operator=(ScriptActorTypes const&);
    ScriptActorTypes(ScriptActorTypes const&);
    ScriptActorTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void add(::Scripting::WeakLifetimeScope& scope, ::std::string const& actorName);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType>>
    get(::std::string const& actorName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::Level const& level);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
