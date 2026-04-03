#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace ScriptModuleMinecraft { class IScriptActorComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string_view, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptActorComponentFactory>>>
        mNativeFactories;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unordered_map<
        ::std::string_view,
        ::std::shared_ptr<::ScriptModuleMinecraft::IScriptActorComponentFactory>> const&
    _getOrCreateActorComponentFactories() const;

    MCAPI ::std::vector<::std::string_view> getSupportedComponentIds(::WeakRef<::EntityContext> entityRef) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(
        ::Scripting::ModuleBindingBuilder&                                       moduleBuilder,
        ::Scripting::Version const&                                              scriptingVersion,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&                 actorComponentTypesEnum,
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorComponents> const& actorComponents
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
