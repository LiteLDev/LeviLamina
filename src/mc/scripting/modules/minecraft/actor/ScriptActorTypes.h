#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypes {
public:
    // ScriptActorTypes inner types define
    using ActorTypesMap = ::std::
        unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType>>>
                                                                      mActorTypes;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Level const>> mLevel;
    ::ll::TypedStorage<1, 1, bool>                                    mRegisteredTypes;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::Level const& level);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
